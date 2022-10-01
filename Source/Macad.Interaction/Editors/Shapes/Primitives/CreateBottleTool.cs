using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static Macad.Interaction.SketchCommands;

namespace Macad.Interaction.Editors.Shapes.Primitives
{
    internal class CreateBottleTool : Tool
    {
        double myHeight = 70, myWidth = 50, myThickness = 30;
        public override bool Start()
        {
            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(null); //取消选择
            
            // Profile : Define Support Points
            Pnt aPnt1 = new(-myWidth / 2.0, 0, 0);
            Pnt aPnt2 = new(-myWidth / 2.0, -myThickness / 4.0, 0);
            Pnt aPnt3 = new(0, -myThickness / 2.0, 0);
            Pnt aPnt4 = new(myWidth / 2.0, -myThickness / 4.0, 0);
            Pnt aPnt5 = new(myWidth / 2.0, 0, 0);

            // Profile : Define the Geometry
            Geom_TrimmedCurve anArcOfCircle = new GC_MakeArcOfCircle(aPnt2, aPnt3, aPnt4).Value();
            Geom_TrimmedCurve aSegment1 = new GC_MakeSegment(aPnt1, aPnt2).Value();
            Geom_TrimmedCurve aSegment2 = new GC_MakeSegment(aPnt4, aPnt5).Value();

            // Profile : Define the Topology
            TopoDS_Edge anEdge1 = new BRepBuilderAPI_MakeEdge(aSegment1).Edge();
            TopoDS_Edge anEdge2 = new BRepBuilderAPI_MakeEdge(anArcOfCircle).Edge();
            TopoDS_Edge anEdge3 = new BRepBuilderAPI_MakeEdge(aSegment2).Edge();
            TopoDS_Wire aWire = new BRepBuilderAPI_MakeWire(anEdge1, anEdge2, anEdge3).Wire();

            // Complete Profile
            Ax1 xAxis = gp.OX;
            Trsf aTrsf = new();
            aTrsf.SetMirror(xAxis);
            BRepBuilderAPI_Transform aBRepTrsf = new(aWire, aTrsf);
            TopoDS_Shape aMirroredShape = aBRepTrsf.Shape();
            TopoDS_Wire aMirroredWire = TopoDS.Wire(aMirroredShape);

            BRepBuilderAPI_MakeWire mkWire = new();
            mkWire.Add(aWire);
            mkWire.Add(aMirroredWire);
            TopoDS_Wire myWireProfile = mkWire.Wire();

            // Body : Prism the Profile
            TopoDS_Face myFaceProfile = new BRepBuilderAPI_MakeFace(myWireProfile).Face();
            Vec aPrismVec = new(0, 0, myHeight);
            TopoDS_Shape myBody = new BRepPrimAPI_MakePrism(myFaceProfile, aPrismVec).Shape();

            // Body : Apply Fillets
            BRepFilletAPI_MakeFillet mkFillet = new(myBody);
            TopExp_Explorer anEdgeExplorer = new(myBody, TopAbs_ShapeEnum.TopAbs_EDGE);
            while (anEdgeExplorer.More())
            {
                TopoDS_Edge anEdge = TopoDS.Edge(anEdgeExplorer.Current());
                //Add edge to fillet algorithm
                mkFillet.Add(myThickness / 12.0, anEdge);
                anEdgeExplorer.Next();
            }
            myBody = mkFillet.Shape();

            // Body : Add the Neck
            Pnt neckLocation = new(0, 0, myHeight);
            Dir neckAxis = gp.DZ;
            Ax2 neckAx2 = new(neckLocation, neckAxis);
            //Ax3 neckAx2 = new(neckLocation, neckAxis);
            double myNeckRadius = 0.25 * myThickness;
            double myNeckHeight = myHeight / 10.0;

            BRepPrimAPI_MakeCylinder MKCylinder = new(neckAx2, myNeckRadius, myNeckHeight);
            TopoDS_Shape myNeck = MKCylinder.Shape();

            myBody = new BRepAlgoAPI_Fuse(myBody, myNeck).Shape();

            // Body : Create a Hollowed Solid
            TopoDS_Face faceToRemove = null;
            double zMax = -1;

            for (TopExp_Explorer aFaceExplorer = new(myBody, TopAbs_ShapeEnum.TopAbs_FACE); aFaceExplorer.More(); aFaceExplorer.Next())
            {
                TopoDS_Face aFace = TopoDS.Face(aFaceExplorer.Current());
                // Check if <aFace> is the top face of the bottle's neck 
                Geom_Surface aSurface = BRep_Tool.Surface(aFace);
                if (aSurface.GetType() == typeof(Geom_Plane))
                {
                    Geom_Plane aPlane = aSurface as Geom_Plane;
                    Pnt aPntt = aPlane.Location();
                    double aZ = aPntt.Z;
                    if (aZ > zMax)
                    {
                        zMax = aZ;
                        faceToRemove = aFace;
                    }
                }
            }

            TopTools_ListOfShape facesToRemove = new();
            facesToRemove.Append(faceToRemove);
            BRepOffsetAPI_MakeThickSolid aSolidMaker = new();
            aSolidMaker.MakeThickSolidByJoin(myBody, facesToRemove, -myThickness / 50.0, 1.0e-3);
            myBody = aSolidMaker.Shape();
            // Threading : Create Surfaces
            Ax3 neckAx3 = new(neckLocation, neckAxis);
            Geom_CylindricalSurface aCyl1 = new(neckAx3, myNeckRadius * 0.99);
            Geom_CylindricalSurface aCyl2 = new(neckAx3, myNeckRadius * 1.05);

            // Threading : Define 2D Curves
            Pnt2d aPnt = new(2 * Math.PI, myNeckHeight / 2);
            Dir2d aDir = new(2 * Math.PI, myNeckHeight / 4);
            Ax2d anAx2d = new(aPnt, aDir);

            double aMajor = 2 * Math.PI;
            double aMinor = myNeckHeight / 10;
            Geom2d_Ellipse anEllipse1 = new(anAx2d, aMajor, aMinor);
            Geom2d_Ellipse anEllipse2 = new(anAx2d, aMajor, aMinor / 4);
            Geom2d_TrimmedCurve anArc1 = new(anEllipse1, 0, Math.PI);
            Geom2d_TrimmedCurve anArc2 = new(anEllipse2, 0, Math.PI);

            Pnt2d anEllipsePnt1 = anEllipse1.Value(0);
            Pnt2d anEllipsePnt2 = anEllipse1.Value(Math.PI);
            var aSegment = new GCE2d_MakeSegment(anEllipsePnt1, anEllipsePnt2).Value();

            // Threading : Build Edges and Wires
            var anEdge1OnSurf1 = new BRepBuilderAPI_MakeEdge(anArc1, aCyl1).Edge();
            var anEdge2OnSurf1 = new BRepBuilderAPI_MakeEdge(aSegment, aCyl1).Edge();
            var anEdge1OnSurf2 = new BRepBuilderAPI_MakeEdge(anArc2, aCyl2).Edge();
            var anEdge2OnSurf2 = new BRepBuilderAPI_MakeEdge(aSegment, aCyl2).Edge();

            var threadingWire1 = new BRepBuilderAPI_MakeWire(anEdge1OnSurf1, anEdge2OnSurf1).Wire();
            var threadingWire2 = new BRepBuilderAPI_MakeWire(anEdge1OnSurf2, anEdge2OnSurf2).Wire();

            BRepLib.BuildCurves3d(threadingWire1);
            BRepLib.BuildCurves3d(threadingWire2);

            // Create Threading 
            BRepOffsetAPI_ThruSections aTool = new(true);
            aTool.AddWire(threadingWire1);
            aTool.AddWire(threadingWire2);
            aTool.CheckCompatibility(false);
            var myThreading = aTool.Shape();

            // Building the Resulting Compound 
            TopoDS_Compound aRes = new();
            BRep_Builder aBuilder = new();
            aBuilder.MakeCompound(aRes);
            aBuilder.Add(aRes, myBody);
            aBuilder.Add(aRes, myThreading);

            var solid = Solid.Create(aRes);
            var body = Body.Create(solid);
            
            InteractiveContext.Current.Document.Add(body);
            InteractiveContext.Current.UndoHandler.Commit();
            ((Tool)this).Stop();
            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(body);
            return true;
        }
    }
}
