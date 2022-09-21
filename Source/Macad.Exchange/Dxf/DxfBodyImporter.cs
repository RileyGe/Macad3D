using System.Collections.Generic;
using System.IO;
using System.Linq;
using IxMilia.Dxf;
using IxMilia.Dxf.Entities;
using Macad.Common;
using Macad.Core.Components;
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
                                var face = MakeFace(occtPts);
                                builder.Add(compound, face);
                            }                                                       
                            else                            
                                builder.Add(compound, MakeFace(occtPts));                                                                               
                        }                      
                        break;
                }
                i++;
                //if (i == 2) break;
            }
            
            var unifiedCompound = new ShapeUpgrade_UnifySameDomain(compound, true, true, true);
            unifiedCompound.SetLinearTolerance(1);
            unifiedCompound.SetAngularTolerance(1);
            unifiedCompound.AllowInternalEdges(true);
            unifiedCompound.Build();
            var solid = Solid.Create(unifiedCompound.Shape());
            //var unifiedBody = new ShapeUpgrade_UnifySameDomain(solid);
            var body = Body.Create(solid);
            body.Name = dxfInsert.Name;
            builder.Dispose();          

            //var mesh = Mesh.Create(unifiedCompound.Shape());
            //var body = Body.Create(mesh);
            //body.Name = dxfInsert.Name;
            return body;
        }
        public static TopoDS_Face MakeFace(Pnt[] points)
        {
            var edges = new List<TopoDS_Edge>();
            for (int i = 0; i < points.Length; i++)
            {
                //gp_Pnt pt = new gp_Pnt()
                //BRep_Builder aBuilder = new();
                //TopoDS_Vertex aVertex = new BRepBuilderAPI_MakeVertex(points[i]).Vertex();                
                //aBuilder.UpdateVertex(aVertex, points[i], 0.001);
                //aBuilder.Dispose();

                //BRep_Builder bBuilder = new();
                //TopoDS_Vertex bVertex = new BRepBuilderAPI_MakeVertex(points[i == points.Length - 1 ? 0 : i + 1]).Vertex();
                //bBuilder.UpdateVertex(bVertex, points[i == points.Length - 1 ? 0 : i + 1], 0.001);                
                //bBuilder.Dispose();
                //aBuilder.TopoDS_TShape(aVertex, aPoint, Precision::Confusion());
                //aVertex.Orientation(TopAbs_REVERSED);
                //var v = new BRepBuilderAPI_MakeVertex(points[0]);
                var edge = new BRepBuilderAPI_MakeEdge(points[i], points[i == points.Length - 1 ? 0 : i + 1]).Edge();
                BRep_Builder edgeBuilder = new();
                edgeBuilder.UpdateEdge(edge, 0.001);
                edges.Add(edge);
            } 
            var wire = points.Length == 3 ? new BRepBuilderAPI_MakeWire(edges[0], edges[1], edges[2]).Wire() :
                new BRepBuilderAPI_MakeWire(edges[0], edges[1], edges[2], edges[3]).Wire();

            //var edge_fix = new ShapeFix_Edge(edges[0]);
            //var wireFix = new ShapeFix_Wireframe(wire);
            return new BRepBuilderAPI_MakeFace(wire).Face();
            //BRep_Builder fBuilder = new();
            //var ff = face.Face();
            //fBuilder.UpdateFace(ff, 0.001);            
            //var fix = new ShapeFix_Face(face.Face());
            //fix.SetMaxTolerance(0.1);

            //fix.SetMinTolerance(0.01);
            //fix.fa
            //if(face.Error() != BRepBuilderAPI_FaceError.BRepBuilderAPI_FaceDone)
            //{
            //    switch (face.Error())
            //    {
            //        case BRepBuilderAPI_FaceError.BRepBuilderAPI_NotPlanar: 
            //            Dir v1 = (points[1] - points[0]).ToDir();
            //            Dir v2 = (points[2] - points[0]).ToDir();
            //            Pln pl = new Pln(points[0], v1.Crossed(v2));
            //            var pt2d = ProjLib.Project(pl, points[3]);
            //            var pt4 = ElSLib.Value(pt2d.X, pt2d.Y, pl);
            //            points[^1] = pt4;
            //            return MakeFace(points);
            //    }
            //}
            //return fix.Face();
            //return ff;
        }
    }
}