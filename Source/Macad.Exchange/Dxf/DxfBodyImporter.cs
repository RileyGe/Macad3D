using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using IxMilia.Dxf;
using IxMilia.Dxf.Entities;
using Macad.Common;
using Macad.Core;
using Macad.Core.Components;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;
using System.Diagnostics;

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
            Stopwatch sw = new();
            //int i = 0;
            foreach(var entity in reader.Entities)
            {
                switch (entity.EntityType)
                {
                    case IxMilia.Dxf.Entities.DxfEntityType.Insert:
                        var insert = entity as DxfInsert;
                        sw.Start();
                        tempBodies.Add(_CreateBody(insert));
                        sw.Stop();
                        break;
                }
                //i++;
            }
            string time = sw.Elapsed.ToString();
            Console.WriteLine(time);
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
            //int i = 0;
            List<TopoDS_Vertex> allPts = new();
            Dictionary<int, Dictionary<int, TopoDS_Edge>> indexedEdges = new();
            foreach (var entity in dxfInsert.Entities)
            {
                switch (entity.EntityType)
                {
                    case DxfEntityType.AttributeDefinition:
                        break;
                    case DxfEntityType.Face:
                        var dxfFace = entity as Dxf3DFace;
                        List<int> ptIndex = AddPoints(allPts, new DxfPoint[] {
                            dxfFace.FirstCorner,
                            dxfFace.SecondCorner,
                            dxfFace.ThirdCorner,
                            dxfFace.FourthCorner
                        });
                        var disPtIndex = ptIndex.Distinct().ToList();
                        if (disPtIndex.Count() > 2)
                        {
                            builder.Add(compound, MakeFace(allPts, indexedEdges, disPtIndex));
                        }                      
                        break;
                }
                //i++;
                //if (i == 2) break;
            }
            
            var unifiedCompound = new ShapeUpgrade_UnifySameDomain(compound, true, true, true);
            //unifiedCompound.SetLinearTolerance(1);
            //unifiedCompound.SetAngularTolerance(1);
            //unifiedCompound.AllowInternalEdges(true);
            unifiedCompound.Build();
            var solid = Mesh.Create(unifiedCompound.Shape());
            //var unifiedBody = new ShapeUpgrade_UnifySameDomain(solid);
            var body = Body.Create(solid);
            body.Name = dxfInsert.Name;
            builder.Dispose();          

            //var mesh = Mesh.Create(unifiedCompound.Shape());
            //var body = Body.Create(mesh);
            //body.Name = dxfInsert.Name;
            return body;
        }

        private static TopoDS_Shape MakeFace(List<TopoDS_Vertex> allPts, Dictionary<int, Dictionary<int, TopoDS_Edge>> indexedEdges, List<int> disPtIndex)
        {
            var edges = new List<TopoDS_Edge>();
            for (int i = 0; i < disPtIndex.Count; i++)
            {
                TopoDS_Edge edge = MakeOrFindEdge(allPts, indexedEdges, disPtIndex[i], disPtIndex[i == disPtIndex.Count - 1 ? 0 : i + 1]);
                BRep_Builder edgeBuilder = new();
                edgeBuilder.UpdateEdge(edge, 0.001);
                edges.Add(edge);
            }
            var wire = disPtIndex.Count == 3 ? new BRepBuilderAPI_MakeWire(edges[0], edges[1], edges[2]).Wire() :
                new BRepBuilderAPI_MakeWire(edges[0], edges[1], edges[2], edges[3]).Wire();

            var face = new BRepBuilderAPI_MakeFace(wire).Face();
            BRep_Builder faceBuilder = new();
            faceBuilder.UpdateFace(face, 0.001);
            return face;
        }

        private static TopoDS_Edge MakeOrFindEdge(List<TopoDS_Vertex> allPts, Dictionary<int, Dictionary<int, TopoDS_Edge>> indexedEdges, int v1, int v2)
        {
            
            //throw new NotImplementedException();
            int big = v1 > v2 ? v1 : v2;
            int small = v1 > v2 ? v2 : v1;
            indexedEdges.TryGetValue(small, out var bigDic);
            TopoDS_Edge edge;
            if(bigDic == null)
            {
                edge = MakeEdgeWith2Points(allPts[small], allPts[big]);
                Dictionary<int, TopoDS_Edge> keyValuePairs = new();
                keyValuePairs.Add(big, edge);
                indexedEdges.Add(small, keyValuePairs);
            }
            else
            {
                bigDic.TryGetValue(big, out edge);
                if(edge == null)
                {
                    edge = MakeEdgeWith2Points(allPts[small], allPts[big]);
                    bigDic.Add(big, edge);
                }
            }
            return edge;
        }

        private static TopoDS_Edge MakeEdgeWith2Points(TopoDS_Vertex smallPoint, TopoDS_Vertex bigPoint)
        {
            var edge = new BRepBuilderAPI_MakeEdge(smallPoint, bigPoint).Edge();
            BRep_Builder edgeBuilder = new();
            edgeBuilder.UpdateEdge(edge, 0.001);
            return edge;
        }

        private static List<int> AddPoints(List<TopoDS_Vertex> allPts, DxfPoint[] dxfPoints)
        {
            List<int> ptIndex = new();            
            foreach(var pt in dxfPoints)
            {
                Pnt ptt = new Pnt(pt.X, pt.Y, pt.Z);
                var index = allPts.IndexOfFirst(x => x.Pnt().X == ptt.X && x.Pnt().Y == ptt.Y && x.Pnt().Z == ptt.Z);
                if (index >= 0) ptIndex.Add(index);
                else
                {
                    BRep_Builder aBuilder = new();
                    TopoDS_Vertex aVertex = new BRepBuilderAPI_MakeVertex(ptt).Vertex();
                    aBuilder.UpdateVertex(aVertex, ptt, 0.001);
                    aBuilder.Dispose();
                    allPts.Add(aVertex);
                    ptIndex.Add(allPts.Count - 1);                    
                }
            }
            return ptIndex;
        }

        public static TopoDS_Face MakeFace(Pnt[] points)
        {
            var edges = new List<TopoDS_Edge>();
            for (int i = 0; i < points.Length; i++)
            {
                //gp_Pnt pt = new gp_Pnt()
                BRep_Builder aBuilder = new();
                TopoDS_Vertex aVertex = new BRepBuilderAPI_MakeVertex(points[i]).Vertex();
                aBuilder.UpdateVertex(aVertex, points[i], 0.001);
                aBuilder.Dispose();

                BRep_Builder bBuilder = new();
                TopoDS_Vertex bVertex = new BRepBuilderAPI_MakeVertex(points[i == points.Length - 1 ? 0 : i + 1]).Vertex();
                bBuilder.UpdateVertex(bVertex, points[i == points.Length - 1 ? 0 : i + 1], 0.001);
                bBuilder.Dispose();
                //aBuilder.TopoDS_TShape(aVertex, aPoint, Precision::Confusion());
                //aVertex.Orientation(TopAbs_REVERSED);
                //var v = new BRepBuilderAPI_MakeVertex(points[0]);
                //var edge = new BRepBuilderAPI_MakeEdge(points[i], points[i == points.Length - 1 ? 0 : i + 1]).Edge();
                var edge = new BRepBuilderAPI_MakeEdge(aVertex, bVertex).Edge();
                //edge.Reverse();
                BRep_Builder edgeBuilder = new();
                edgeBuilder.UpdateEdge(edge, 0.001);
                edges.Add(edge);
            }
            //edges[2].Reverse();
            var wire = points.Length == 3 ? new BRepBuilderAPI_MakeWire(edges[0], edges[1], edges[2]).Wire() :
                new BRepBuilderAPI_MakeWire(edges[0], edges[1], edges[2], edges[3]).Wire();

            //var edge_fix = new ShapeFix_Edge(edges[0]);
            //var wireFix = new ShapeFix_Wireframe(wire);
            var face = new BRepBuilderAPI_MakeFace(wire).Face();
            BRep_Builder faceBuilder = new();
            faceBuilder.UpdateFace(face, 0.001);
            return face;
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