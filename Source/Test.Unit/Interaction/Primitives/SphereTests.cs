﻿using System.IO;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Test.Utils;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives
{
    [TestFixture]
    public class SphereTests
    {
        const string _BasePath = @"Interaction\Primitives\Sphere";

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
        public void CreateSphere()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSphereTool());

            // Center point
            ctx.ViewportController.MouseMove(new Point(250, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere1"));

            // Radius
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere2"));

            // Create
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(0, 0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere3"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EditorIdle()
        {
            var ctx = Context.Current;
            var sphere = TestGeomGenerator.CreateSphere();

            var editor = Editor.CreateEditor(sphere);
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
        public void LiveScale()
        {
            var ctx = Context.Current;
            var sphere = TestGeomGenerator.CreateSphere();

            var editor = Editor.CreateEditor(sphere);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(352, 309);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(327, 297);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale03"));

                // Cleanup
                editor.Stop();
            });
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleCorner()
        {
            var ctx = Context.Current;
            var sphere = TestGeomGenerator.CreateSphere();

            var editor = Editor.CreateEditor(sphere);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(450, 138);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(478, 123);
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
            var sphere = TestGeomGenerator.CreateSphere();
            sphere.Body.Rotation = new Quaternion(35.0.ToRad(), 0, 0);

            var editor = Editor.CreateEditor(sphere);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(385, 103);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(415, 74);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated03"));

                // Cleanup
                editor.Stop();
            });
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleClamp()
        {
            var ctx = Context.Current;
            var sphere = TestGeomGenerator.CreateSphere();

            var editor = Editor.CreateEditor(sphere);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Workspace.GridStep = 3.0;
            Assert.Multiple(() =>
            {
                ctx.MoveTo(352, 309, ModifierKeys.Control);
                //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamp01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(327, 297, ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamp02"));
            
                ctx.MoveTo(274, 265, ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamp03"));
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
            var sphere = TestGeomGenerator.CreateSphere();

            var editor = Editor.CreateEditor(sphere);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(352, 309, ModifierKeys.Shift);
                //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(274, 265, ModifierKeys.Shift);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter02"));

                ctx.ViewportController.MouseUp();

                // Cleanup
                editor.Stop();
            });
        }
    }
}