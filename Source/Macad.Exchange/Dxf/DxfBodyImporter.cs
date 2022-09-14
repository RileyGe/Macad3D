using System.Collections.Generic;
using System.IO;
using System.Linq;
using IxMilia.Dxf;
using IxMilia.Dxf.Entities;
using Macad.Common;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Exchange
{
    public static class DxfBodyImporter
    {
        //class ObjectDescription
        //{
        //    public string Name;
        //    public List<int> Indices;
        //    public TopoDS_Face Face;

        //    public static ObjectDescription Create()
        //    {
        //        return new ObjectDescription()
        //        {
        //            Indices = new List<int>(),
        //        };
        //    }
        //}

        //--------------------------------------------------------------------------------------------------

        public static bool Import(string fileName, out IEnumerable<Body> bodies)
        {
            bodies = null;
            var tempBodies = new List<Body>();
            DxfFile reader = DxfFile.Load(fileName);
            //int i = 0;
            foreach(var entity in reader.Entities)
            {
                switch (entity.EntityType)
                {
                    case IxMilia.Dxf.Entities.DxfEntityType.Insert:
                        var insert = entity as DxfInsert;
                        tempBodies.Add(_CreateBody(insert));
                        break;
                }
                //i++;
            }
            //while (reader.MoveNext(out cmd))
            //{
            //    switch (cmd)
            //    {
            //        case "o":
            //        case "g":
            //            if (currentObject.Indices.Count != 0)
            //                objectDescList.Add(currentObject);
            //            currentObject = ObjectDescription.Create();
            //            reader.GetObjectOrGroup(out currentObject.Name);
            //            break;

            //        case "v":
            //            if (!reader.GetVertex(out var vertex))
            //                return false;
            //            vertices.Add(vertex);
            //            break;

            //        case "f":
            //        case "fo":
            //            if (!reader.GetFace(out var indices))
            //                continue;

            //            // Negative indices must be correctly re-assigned
            //            // -1 => vertices.Count
            //            // -2 => vertices.Count-1
            //            for (int i = 0; i < indices.Length; i++)
            //            {
            //                if (indices[i] < 0)
            //                    indices[i] = vertices.Count + (indices[i] + 1);
            //            }

            //            if (indices.Length == 3)
            //            {
            //                currentObject.Indices.AddRange(indices.Take(3).Select(index => index - 1)); // Correct lower bound (from 1 to 0)
            //            }
            //            else
            //            {
            //                var triangulator = new EarClippingTriangulator();
            //                var result = triangulator.DoTriangulation(vertices, indices.Select(index => index - 1)); // Correct lower bound (from 1 to 0)
            //                if (result != null)
            //                {
            //                    currentObject.Indices.AddRange(result);
            //                }
            //            }

            //            break;
            //    }
            //}

            //if (currentObject.Indices.Count != 0)
            //    objectDescList.Add(currentObject);

            //_CreateFaces(objectDescList, vertices);

            //bodies = _CreateBodies(objectDescList, Path.GetFileNameWithoutExtension(fileName), singleBody);

            //// Cleanup
            //fs.Close();
            bodies = tempBodies;
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        static Body _CreateBody(DxfInsert dxfInsert)
        {            
            
            var compound = new TopoDS_Compound();
            var builder = new BRep_Builder();
            builder.MakeCompound(compound);
            int i = 0;
            foreach (var entity in dxfInsert.Entities)
            {
                switch (entity.EntityType)
                {
                    case DxfEntityType.AttributeDefinition:
                        break;
                    case DxfEntityType.Face:
                        var dxfFace = entity as Dxf3DFace;
                        var pts = new List<DxfPoint>() {
                            dxfFace.FirstCorner,
                            dxfFace.SecondCorner,
                            dxfFace.ThirdCorner,
                            dxfFace.FourthCorner
                        };
                        var disPts = pts.Distinct();
                        if (disPts.Count() > 2)
                        {
                            var occtPts = disPts.Select(x => new Pnt(x.X, x.Y, x.Z)).ToArray();
                            //if (i == 2) break;
                            if (disPts.Count() == 4)
                            {
                                var face = TopoUtils.MakeFace(occtPts);
                                builder.Add(compound, face);
                            }                                                       
                            else                            
                                builder.Add(compound, MakeFaceWith3Points(occtPts));                                                                               
                        }                      
                        break;
                }
                i++;
                //if (i == 2) break;
            }
            //compound.Location()                    
            var body = Body.Create(Solid.Create(compound));
            body.Name = dxfInsert.Name;           
            builder.Dispose();
            //compound.Dispose();            
            return body;
        }
        public static TopoDS_Face MakeFaceWith3Points(Pnt[] points)
        {
            //Debug.Assert(points.Length == 4);

            var edges = new TopoDS_Edge[3];
            for (int i = 0; i < 3; i++)
            {
                edges[i] = new BRepBuilderAPI_MakeEdge(points[i], points[i == 2 ? 0 : i + 1]).Edge();
            }

            var wire = new BRepBuilderAPI_MakeWire(edges[0], edges[1], edges[2]).Wire();
            return new BRepBuilderAPI_MakeFace(wire).Face();
        }
    }
}