// Generated wrapper code for package GC

#pragma once

#include "GC.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GC_Root
//---------------------------------------------------------------------
/// <summary>
/// This class implements the common services for
/// all classes of gce which report error.
/// </summary>
public ref class GC_Root : public BaseClass<::GC_Root>
{

#ifdef Include_GC_Root_h
public:
	Include_GC_Root_h
#endif

protected:
	GC_Root(InitMode init)
		: BaseClass<::GC_Root>( init )
	{}

public:
	GC_Root(::GC_Root* nativeInstance)
		: BaseClass<::GC_Root>( nativeInstance, true )
	{}

	GC_Root(::GC_Root& nativeInstance)
		: BaseClass<::GC_Root>( &nativeInstance, false )
	{}

	property ::GC_Root* NativeInstance
	{
		::GC_Root* get()
		{
			return static_cast<::GC_Root*>(_NativeInstance);
		}
	}

public:
	GC_Root(Macad::Occt::GC_Root^ parameter1);
	GC_Root();
		/// <summary>
	/// Returns true if the construction is successful.
	/// </summary>
bool IsDone();
		/// <summary>
	/// Returns the status of the construction:
	/// -   gce_Done, if the construction is successful, or
	/// -   another value of the gce_ErrorType enumeration
	/// indicating why the construction failed.
	/// </summary>
Macad::Occt::gce_ErrorType Status();
}; // class GC_Root

//---------------------------------------------------------------------
//  Class  GC_MakeArcOfCircle
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for an
/// arc of circle in 3D space. The result is a Geom_TrimmedCurve curve.
/// A MakeArcOfCircle object provides a framework for:
/// -   defining the construction of the arc of circle,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the
/// Value function returns the constructed arc of circle.
/// </summary>
public ref class GC_MakeArcOfCircle sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeArcOfCircle_h
public:
	Include_GC_MakeArcOfCircle_h
#endif

public:
	GC_MakeArcOfCircle(::GC_MakeArcOfCircle* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeArcOfCircle(::GC_MakeArcOfCircle& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeArcOfCircle* NativeInstance
	{
		::GC_MakeArcOfCircle* get()
		{
			return static_cast<::GC_MakeArcOfCircle*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Make an arc of circle (TrimmedCurve from Geom) from
	/// a circle between two angles Alpha1 and Alpha2
	/// given in radiians.
	/// </summary>
GC_MakeArcOfCircle(Macad::Occt::gp_Circ^ Circ, double Alpha1, double Alpha2, bool Sense);
		/// <summary>
	/// Make an arc of circle (TrimmedCurve from Geom) from
	/// a circle between point <P> and the angle Alpha
	/// given in radians.
	/// </summary>
GC_MakeArcOfCircle(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt P, double Alpha, bool Sense);
		/// <summary>
	/// Make an arc of circle (TrimmedCurve from Geom) from
	/// a circle between two points P1 and P2.
	/// </summary>
GC_MakeArcOfCircle(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool Sense);
		/// <summary>
	/// Make an arc of circle (TrimmedCurve from Geom) from
	/// three points P1,P2,P3 between two points P1 and P2.
	/// </summary>
GC_MakeArcOfCircle(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
		/// <summary>
	/// Make an arc of circle (TrimmedCurve from Geom) from
	/// two points P1,P2 and the tangente to the solution at
	/// the point P1.
	/// The orientation of the arc is:
	/// -   the sense determined by the order of the points P1, P3 and P2;
	/// -   the sense defined by the vector V; or
	/// -   for other syntaxes:
	/// -   the sense of Circ if Sense is true, or
	/// -   the opposite sense if Sense is false.
	/// Note: Alpha1, Alpha2 and Alpha are angle values, given in radians.
	/// Warning
	/// If an error occurs (that is, when IsDone returns
	/// false), the Status function returns:
	/// -   gce_ConfusedPoints if:
	/// -   any 2 of the 3 points P1, P2 and P3 are coincident, or
	/// -   P1 and P2 are coincident; or
	/// -   gce_IntersectionError if:
	/// -   P1, P2 and P3 are collinear and not coincident, or
	/// -   the vector defined by the points P1 and
	/// P2 is collinear with the vector V.
	/// </summary>
GC_MakeArcOfCircle(Macad::Occt::Pnt P1, Macad::Occt::Vec V, Macad::Occt::Pnt P2);
	GC_MakeArcOfCircle(Macad::Occt::GC_MakeArcOfCircle^ parameter1);
		/// <summary>
	/// Returns the constructed arc of circle.
	/// Exceptions StdFail_NotDone if no arc of circle is constructed.
	/// </summary>
Macad::Occt::Geom_TrimmedCurve^ Value();
}; // class GC_MakeArcOfCircle

//---------------------------------------------------------------------
//  Class  GC_MakeArcOfEllipse
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for an arc
/// of ellipse in 3D space. The result is a Geom_TrimmedCurve curve.
/// A MakeArcOfEllipse object provides a framework for:
/// -   defining the construction of the arc of ellipse,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the
/// Value function returns the constructed arc of ellipse.
/// </summary>
public ref class GC_MakeArcOfEllipse sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeArcOfEllipse_h
public:
	Include_GC_MakeArcOfEllipse_h
#endif

public:
	GC_MakeArcOfEllipse(::GC_MakeArcOfEllipse* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeArcOfEllipse(::GC_MakeArcOfEllipse& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeArcOfEllipse* NativeInstance
	{
		::GC_MakeArcOfEllipse* get()
		{
			return static_cast<::GC_MakeArcOfEllipse*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs an arc of Ellipse (TrimmedCurve from Geom) from
	/// a Ellipse between two parameters Alpha1 and Alpha2.
	/// </summary>
GC_MakeArcOfEllipse(Macad::Occt::gp_Elips^ Elips, double Alpha1, double Alpha2, bool Sense);
		/// <summary>
	/// Constructs an arc of Ellipse (TrimmedCurve from Geom) from
	/// a Ellipse between point <P> and the angle Alpha
	/// given in radians.
	/// </summary>
GC_MakeArcOfEllipse(Macad::Occt::gp_Elips^ Elips, Macad::Occt::Pnt P, double Alpha, bool Sense);
		/// <summary>
	/// Constructs an arc of Ellipse (TrimmedCurve from Geom) from
	/// a Ellipse between two points P1 and P2.
	/// The orientation of the arc of ellipse is:
	/// -   the sense of Elips if Sense is true, or
	/// -   the opposite sense if Sense is false.
	/// Notes:
	/// -   Alpha1, Alpha2 and Alpha are angle values, given in radians.
	/// -   IsDone always returns true.
	/// </summary>
GC_MakeArcOfEllipse(Macad::Occt::gp_Elips^ Elips, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool Sense);
	GC_MakeArcOfEllipse(Macad::Occt::GC_MakeArcOfEllipse^ parameter1);
		/// <summary>
	/// Returns the constructed arc of ellipse.
	/// </summary>
Macad::Occt::Geom_TrimmedCurve^ Value();
}; // class GC_MakeArcOfEllipse

//---------------------------------------------------------------------
//  Class  GC_MakeArcOfHyperbola
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for an arc
/// of hyperbola in 3D space. The result is a Geom_TrimmedCurve curve.
/// A MakeArcOfHyperbola object provides a framework for:
/// -   defining the construction of the arc of hyperbola,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the
/// Value function returns the constructed arc of hyperbola.
/// </summary>
public ref class GC_MakeArcOfHyperbola sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeArcOfHyperbola_h
public:
	Include_GC_MakeArcOfHyperbola_h
#endif

public:
	GC_MakeArcOfHyperbola(::GC_MakeArcOfHyperbola* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeArcOfHyperbola(::GC_MakeArcOfHyperbola& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeArcOfHyperbola* NativeInstance
	{
		::GC_MakeArcOfHyperbola* get()
		{
			return static_cast<::GC_MakeArcOfHyperbola*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates an arc of Hyperbola (TrimmedCurve from Geom) from
	/// a Hyperbola between two parameters Alpha1 and Alpha2
	/// (given in radians).
	/// </summary>
GC_MakeArcOfHyperbola(Macad::Occt::gp_Hypr^ Hypr, double Alpha1, double Alpha2, bool Sense);
		/// <summary>
	/// Creates an arc of Hyperbola (TrimmedCurve from Geom) from
	/// a Hyperbola between point <P> and the parameter
	/// Alpha (given in radians).
	/// </summary>
GC_MakeArcOfHyperbola(Macad::Occt::gp_Hypr^ Hypr, Macad::Occt::Pnt P, double Alpha, bool Sense);
		/// <summary>
	/// Creates an arc of Hyperbola (TrimmedCurve from Geom) from
	/// a Hyperbola between two points P1 and P2.
	/// The orientation of the arc of hyperbola is:
	/// -   the sense of Hypr if Sense is true, or
	/// -   the opposite sense if Sense is false.
	/// </summary>
GC_MakeArcOfHyperbola(Macad::Occt::gp_Hypr^ Hypr, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool Sense);
	GC_MakeArcOfHyperbola(Macad::Occt::GC_MakeArcOfHyperbola^ parameter1);
		/// <summary>
	/// Returns the constructed arc of hyperbola.
	/// </summary>
Macad::Occt::Geom_TrimmedCurve^ Value();
}; // class GC_MakeArcOfHyperbola

//---------------------------------------------------------------------
//  Class  GC_MakeArcOfParabola
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for an arc
/// of parabola in 3D space. The result is a Geom_TrimmedCurve curve.
/// A MakeArcOfParabola object provides a framework for:
/// -   defining the construction of the arc of parabola,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the
/// Value function returns the constructed arc of parabola.
/// </summary>
public ref class GC_MakeArcOfParabola sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeArcOfParabola_h
public:
	Include_GC_MakeArcOfParabola_h
#endif

public:
	GC_MakeArcOfParabola(::GC_MakeArcOfParabola* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeArcOfParabola(::GC_MakeArcOfParabola& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeArcOfParabola* NativeInstance
	{
		::GC_MakeArcOfParabola* get()
		{
			return static_cast<::GC_MakeArcOfParabola*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates an arc of Parabola (TrimmedCurve from Geom) from
	/// a Parabola between two parameters Alpha1 and Alpha2
	/// (given in radians).
	/// </summary>
GC_MakeArcOfParabola(Macad::Occt::gp_Parab^ Parab, double Alpha1, double Alpha2, bool Sense);
		/// <summary>
	/// Creates an arc of Parabola (TrimmedCurve from Geom) from
	/// a Parabola between point <P> and the parameter
	/// Alpha (given in radians).
	/// </summary>
GC_MakeArcOfParabola(Macad::Occt::gp_Parab^ Parab, Macad::Occt::Pnt P, double Alpha, bool Sense);
		/// <summary>
	/// Creates an arc of Parabola (TrimmedCurve from Geom) from
	/// a Parabola between two points P1 and P2.
	/// </summary>
GC_MakeArcOfParabola(Macad::Occt::gp_Parab^ Parab, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool Sense);
	GC_MakeArcOfParabola(Macad::Occt::GC_MakeArcOfParabola^ parameter1);
		/// <summary>
	/// Returns the constructed arc of parabola.
	/// </summary>
Macad::Occt::Geom_TrimmedCurve^ Value();
}; // class GC_MakeArcOfParabola

//---------------------------------------------------------------------
//  Class  GC_MakeCircle
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create Cirlec from Geom.
/// 
/// * Create a Circle parallel to another and passing
/// though a point.
/// * Create a Circle parallel to another at the distance
/// Dist.
/// * Create a Circle passing through 3 points.
/// * Create a Circle with its center and the normal of its
/// plane and its radius.
/// * Create a Circle with its axis and radius.
/// The circle's parameter is the angle (Radian).
/// The parametrization range is [0,2*PI].
/// The circle is a closed and periodic curve.
/// The center of the circle is the Location point of its axis
/// placement. The XDirection of the axis placement defines the
/// origin of the parametrization.
/// </summary>
public ref class GC_MakeCircle sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeCircle_h
public:
	Include_GC_MakeCircle_h
#endif

public:
	GC_MakeCircle(::GC_MakeCircle* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeCircle(::GC_MakeCircle& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeCircle* NativeInstance
	{
		::GC_MakeCircle* get()
		{
			return static_cast<::GC_MakeCircle*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// creates a circle from a non persistent circle C by its conversion.
	/// </summary>
GC_MakeCircle(Macad::Occt::gp_Circ^ C);
		/// <summary>
	/// A2 is the local coordinates system of the circle.
	/// It is not forbidden to create a circle with Radius = 0.0
	/// Status is "NegativeRadius" if Radius < 0.
	/// </summary>
GC_MakeCircle(Macad::Occt::Ax2 A2, double Radius);
		/// <summary>
	/// Make a Circle from Geom <TheCirc> parallel to another
	/// Circ <Circ> with a distance <Dist>.
	/// If Dist is greater than zero the result is enclosing
	/// the circle <Circ>, else the result is enclosed by the
	/// circle <Circ>.
	/// </summary>
GC_MakeCircle(Macad::Occt::gp_Circ^ Circ, double Dist);
		/// <summary>
	/// Make a Circle from Geom <TheCirc> parallel to another
	/// Circ <Circ> and passing through a Pnt <Point>.
	/// </summary>
GC_MakeCircle(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt Point);
		/// <summary>
	/// Make a Circ from gp <TheCirc> passing through 3
	/// Pnt2d <P1>,<P2>,<P3>.
	/// </summary>
GC_MakeCircle(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
		/// <summary>
	/// Make a Circle from Geom <TheCirc> with its center
	/// <Center> and the normal of its plane <Norm> and
	/// its radius <Radius>.
	/// </summary>
GC_MakeCircle(Macad::Occt::Pnt Center, Macad::Occt::Dir Norm, double Radius);
		/// <summary>
	/// Make a Circle from Geom <TheCirc> with its center
	/// <Center> and the normal of its plane defined by the
	/// two points <Center> and <PtAxis> and its radius <Radius>.
	/// </summary>
GC_MakeCircle(Macad::Occt::Pnt Center, Macad::Occt::Pnt PtAxis, double Radius);
		/// <summary>
	/// Make a Circle from Geom <TheCirc> with its center
	/// <Center> and its radius <Radius>.
	/// </summary>
GC_MakeCircle(Macad::Occt::Ax1 Axis, double Radius);
	GC_MakeCircle(Macad::Occt::GC_MakeCircle^ parameter1);
		/// <summary>
	/// Returns the constructed circle.
	/// Exceptions
	/// StdFail_NotDone if no circle is constructed.
	/// </summary>
Macad::Occt::Geom_Circle^ Value();
}; // class GC_MakeCircle

//---------------------------------------------------------------------
//  Class  GC_MakeConicalSurface
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a ConicalSurface from Geom.
/// * Create a ConicalSurface parallel to another and passing
/// through a point.
/// * Create a ConicalSurface parallel to another at a distance
/// <Dist>.
/// * Create a ConicalSurface by 4 points.
/// * Create a ConicalSurface by its axis and 2 points.
/// * Create a ConicalSurface by 2 points and 2 radius.
/// The local coordinate system of the ConicalSurface is defined
/// with an axis placement (see class ElementarySurface).
/// 
/// The "ZAxis" is the symmetry axis of the ConicalSurface,
/// it gives the direction of increasing parametric value V.
/// The apex of the surface is on the negative side of this axis.
/// 
/// The parametrization range is  :
/// U [0, 2*PI],  V ]-infinite, + infinite[
/// 
/// The "XAxis" and the "YAxis" define the placement plane of the
/// surface (Z = 0, and parametric value V = 0)  perpendicular to
/// the symmetry axis. The "XAxis" defines the origin of the
/// parameter U = 0.  The trigonometric sense gives the positive
/// orientation for the parameter U.
/// 
/// When you create a ConicalSurface the U and V directions of
/// parametrization are such that at each point of the surface the
/// normal is oriented towards the "outside region".
/// </summary>
public ref class GC_MakeConicalSurface sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeConicalSurface_h
public:
	Include_GC_MakeConicalSurface_h
#endif

public:
	GC_MakeConicalSurface(::GC_MakeConicalSurface* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeConicalSurface(::GC_MakeConicalSurface& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeConicalSurface* NativeInstance
	{
		::GC_MakeConicalSurface* get()
		{
			return static_cast<::GC_MakeConicalSurface*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// A2 defines the local coordinate system of the conical surface.
	/// Ang is the conical surface semi-angle ]0, PI/2[.
	/// Radius is the radius of the circle Viso in the placement plane
	/// of the conical surface defined with "XAxis" and "YAxis".
	/// The "ZDirection" of A2 defines the direction of the surface's
	/// axis of symmetry.
	/// If the location point of A2 is the apex of the surface
	/// Radius = 0 .
	/// At the creation the parametrization of the surface is defined
	/// such that the normal Vector (N = D1U ^ D1V) is oriented towards
	/// the "outside region" of the surface.
	/// Status is "NegativeRadius" if Radius < 0.0 or "BadAngle" if
	/// Ang < Resolution from gp or Ang >= PI/ - Resolution
	/// </summary>
GC_MakeConicalSurface(Macad::Occt::Ax2 A2, double Ang, double Radius);
		/// <summary>
	/// Creates a ConicalSurface from a non persistent Cone from package gp.
	/// </summary>
GC_MakeConicalSurface(Macad::Occt::gp_Cone^ C);
		/// <summary>
	/// Make a ConicalSurface from Geom <TheCone> passing through 3
	/// Pnt <P1>,<P2>,<P3>.
	/// Its axis is <P1P2> and the radius of its base is
	/// the distance between <P3> and <P1P2>.
	/// The distance between <P4> and <P1P2> is the radius of
	/// the section passing through <P4>.
	/// An error iss raised if <P1>,<P2>,<P3>,<P4> are
	/// colinear or if <P3P4> is perpendicular to <P1P2> or
	/// <P3P4> is colinear to <P1P2>.
	/// </summary>
GC_MakeConicalSurface(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
		/// <summary>
	/// Make a ConicalSurface with two points and two radius.
	/// The axis of the solution is the line passing through
	/// <P1> and <P2>.
	/// <R1> is the radius of the section passing through <P1>
	/// and <R2> the radius of the section passing through <P2>.
	/// </summary>
GC_MakeConicalSurface(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double R1, double R2);
	GC_MakeConicalSurface(Macad::Occt::GC_MakeConicalSurface^ parameter1);
		/// <summary>
	/// Returns the constructed cone.
	/// Exceptions
	/// StdFail_NotDone if no cone is constructed.
	/// </summary>
Macad::Occt::Geom_ConicalSurface^ Value();
}; // class GC_MakeConicalSurface

//---------------------------------------------------------------------
//  Class  GC_MakeCylindricalSurface
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a CylindricalSurface from Geom.
/// * Create a CylindricalSurface parallel to another and
/// passing through a point.
/// * Create a CylindricalSurface parallel to another at a
/// distance
/// <Dist>.
/// * Create a CylindricalSurface passing through 3 points.
/// * Create a CylindricalSurface by its axis and radius.
/// * Create a cylindricalSurface by its circular base.
/// The local coordinate system of the CylindricalSurface is defined
/// with an axis placement (see class ElementarySurface).
/// 
/// The "ZAxis" is the symmetry axis of the CylindricalSurface,
/// it gives the direction of increasing parametric value V.
/// 
/// The parametrization range is :
/// U [0, 2*PI],  V ]- infinite, + infinite[
/// 
/// The "XAxis" and the "YAxis" define the placement plane of the
/// surface (Z = 0, and parametric value V = 0)  perpendicular to
/// the symmetry axis. The "XAxis" defines the origin of the
/// parameter U = 0.  The trigonometric sense gives the positive
/// orientation for the parameter U.
/// </summary>
public ref class GC_MakeCylindricalSurface sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeCylindricalSurface_h
public:
	Include_GC_MakeCylindricalSurface_h
#endif

public:
	GC_MakeCylindricalSurface(::GC_MakeCylindricalSurface* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeCylindricalSurface(::GC_MakeCylindricalSurface& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeCylindricalSurface* NativeInstance
	{
		::GC_MakeCylindricalSurface* get()
		{
			return static_cast<::GC_MakeCylindricalSurface*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// A2 defines the local coordinate system of the cylindrical surface.
	/// The "ZDirection" of A2 defines the direction of the surface's
	/// axis of symmetry.
	/// At the creation the parametrization of the surface is defined
	/// such that the normal Vector (N = D1U ^ D1V) is oriented towards
	/// the "outside region" of the surface.
	/// Warnings :
	/// It is not forbidden to create a cylindrical surface with
	/// Radius = 0.0
	/// Status is "NegativeRadius" if Radius < 0.0
	/// </summary>
GC_MakeCylindricalSurface(Macad::Occt::Ax2 A2, double Radius);
		/// <summary>
	/// Creates a CylindricalSurface from a non persistent Cylinder
	/// from package gp.
	/// </summary>
GC_MakeCylindricalSurface(Macad::Occt::gp_Cylinder^ C);
		/// <summary>
	/// Make a CylindricalSurface from Geom <TheCylinder>
	/// parallel to another
	/// CylindricalSurface <Cylinder> and passing through a
	/// Pnt <Point>.
	/// </summary>
GC_MakeCylindricalSurface(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::Pnt Point);
		/// <summary>
	/// Make a CylindricalSurface from Geom <TheCylinder>
	/// parallel to another
	/// CylindricalSurface <Cylinder> at the distance <Dist>
	/// which can be greater or lower than zero.
	/// The radius of the result is the absolute value of the
	/// radius of <Cyl> plus <Dist>
	/// </summary>
GC_MakeCylindricalSurface(Macad::Occt::gp_Cylinder^ Cyl, double Dist);
		/// <summary>
	/// Make a CylindricalSurface from Geom <TheCylinder>
	/// passing through 3 Pnt <P1>,<P2>,<P3>.
	/// Its axis is <P1P2> and its radius is the distance
	/// between <P3> and <P1P2>
	/// </summary>
GC_MakeCylindricalSurface(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
		/// <summary>
	/// Make a CylindricalSurface by its axis <Axis> and radius
	/// <Radius>.
	/// </summary>
GC_MakeCylindricalSurface(Macad::Occt::Ax1 Axis, double Radius);
		/// <summary>
	/// Make a CylindricalSurface by its circular base.
	/// </summary>
GC_MakeCylindricalSurface(Macad::Occt::gp_Circ^ Circ);
	GC_MakeCylindricalSurface(Macad::Occt::GC_MakeCylindricalSurface^ parameter1);
		/// <summary>
	/// Returns the constructed cylinder.
	/// Exceptions StdFail_NotDone if no cylinder is constructed.
	/// </summary>
Macad::Occt::Geom_CylindricalSurface^ Value();
}; // class GC_MakeCylindricalSurface

//---------------------------------------------------------------------
//  Class  GC_MakeEllipse
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for an ellipse in
/// 3D space. The result is a Geom_Ellipse ellipse.
/// A MakeEllipse object provides a framework for:
/// -   defining the construction of the ellipse,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed ellipse.
/// </summary>
public ref class GC_MakeEllipse sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeEllipse_h
public:
	Include_GC_MakeEllipse_h
#endif

public:
	GC_MakeEllipse(::GC_MakeEllipse* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeEllipse(::GC_MakeEllipse& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeEllipse* NativeInstance
	{
		::GC_MakeEllipse* get()
		{
			return static_cast<::GC_MakeEllipse*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates an ellipse from a non persistent ellipse E from package gp by its conversion.
	/// </summary>
GC_MakeEllipse(Macad::Occt::gp_Elips^ E);
		/// <summary>
	/// Constructs an ellipse with major and minor radii MajorRadius and
	/// MinorRadius, and located in the plane defined by
	/// the "X Axis" and "Y Axis" of the coordinate system A2, where:
	/// -   its center is the origin of A2, and
	/// -   its major axis is the "X Axis" of A2;
	/// Warnings :
	/// The MakeEllipse class does not prevent the
	/// construction of an ellipse where MajorRadius is equal to MinorRadius.
	/// If an error occurs (that is, when IsDone returns
	/// false), the Status function returns:
	/// -   gce_InvertRadius if MajorRadius is less than MinorRadius;
	/// -   gce_NegativeRadius if MinorRadius is less than 0.0;
	/// -   gce_NullAxis if the points S1 and Center are coincident; or
	/// -   gce_InvertAxis if:
	/// -   the major radius computed with Center and S1
	/// is less than the minor radius computed with Center, S1 and S2, or
	/// -   Center, S1 and S2 are collinear.
	/// </summary>
GC_MakeEllipse(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
		/// <summary>
	/// Constructs an ellipse centered on the point Center, where
	/// -   the plane of the ellipse is defined by Center, S1 and S2,
	/// -   its major axis is defined by Center and S1,
	/// -   its major radius is the distance between Center and S1, and
	/// -   its minor radius is the distance between S2 and the major axis.
	/// </summary>
GC_MakeEllipse(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center);
	GC_MakeEllipse(Macad::Occt::GC_MakeEllipse^ parameter1);
		/// <summary>
	/// Returns the constructed ellipse.
	/// Exceptions StdFail_NotDone if no ellipse is constructed.
	/// </summary>
Macad::Occt::Geom_Ellipse^ Value();
}; // class GC_MakeEllipse

//---------------------------------------------------------------------
//  Class  GC_MakeHyperbola
//---------------------------------------------------------------------
/// <summary>
/// This class implements construction algorithms for a hyperbola in
/// 3D space. The result is a Geom_Hyperbola hyperbola.
/// A MakeHyperbola object provides a framework for:
/// -   defining the construction of the hyperbola,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed hyperbola.
/// To define the main branch of an hyperbola.
/// The parameterization range is ]-infinite,+infinite[
/// It is possible to get the other branch and the two conjugate
/// branches of the main branch.
/// 
/// ^YAxis
/// |
/// FirstConjugateBranch
/// |
/// Other            |                Main
/// --------------------- C ------------------------------>XAxis
/// Branch           |                Branch
/// |
/// SecondConjugateBranch
/// |
/// 
/// The major radius is the distance between the Location point
/// of the hyperbola C and the apex of the Main Branch (or the
/// Other branch). The major axis is the XAxis.
/// The minor radius is the distance between the Location point
/// of the hyperbola C and the apex of the First (or Second)
/// Conjugate branch. The minor axis is the YAxis.
/// The major radius can be lower than the minor radius.
/// </summary>
public ref class GC_MakeHyperbola sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeHyperbola_h
public:
	Include_GC_MakeHyperbola_h
#endif

public:
	GC_MakeHyperbola(::GC_MakeHyperbola* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeHyperbola(::GC_MakeHyperbola& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeHyperbola* NativeInstance
	{
		::GC_MakeHyperbola* get()
		{
			return static_cast<::GC_MakeHyperbola*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates  an Hyperbola from a non persistent hyperbola  from package gp by conversion.
	/// </summary>
GC_MakeHyperbola(Macad::Occt::gp_Hypr^ H);
		/// <summary>
	/// Constructs a hyperbola centered on the origin of the coordinate system
	/// A2, with major and minor radii MajorRadius and MinorRadius, where:
	/// the plane of the hyperbola is defined by the "X Axis" and "Y Axis" of A2,
	/// -   its major axis is the "X Axis" of A2.
	/// </summary>
GC_MakeHyperbola(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
		/// <summary>
	/// Constructs a hyperbola centered on the point Center, where
	/// -   the plane of the hyperbola is defined by Center, S1 and S2,
	/// -   its major axis is defined by Center and S1,
	/// -   its major radius is the distance between Center and S1, and
	/// -   its minor radius is the distance between S2 and the major axis;
	/// </summary>
GC_MakeHyperbola(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center);
	GC_MakeHyperbola(Macad::Occt::GC_MakeHyperbola^ parameter1);
		/// <summary>
	/// Returns the constructed hyperbola.
	/// Exceptions StdFail_NotDone if no hyperbola is constructed.
	/// </summary>
Macad::Occt::Geom_Hyperbola^ Value();
}; // class GC_MakeHyperbola

//---------------------------------------------------------------------
//  Class  GC_MakeLine
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Line from Geom.
/// * Create a Line parallel to another and passing
/// through a point.
/// * Create a Line passing through 2 points.
/// A MakeLine object provides a framework for:
/// -   defining the construction of the line,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed line.
/// </summary>
public ref class GC_MakeLine sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeLine_h
public:
	Include_GC_MakeLine_h
#endif

public:
	GC_MakeLine(::GC_MakeLine* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeLine(::GC_MakeLine& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeLine* NativeInstance
	{
		::GC_MakeLine* get()
		{
			return static_cast<::GC_MakeLine*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates a line located in 3D space with the axis placement A1.
	/// The Location of A1 is the origin of the line.
	/// </summary>
GC_MakeLine(Macad::Occt::Ax1 A1);
		/// <summary>
	/// Creates a line from a non persistent line from package gp.
	/// </summary>
GC_MakeLine(Macad::Occt::gp_Lin^ L);
		/// <summary>
	/// P is the origin and V is the direction of the line.
	/// </summary>
GC_MakeLine(Macad::Occt::Pnt P, Macad::Occt::Dir V);
		/// <summary>
	/// Make a Line from Geom <TheLin> parallel to another
	/// Lin <Lin> and passing through a Pnt <Point>.
	/// </summary>
GC_MakeLine(Macad::Occt::gp_Lin^ Lin, Macad::Occt::Pnt Point);
		/// <summary>
	/// Make a Line from Geom <TheLin> passing through 2
	/// Pnt <P1>,<P2>.
	/// It returns false if <p1> and <P2> are confused.
	/// Warning
	/// If the points P1 and P2 are coincident (that is, when
	/// IsDone returns false), the Status function returns gce_ConfusedPoints.
	/// </summary>
GC_MakeLine(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	GC_MakeLine(Macad::Occt::GC_MakeLine^ parameter1);
		/// <summary>
	/// Returns the constructed line.
	/// Exceptions StdFail_NotDone if no line is constructed.
	/// </summary>
Macad::Occt::Geom_Line^ Value();
}; // class GC_MakeLine

//---------------------------------------------------------------------
//  Class  GC_MakeMirror
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// symmetrical transformation in 3D space about a point,
/// axis or plane. The result is a Geom_Transformation transformation.
/// A MakeMirror object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class GC_MakeMirror sealed : public BaseClass<::GC_MakeMirror>
{

#ifdef Include_GC_MakeMirror_h
public:
	Include_GC_MakeMirror_h
#endif

public:
	GC_MakeMirror(::GC_MakeMirror* nativeInstance)
		: BaseClass<::GC_MakeMirror>( nativeInstance, true )
	{}

	GC_MakeMirror(::GC_MakeMirror& nativeInstance)
		: BaseClass<::GC_MakeMirror>( &nativeInstance, false )
	{}

	property ::GC_MakeMirror* NativeInstance
	{
		::GC_MakeMirror* get()
		{
			return static_cast<::GC_MakeMirror*>(_NativeInstance);
		}
	}

public:
	GC_MakeMirror(Macad::Occt::Pnt Point);
	GC_MakeMirror(Macad::Occt::Ax1 Axis);
	GC_MakeMirror(Macad::Occt::gp_Lin^ Line);
		/// <summary>
	/// Make a symmetry transformation af axis defined by
	/// <Point> and <Direc>.
	/// </summary>
GC_MakeMirror(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc);
		/// <summary>
	/// Make a symmetry transformation of plane <Plane>.
	/// </summary>
GC_MakeMirror(Macad::Occt::Pln Plane);
		/// <summary>
	/// Make a symmetry transformation of plane <Plane>.
	/// </summary>
GC_MakeMirror(Macad::Occt::Ax2 Plane);
	GC_MakeMirror(Macad::Occt::GC_MakeMirror^ parameter1);
		/// <summary>
	/// Returns the constructed transformation.
	/// </summary>
Macad::Occt::Geom_Transformation^ Value();
}; // class GC_MakeMirror

//---------------------------------------------------------------------
//  Class  GC_MakePlane
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Plane from gp.
/// * Create a Plane parallel to another and passing
/// through a point.
/// * Create a Plane passing through 3 points.
/// * Create a Plane by its normal
/// A MakePlane object provides a framework for:
/// -   defining the construction of the plane,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed plane.
/// </summary>
public ref class GC_MakePlane sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakePlane_h
public:
	Include_GC_MakePlane_h
#endif

public:
	GC_MakePlane(::GC_MakePlane* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakePlane(::GC_MakePlane& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakePlane* NativeInstance
	{
		::GC_MakePlane* get()
		{
			return static_cast<::GC_MakePlane*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates a plane from a non persistent plane from package gp.
	/// </summary>
GC_MakePlane(Macad::Occt::Pln Pl);
		/// <summary>
	/// P is the "Location" point or origin of the plane.
	/// V is the direction normal to the plane.
	/// </summary>
GC_MakePlane(Macad::Occt::Pnt P, Macad::Occt::Dir V);
		/// <summary>
	/// Creates a plane from its cartesian equation :
	/// Ax + By + Cz + D = 0.0
	/// Status is "BadEquation" if Sqrt (A*A + B*B + C*C)
	/// <= Resolution from gp
	/// </summary>
GC_MakePlane(double A, double B, double C, double D);
		/// <summary>
	/// Make a Plane from Geom <ThePlane> parallel to another
	/// Pln <Pln> and passing through a Pnt <Point>.
	/// </summary>
GC_MakePlane(Macad::Occt::Pln Pln, Macad::Occt::Pnt Point);
		/// <summary>
	/// Make a Plane from Geom <ThePlane> parallel to another
	/// Pln <Pln> at the distance <Dist> which can be greater
	/// or lower than zero.
	/// In the first case the result is at the distance
	/// <Dist> to the plane <Pln> in the direction of the
	/// normal to <Pln>.
	/// Otherwise it is in the opposite direction.
	/// </summary>
GC_MakePlane(Macad::Occt::Pln Pln, double Dist);
		/// <summary>
	/// Make a Plane from Geom <ThePlane> passing through 3
	/// Pnt <P1>,<P2>,<P3>.
	/// It returns false if <P1> <P2> <P3> are confused.
	/// </summary>
GC_MakePlane(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
		/// <summary>
	/// Make a Plane  passing through the location of <Axis>and
	/// normal to the Direction of <Axis>.
	/// </summary>
GC_MakePlane(Macad::Occt::Ax1 Axis);
	GC_MakePlane(Macad::Occt::GC_MakePlane^ parameter1);
		/// <summary>
	/// Returns the constructed plane.
	/// Exceptions StdFail_NotDone if no plane is constructed.
	/// </summary>
Macad::Occt::Geom_Plane^ Value();
}; // class GC_MakePlane

//---------------------------------------------------------------------
//  Class  GC_MakeRotation
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// rotation in 3D space. The result is a
/// Geom_Transformation transformation.
/// A MakeRotation object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class GC_MakeRotation sealed : public BaseClass<::GC_MakeRotation>
{

#ifdef Include_GC_MakeRotation_h
public:
	Include_GC_MakeRotation_h
#endif

public:
	GC_MakeRotation(::GC_MakeRotation* nativeInstance)
		: BaseClass<::GC_MakeRotation>( nativeInstance, true )
	{}

	GC_MakeRotation(::GC_MakeRotation& nativeInstance)
		: BaseClass<::GC_MakeRotation>( &nativeInstance, false )
	{}

	property ::GC_MakeRotation* NativeInstance
	{
		::GC_MakeRotation* get()
		{
			return static_cast<::GC_MakeRotation*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs a rotation through angle Angle about the axis defined by the line Line.
	/// </summary>
GC_MakeRotation(Macad::Occt::gp_Lin^ Line, double Angle);
		/// <summary>
	/// Constructs a rotation through angle Angle about the axis defined by the axis Axis.
	/// </summary>
GC_MakeRotation(Macad::Occt::Ax1 Axis, double Angle);
		/// <summary>
	/// Constructs a rotation through angle Angle about the axis
	/// defined by the point Point and the unit vector Direc.
	/// </summary>
GC_MakeRotation(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc, double Angle);
	GC_MakeRotation(Macad::Occt::GC_MakeRotation^ parameter1);
		/// <summary>
	/// Returns the constructed transformation.
	/// </summary>
Macad::Occt::Geom_Transformation^ Value();
}; // class GC_MakeRotation

//---------------------------------------------------------------------
//  Class  GC_MakeScale
//---------------------------------------------------------------------
/// <summary>
/// This class implements an elementary construction algorithm for
/// a scaling transformation in 3D space. The result is a
/// Geom_Transformation transformation (a scaling transformation with
/// the center point <Point> and the scaling value <Scale>).
/// A MakeScale object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class GC_MakeScale sealed : public BaseClass<::GC_MakeScale>
{

#ifdef Include_GC_MakeScale_h
public:
	Include_GC_MakeScale_h
#endif

public:
	GC_MakeScale(::GC_MakeScale* nativeInstance)
		: BaseClass<::GC_MakeScale>( nativeInstance, true )
	{}

	GC_MakeScale(::GC_MakeScale& nativeInstance)
		: BaseClass<::GC_MakeScale>( &nativeInstance, false )
	{}

	property ::GC_MakeScale* NativeInstance
	{
		::GC_MakeScale* get()
		{
			return static_cast<::GC_MakeScale*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs a scaling transformation with
	/// -   Point as the center of the transformation, and
	/// -   Scale as the scale factor.
	/// </summary>
GC_MakeScale(Macad::Occt::Pnt Point, double Scale);
	GC_MakeScale(Macad::Occt::GC_MakeScale^ parameter1);
		/// <summary>
	/// Returns the constructed transformation.
	/// </summary>
Macad::Occt::Geom_Transformation^ Value();
}; // class GC_MakeScale

//---------------------------------------------------------------------
//  Class  GC_MakeSegment
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for a line
/// segment in 3D space.
/// Makes a segment of Line from the 2 points <P1> and <P2>.
/// The result is a Geom_TrimmedCurve curve.
/// A MakeSegment object provides a framework for:
/// -   defining the construction of the line segment,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed line segment.
/// </summary>
public ref class GC_MakeSegment sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeSegment_h
public:
	Include_GC_MakeSegment_h
#endif

public:
	GC_MakeSegment(::GC_MakeSegment* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeSegment(::GC_MakeSegment& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeSegment* NativeInstance
	{
		::GC_MakeSegment* get()
		{
			return static_cast<::GC_MakeSegment*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Make a segment of Line from the 2 points <P1> and <P2>.
	/// It returns NullObject if <P1> and <P2> are confused.
	/// </summary>
GC_MakeSegment(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
		/// <summary>
	/// Make a segment of Line from the line <Line1>
	/// between the two parameters U1 and U2.
	/// It returns NullObject if <U1> is equal <U2>.
	/// </summary>
GC_MakeSegment(Macad::Occt::gp_Lin^ Line, double U1, double U2);
		/// <summary>
	/// Make a segment of Line from the line <Line1>
	/// between the point <Point> and the parameter Ulast.
	/// It returns NullObject if <U1> is equal <U2>.
	/// </summary>
GC_MakeSegment(Macad::Occt::gp_Lin^ Line, Macad::Occt::Pnt Point, double Ulast);
		/// <summary>
	/// Make a segment of Line from the line <Line1>
	/// between the two points <P1> and <P2>.
	/// It returns NullObject if <U1> is equal <U2>.
	/// </summary>
GC_MakeSegment(Macad::Occt::gp_Lin^ Line, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	GC_MakeSegment(Macad::Occt::GC_MakeSegment^ parameter1);
		/// <summary>
	/// Returns the constructed line segment.
	/// </summary>
Macad::Occt::Geom_TrimmedCurve^ Value();
}; // class GC_MakeSegment

//---------------------------------------------------------------------
//  Class  GC_MakeTranslation
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// translation in 3D space. The result is a
/// Geom_Transformation transformation.
/// A MakeTranslation object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class GC_MakeTranslation sealed : public BaseClass<::GC_MakeTranslation>
{

#ifdef Include_GC_MakeTranslation_h
public:
	Include_GC_MakeTranslation_h
#endif

public:
	GC_MakeTranslation(::GC_MakeTranslation* nativeInstance)
		: BaseClass<::GC_MakeTranslation>( nativeInstance, true )
	{}

	GC_MakeTranslation(::GC_MakeTranslation& nativeInstance)
		: BaseClass<::GC_MakeTranslation>( &nativeInstance, false )
	{}

	property ::GC_MakeTranslation* NativeInstance
	{
		::GC_MakeTranslation* get()
		{
			return static_cast<::GC_MakeTranslation*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs a translation along the vector " Vect "
	/// </summary>
GC_MakeTranslation(Macad::Occt::Vec Vect);
		/// <summary>
	/// Constructs a translation along the vector (Point1,Point2)
	/// defined from the point Point1 to the point Point2.
	/// </summary>
GC_MakeTranslation(Macad::Occt::Pnt Point1, Macad::Occt::Pnt Point2);
	GC_MakeTranslation(Macad::Occt::GC_MakeTranslation^ parameter1);
		/// <summary>
	/// Returns the constructed transformation.
	/// </summary>
Macad::Occt::Geom_Transformation^ Value();
}; // class GC_MakeTranslation

//---------------------------------------------------------------------
//  Class  GC_MakeTrimmedCone
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for a trimmed
/// cone limited by two planes orthogonal to its axis. The
/// result is a Geom_RectangularTrimmedSurface surface.
/// A MakeTrimmedCone provides a framework for:
/// -   defining the construction of the trimmed cone,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed trimmed cone.
/// </summary>
public ref class GC_MakeTrimmedCone sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeTrimmedCone_h
public:
	Include_GC_MakeTrimmedCone_h
#endif

public:
	GC_MakeTrimmedCone(::GC_MakeTrimmedCone* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeTrimmedCone(::GC_MakeTrimmedCone& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeTrimmedCone* NativeInstance
	{
		::GC_MakeTrimmedCone* get()
		{
			return static_cast<::GC_MakeTrimmedCone*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Make a RectangularTrimmedSurface <TheCone> from Geom
	/// It is trimmed by P3 and P4.
	/// Its axis is <P1P2> and the radius of its base is
	/// the distance between <P3> and <P1P2>.
	/// The distance between <P4> and <P1P2> is the radius of
	/// the section passing through <P4>.
	/// An error iss raised if <P1>,<P2>,<P3>,<P4> are
	/// colinear or if <P3P4> is perpendicular to <P1P2> or
	/// <P3P4> is colinear to <P1P2>.
	/// </summary>
GC_MakeTrimmedCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
		/// <summary>
	/// Make a RectangularTrimmedSurface from Geom <TheCone>
	/// from a cone and trimmed by two points P1 and P2 and
	/// the two radius <R1> and <R2> of the sections passing
	/// through <P1> an <P2>.
	/// Warning
	/// If an error occurs (that is, when IsDone returns
	/// false), the Status function returns:
	/// -   gce_ConfusedPoints if points P1 and P2, or P3 and P4, are coincident;
	/// -   gce_NullAngle if:
	/// -   the lines joining P1 to P2 and P3 to P4 are parallel, or
	/// -   R1 and R2 are equal (i.e. their difference is less than gp::Resolution());
	/// -   gce_NullRadius if:
	/// -   the line joining P1 to P2 is perpendicular to the line joining P3 to P4, or
	/// -   the points P1, P2, P3 and P4 are collinear;
	/// -   gce_NegativeRadius if R1 or R2 is negative; or
	/// -   gce_NullAxis if points P1 and P2 are coincident (2nd syntax only).
	/// </summary>
GC_MakeTrimmedCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double R1, double R2);
	GC_MakeTrimmedCone(Macad::Occt::GC_MakeTrimmedCone^ parameter1);
		/// <summary>
	/// Returns the constructed trimmed cone.
	/// StdFail_NotDone if no trimmed cone is constructed.
	/// </summary>
Macad::Occt::Geom_RectangularTrimmedSurface^ Value();
}; // class GC_MakeTrimmedCone

//---------------------------------------------------------------------
//  Class  GC_MakeTrimmedCylinder
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for a trimmed
/// cylinder limited by two planes orthogonal to its axis.
/// The result is a Geom_RectangularTrimmedSurface surface.
/// A MakeTrimmedCylinder provides a framework for:
/// -   defining the construction of the trimmed cylinder,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed trimmed cylinder.
/// </summary>
public ref class GC_MakeTrimmedCylinder sealed : public Macad::Occt::GC_Root
{

#ifdef Include_GC_MakeTrimmedCylinder_h
public:
	Include_GC_MakeTrimmedCylinder_h
#endif

public:
	GC_MakeTrimmedCylinder(::GC_MakeTrimmedCylinder* nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	GC_MakeTrimmedCylinder(::GC_MakeTrimmedCylinder& nativeInstance)
		: Macad::Occt::GC_Root( nativeInstance )
	{}

	property ::GC_MakeTrimmedCylinder* NativeInstance
	{
		::GC_MakeTrimmedCylinder* get()
		{
			return static_cast<::GC_MakeTrimmedCylinder*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Make a cylindricalSurface <Cyl> from Geom
	/// Its axis is <P1P2> and its radius is the distance
	/// between <P3> and <P1P2>.
	/// The height is the distance between P1 and P2.
	/// </summary>
GC_MakeTrimmedCylinder(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
		/// <summary>
	/// Make a cylindricalSurface <Cyl> from gp by its base <Circ>.
	/// Its axis is the normal to the plane defined bi <Circ>.
	/// <Height> can be greater than zero or lower than zero.
	/// In the first case the V parametric direction of the
	/// result has the same orientation as the normal to <Circ>.
	/// In the other case it has the opposite orientation.
	/// </summary>
GC_MakeTrimmedCylinder(Macad::Occt::gp_Circ^ Circ, double Height);
		/// <summary>
	/// Make a cylindricalSurface <Cyl> from gp by its
	/// axis <A1> and its radius <Radius>.
	/// It returns NullObject if <Radius> is lower than zero.
	/// <Height> can be greater than zero or lower than zero.
	/// In the first case the V parametric direction of the
	/// result has the same orientation as <A1>.
	/// In the other case it has the opposite orientation.
	/// </summary>
GC_MakeTrimmedCylinder(Macad::Occt::Ax1 A1, double Radius, double Height);
	GC_MakeTrimmedCylinder(Macad::Occt::GC_MakeTrimmedCylinder^ parameter1);
		/// <summary>
	/// Returns the constructed trimmed cylinder.
	/// Exceptions
	/// StdFail_NotDone if no trimmed cylinder is constructed.
	/// </summary>
Macad::Occt::Geom_RectangularTrimmedSurface^ Value();
}; // class GC_MakeTrimmedCylinder

}; // namespace Occt
}; // namespace Macad
