﻿using System.IO;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Test.Utils;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives
{
    [TestFixture]
    public class CylinderTests
    {
        const string _BasePath = @"Interaction\Primitives\Cylinder";

        //--------------------------------------------------------------------------------------------------

        [SetUp]
        public void SetUp()
        {
            Context.InitWithView(500);
        }

        [TearDown]
        public void TearDown()
        {
            Context.Current.Deinit();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateCylinder()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateCylinderTool());

            // Center point
            ctx.ViewportController.MouseMove(new Point(250, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCylinder1"));

            // Radius
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCylinder2"));

            // Height
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 200));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCylinder3"));

            // Create
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(0, 0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCylinder4"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EditorIdle()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
                            
                // Cleanup
                editor.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
            });
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleHeight()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(251, 180);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleHeight01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(249, 112);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleHeight02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleHeight03"));

                // Cleanup
                editor.Stop();
            });
        }
                        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleRadius()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(366, 318);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRadius01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(393, 338);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRadius02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRadius03"));

                // Cleanup
                editor.Stop();
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleCorner()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(476, 183);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(435, 205);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner03"));

                // Cleanup
                editor.Stop();
            });
        }
                        
        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void LiveScaleRotated()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();
            cylinder.Body.Rotation = new Quaternion(35.0.ToRad(), 0, 0);

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(385, 147);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(480, 100);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated03"));

                // Cleanup
                editor.Stop();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleRadiusLimit()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(366, 320);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(271, 249);
                ctx.MoveTo(62, 138);
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRadiusLimit01"));

                // Cleanup
                editor.Stop();
            });
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleHeightLimit()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(250, 180);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(250, 244);
                ctx.MoveTo(62, 388);
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleHeightLimit01"));

                // Cleanup
                editor.Stop();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleClamped()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Workspace.GridStep = 5.0;
            Assert.Multiple(() =>
            {
                ctx.MoveTo(476, 183, ModifierKeys.Control);
                //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(435, 205, ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped02"));
            
                ctx.MoveTo(342, 232, ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped03"));

                ctx.ViewportController.MouseUp();

                // Cleanup
                editor.Stop();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleCenter()
        {
            var ctx = Context.Current;
            var cylinder = TestGeomGenerator.CreateCylinder();

            var editor = Editor.CreateEditor(cylinder);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(476, 183, ModifierKeys.Shift);
                //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(435, 205, ModifierKeys.Shift);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter02"));
            
                ctx.ViewportController.MouseUp();

                // Cleanup
                editor.Stop();
            });
        }
    }
}