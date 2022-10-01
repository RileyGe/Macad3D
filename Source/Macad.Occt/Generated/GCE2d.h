// Generated wrapper code for package GCE2d

#pragma once

#include "GCE2d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GCE2d_Root
//---------------------------------------------------------------------
/// <summary>
/// This class implements the common services for
/// all classes of gce which report error.
/// </summary>
public ref class GCE2d_Root : public BaseClass<::GCE2d_Root>
{

#ifdef Include_GCE2d_Root_h
public:
	Include_GCE2d_Root_h
#endif

protected:
	GCE2d_Root(InitMode init)
		: BaseClass<::GCE2d_Root>( init )
	{}

public:
	GCE2d_Root(::GCE2d_Root* nativeInstance)
		: BaseClass<::GCE2d_Root>( nativeInstance, true )
	{}

	GCE2d_Root(::GCE2d_Root& nativeInstance)
		: BaseClass<::GCE2d_Root>( &nativeInstance, false )
	{}

	property ::GCE2d_Root* NativeInstance
	{
		::GCE2d_Root* get()
		{
			return static_cast<::GCE2d_Root*>(_NativeInstance);
		}
	}

public:
	GCE2d_Root(Macad::Occt::GCE2d_Root^ parameter1);
	GCE2d_Root();
		/// <summary>
	/// Returns true if the construction is successful.
	/// </summary>
bool IsDone();
		/// <summary>
	/// Returns the status of the construction
	/// -   gce_Done, if the construction is successful, or
	/// -   another value of the gce_ErrorType enumeration
	/// indicating why the construction failed.
	/// </summary>
Macad::Occt::gce_ErrorType Status();
}; // class GCE2d_Root

//---------------------------------------------------------------------
//  Class  GCE2d_MakeArcOfCircle
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for an arc of
/// circle in the plane. The result is a Geom2d_TrimmedCurve curve.
/// A MakeArcOfCircle object provides a framework for:
/// -   defining the construction of the arc of circle,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed arc of circle.
/// </summary>
public ref class GCE2d_MakeArcOfCircle sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeArcOfCircle_h
public:
	Include_GCE2d_MakeArcOfCircle_h
#endif

public:
	GCE2d_MakeArcOfCircle(::GCE2d_MakeArcOfCircle* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeArcOfCircle(::GCE2d_MakeArcOfCircle& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeArcOfCircle* NativeInstance
	{
		::GCE2d_MakeArcOfCircle* get()
		{
			return static_cast<::GCE2d_MakeArcOfCircle*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Makes an arc of circle (TrimmedCurve from Geom2d) from
	/// a circle between two parameters Alpha1 and Alpha2.
	/// The two parameters are angles. The parameters are
	/// in radians.
	/// </summary>
GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, double Alpha1, double Alpha2, bool Sense);
		/// <summary>
	/// Makes an arc of circle (TrimmedCurve from Geom2d) from
	/// a circle between two parameters Alpha1 and Alpha2.
	/// The two parameters are angles. The parameters are
	/// in radians.
	/// </summary>
GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, double Alpha1, double Alpha2);
		/// <summary>
	/// Makes an arc of circle (TrimmedCurve from Geom2d) from
	/// a circle between point <P> and the parameter
	/// Alpha. Alpha is given in radians.
	/// </summary>
GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d P, double Alpha, bool Sense);
		/// <summary>
	/// Makes an arc of circle (TrimmedCurve from Geom2d) from
	/// a circle between point <P> and the parameter
	/// Alpha. Alpha is given in radians.
	/// </summary>
GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d P, double Alpha);
		/// <summary>
	/// Makes an arc of circle (TrimmedCurve from Geom2d) from
	/// a circle between two points P1 and P2.
	/// </summary>
GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool Sense);
		/// <summary>
	/// Makes an arc of circle (TrimmedCurve from Geom2d) from
	/// a circle between two points P1 and P2.
	/// </summary>
GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
		/// <summary>
	/// Makes an arc of circle (TrimmedCurve from Geom2d) from
	/// three points P1,P2,P3 between two points P1 and P3,
	/// and passing through the point P2.
	/// </summary>
GCE2d_MakeArcOfCircle(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, Macad::Occt::Pnt2d P3);
		/// <summary>
	/// Makes an arc of circle (TrimmedCurve from Geom2d) from
	/// two points P1,P2 and the tangente to the solution at
	/// the point P1.
	/// </summary>
GCE2d_MakeArcOfCircle(Macad::Occt::Pnt2d P1, Macad::Occt::Vec2d V, Macad::Occt::Pnt2d P2);
	GCE2d_MakeArcOfCircle(Macad::Occt::GCE2d_MakeArcOfCircle^ parameter1);
		/// <summary>
	/// Returns the constructed arc of circle.
	/// Exceptions StdFail_NotDone if no arc of circle is constructed.
	/// </summary>
Macad::Occt::Geom2d_TrimmedCurve^ Value();
}; // class GCE2d_MakeArcOfCircle

//---------------------------------------------------------------------
//  Class  GCE2d_MakeArcOfEllipse
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for an arc of
/// ellipse in the plane. The result is a Geom2d_TrimmedCurve curve.
/// A MakeArcOfEllipse object provides a framework for:
/// -   defining the construction of the arc of ellipse,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed arc of ellipse.
/// </summary>
public ref class GCE2d_MakeArcOfEllipse sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeArcOfEllipse_h
public:
	Include_GCE2d_MakeArcOfEllipse_h
#endif

public:
	GCE2d_MakeArcOfEllipse(::GCE2d_MakeArcOfEllipse* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeArcOfEllipse(::GCE2d_MakeArcOfEllipse& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeArcOfEllipse* NativeInstance
	{
		::GCE2d_MakeArcOfEllipse* get()
		{
			return static_cast<::GCE2d_MakeArcOfEllipse*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Make an arc of Ellipse (TrimmedCurve from Geom2d) from
	/// a Ellipse between two parameters Alpha1 and Alpha2.
	/// </summary>
GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, double Alpha1, double Alpha2, bool Sense);
		/// <summary>
	/// Make an arc of Ellipse (TrimmedCurve from Geom2d) from
	/// a Ellipse between two parameters Alpha1 and Alpha2.
	/// </summary>
GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, double Alpha1, double Alpha2);
		/// <summary>
	/// Make an arc of Ellipse (TrimmedCurve from Geom2d) from
	/// a Ellipse between point <P> and the parameter
	/// Alpha.
	/// </summary>
GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, Macad::Occt::Pnt2d P, double Alpha, bool Sense);
		/// <summary>
	/// Make an arc of Ellipse (TrimmedCurve from Geom2d) from
	/// a Ellipse between point <P> and the parameter
	/// Alpha.
	/// </summary>
GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, Macad::Occt::Pnt2d P, double Alpha);
		/// <summary>
	/// Make an arc of Ellipse (TrimmedCurve from Geom2d) from
	/// a Ellipse between two points P1 and P2.
	/// Please, note: The orientation of the arc is:
	/// -   the trigonometric sense if Sense is not defined or
	/// is true (default value), or
	/// -   the opposite sense if Sense is false.
	/// -   Alpha1, Alpha2 and Alpha are angle values, given in radians.
	/// -   IsDone always returns true.
	/// </summary>
GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool Sense);
		/// <summary>
	/// Make an arc of Ellipse (TrimmedCurve from Geom2d) from
	/// a Ellipse between two points P1 and P2.
	/// Please, note: The orientation of the arc is:
	/// -   the trigonometric sense if Sense is not defined or
	/// is true (default value), or
	/// -   the opposite sense if Sense is false.
	/// -   Alpha1, Alpha2 and Alpha are angle values, given in radians.
	/// -   IsDone always returns true.
	/// </summary>
GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	GCE2d_MakeArcOfEllipse(Macad::Occt::GCE2d_MakeArcOfEllipse^ parameter1);
		/// <summary>
	/// Returns the constructed arc of ellipse.
	/// </summary>
Macad::Occt::Geom2d_TrimmedCurve^ Value();
}; // class GCE2d_MakeArcOfEllipse

//---------------------------------------------------------------------
//  Class  GCE2d_MakeArcOfHyperbola
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for an arc of
/// hyperbola in the plane. The result is a Geom2d_TrimmedCurve curve.
/// A MakeArcOfHyperbola object provides a framework for:
/// -   defining the construction of the arc of hyperbola,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed arc of hyperbola.
/// </summary>
public ref class GCE2d_MakeArcOfHyperbola sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeArcOfHyperbola_h
public:
	Include_GCE2d_MakeArcOfHyperbola_h
#endif

public:
	GCE2d_MakeArcOfHyperbola(::GCE2d_MakeArcOfHyperbola* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeArcOfHyperbola(::GCE2d_MakeArcOfHyperbola& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeArcOfHyperbola* NativeInstance
	{
		::GCE2d_MakeArcOfHyperbola* get()
		{
			return static_cast<::GCE2d_MakeArcOfHyperbola*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Makes an arc of Hyperbola (TrimmedCurve from Geom2d) from
	/// a Hyperbola between two parameters Alpha1 and Alpha2.
	/// </summary>
GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, double Alpha1, double Alpha2, bool Sense);
		/// <summary>
	/// Makes an arc of Hyperbola (TrimmedCurve from Geom2d) from
	/// a Hyperbola between two parameters Alpha1 and Alpha2.
	/// </summary>
GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, double Alpha1, double Alpha2);
		/// <summary>
	/// Makes an arc of Hyperbola (TrimmedCurve from Geom2d) from
	/// a Hyperbola between point <P> and the parameter
	/// Alpha.
	/// </summary>
GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, Macad::Occt::Pnt2d P, double Alpha, bool Sense);
		/// <summary>
	/// Makes an arc of Hyperbola (TrimmedCurve from Geom2d) from
	/// a Hyperbola between point <P> and the parameter
	/// Alpha.
	/// </summary>
GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, Macad::Occt::Pnt2d P, double Alpha);
		/// <summary>
	/// Makes an arc of Hyperbola (TrimmedCurve from Geom2d) from
	/// a Hyperbola between two points P1 and P2.
	/// Note: the orientation of the arc of hyperbola is:
	/// -   the trigonometric sense if Sense is not defined or
	/// is true (default value), or
	/// -   the opposite sense if Sense is false.
	/// - IsDone always returns true.
	/// </summary>
GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool Sense);
		/// <summary>
	/// Makes an arc of Hyperbola (TrimmedCurve from Geom2d) from
	/// a Hyperbola between two points P1 and P2.
	/// Note: the orientation of the arc of hyperbola is:
	/// -   the trigonometric sense if Sense is not defined or
	/// is true (default value), or
	/// -   the opposite sense if Sense is false.
	/// - IsDone always returns true.
	/// </summary>
GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	GCE2d_MakeArcOfHyperbola(Macad::Occt::GCE2d_MakeArcOfHyperbola^ parameter1);
		/// <summary>
	/// Returns the constructed arc of hyperbola.
	/// </summary>
Macad::Occt::Geom2d_TrimmedCurve^ Value();
}; // class GCE2d_MakeArcOfHyperbola

//---------------------------------------------------------------------
//  Class  GCE2d_MakeArcOfParabola
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for an arc of
/// parabola in the plane. The result is a Geom2d_TrimmedCurve curve.
/// A MakeArcOfParabola object provides a framework for:
/// -   defining the construction of the arc of parabola,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed arc of parabola.
/// </summary>
public ref class GCE2d_MakeArcOfParabola sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeArcOfParabola_h
public:
	Include_GCE2d_MakeArcOfParabola_h
#endif

public:
	GCE2d_MakeArcOfParabola(::GCE2d_MakeArcOfParabola* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeArcOfParabola(::GCE2d_MakeArcOfParabola& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeArcOfParabola* NativeInstance
	{
		::GCE2d_MakeArcOfParabola* get()
		{
			return static_cast<::GCE2d_MakeArcOfParabola*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Make an arc of Parabola (TrimmedCurve from Geom2d) from
	/// a Parabola between two parameters Alpha1 and Alpha2.
	/// </summary>
GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, double Alpha1, double Alpha2, bool Sense);
		/// <summary>
	/// Make an arc of Parabola (TrimmedCurve from Geom2d) from
	/// a Parabola between two parameters Alpha1 and Alpha2.
	/// </summary>
GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, double Alpha1, double Alpha2);
		/// <summary>
	/// Make an arc of Parabola (TrimmedCurve from Geom2d) from
	/// a Parabola between point <P> and the parameter
	/// Alpha.
	/// </summary>
GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, Macad::Occt::Pnt2d P, double Alpha, bool Sense);
		/// <summary>
	/// Make an arc of Parabola (TrimmedCurve from Geom2d) from
	/// a Parabola between point <P> and the parameter
	/// Alpha.
	/// </summary>
GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, Macad::Occt::Pnt2d P, double Alpha);
		/// <summary>
	/// Make an arc of Parabola (TrimmedCurve from Geom2d) from
	/// a Parabola between two points P1 and P2.
	/// Please, note: the orientation of the arc of parabola is:
	/// -   the trigonometric sense if Sense is not defined
	/// or is true (default value), or
	/// -   the opposite sense if Sense is false.
	/// - IsDone always returns true.
	/// </summary>
GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool Sense);
		/// <summary>
	/// Make an arc of Parabola (TrimmedCurve from Geom2d) from
	/// a Parabola between two points P1 and P2.
	/// Please, note: the orientation of the arc of parabola is:
	/// -   the trigonometric sense if Sense is not defined
	/// or is true (default value), or
	/// -   the opposite sense if Sense is false.
	/// - IsDone always returns true.
	/// </summary>
GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	GCE2d_MakeArcOfParabola(Macad::Occt::GCE2d_MakeArcOfParabola^ parameter1);
		/// <summary>
	/// Returns the constructed arc of parabola.
	/// </summary>
Macad::Occt::Geom2d_TrimmedCurve^ Value();
}; // class GCE2d_MakeArcOfParabola

//---------------------------------------------------------------------
//  Class  GCE2d_MakeCircle
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create Circle from Geom2d.
/// 
/// * Create a Circle parallel to another and passing
/// though a point.
/// * Create a Circle parallel to another at the distance
/// Dist.
/// * Create a Circle passing through 3 points.
/// * Create a Circle with its center and the normal of its
/// plane and its radius.
/// * Create a Circle with its axis and radius.
/// </summary>
public ref class GCE2d_MakeCircle sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeCircle_h
public:
	Include_GCE2d_MakeCircle_h
#endif

public:
	GCE2d_MakeCircle(::GCE2d_MakeCircle* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeCircle(::GCE2d_MakeCircle& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeCircle* NativeInstance
	{
		::GCE2d_MakeCircle* get()
		{
			return static_cast<::GCE2d_MakeCircle*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// creates a circle from a non persistent one.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::gp_Circ2d^ C);
		/// <summary>
	/// A is the "XAxis" of the circle which defines the origin
	/// of parametrization.
	/// It is not forbidden to create a circle with Radius = 0.0
	/// The status is "NegativeRadius" if Radius < 0.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::Ax2d A, double Radius, bool Sense);
		/// <summary>
	/// A is the "XAxis" of the circle which defines the origin
	/// of parametrization.
	/// It is not forbidden to create a circle with Radius = 0.0
	/// The status is "NegativeRadius" if Radius < 0.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::Ax2d A, double Radius);
		/// <summary>
	/// A is the local coordinate system of the circle which defines
	/// the origin of parametrization.
	/// It is not forbidden to create a circle with Radius = 0.0
	/// The status is "NegativeRadius" if Radius < 0.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::Ax22d A, double Radius);
		/// <summary>
	/// Make a Circle from Geom2d <TheCirc> parallel to another
	/// Circ <Circ> with a distance <Dist>.
	/// If Dist is greater than zero the result is enclosing
	/// the circle <Circ>, else the result is enclosed by the
	/// circle <Circ>.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::gp_Circ2d^ Circ, double Dist);
		/// <summary>
	/// Make a Circle from Geom2d <TheCirc> parallel to another
	/// Circ <Circ> and passing through a Pnt <Point>.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d Point);
		/// <summary>
	/// Make a Circ from gp <TheCirc> passing through 3
	/// Pnt2d <P1>,<P2>,<P3>.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, Macad::Occt::Pnt2d P3);
		/// <summary>
	/// Make a Circ from geom2d <TheCirc> by its center an radius.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::Pnt2d P, double Radius, bool Sense);
		/// <summary>
	/// Make a Circ from geom2d <TheCirc> by its center an radius.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::Pnt2d P, double Radius);
		/// <summary>
	/// Makes a Circle from geom2d <TheCirc> with its center
	/// <Center> and a point giving the radius.
	/// If Sense is true the local coordinate system of
	/// the solution is direct and non direct in the other case.
	/// Warning
	/// The MakeCircle class does not prevent the
	/// construction of a circle with a null radius.
	/// If an error occurs (that is, when IsDone returns
	/// false), the Status function returns:
	/// -   gce_NegativeRadius if Radius is less than 0.0, or
	/// -   gce_IntersectionError if points P1, P2 and P3
	/// are collinear and the three are not coincident.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point, bool Sense);
		/// <summary>
	/// Makes a Circle from geom2d <TheCirc> with its center
	/// <Center> and a point giving the radius.
	/// If Sense is true the local coordinate system of
	/// the solution is direct and non direct in the other case.
	/// Warning
	/// The MakeCircle class does not prevent the
	/// construction of a circle with a null radius.
	/// If an error occurs (that is, when IsDone returns
	/// false), the Status function returns:
	/// -   gce_NegativeRadius if Radius is less than 0.0, or
	/// -   gce_IntersectionError if points P1, P2 and P3
	/// are collinear and the three are not coincident.
	/// </summary>
GCE2d_MakeCircle(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point);
	GCE2d_MakeCircle(Macad::Occt::GCE2d_MakeCircle^ parameter1);
		/// <summary>
	/// Returns the constructed circle.
	/// Exceptions StdFail_NotDone if no circle is constructed.
	/// </summary>
Macad::Occt::Geom2d_Circle^ Value();
}; // class GCE2d_MakeCircle

//---------------------------------------------------------------------
//  Class  GCE2d_MakeEllipse
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create Ellipse from Geom2d.
/// * Create an Ellipse from two apex  and the center.
/// Defines an ellipse in 2D space.
/// The parametrization range is [0,2*PI].
/// The ellipse is a closed and periodic curve.
/// The center of the ellipse is the "Location" point of its
/// axis placement "XAxis".
/// The "XAxis" of the ellipse defines the origin of the
/// parametrization, it is the major axis of the ellipse.
/// The YAxis is the minor axis of the ellipse.
/// </summary>
public ref class GCE2d_MakeEllipse sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeEllipse_h
public:
	Include_GCE2d_MakeEllipse_h
#endif

public:
	GCE2d_MakeEllipse(::GCE2d_MakeEllipse* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeEllipse(::GCE2d_MakeEllipse& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeEllipse* NativeInstance
	{
		::GCE2d_MakeEllipse* get()
		{
			return static_cast<::GCE2d_MakeEllipse*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates an ellipse from a non persistent one from package gp
	/// </summary>
GCE2d_MakeEllipse(Macad::Occt::gp_Elips2d^ E);
		/// <summary>
	/// MajorAxis is the local coordinate system of the ellipse.
	/// It is the "XAxis". The minor axis  is the YAxis of the
	/// ellipse.
	/// Sense give the sense of parametrization of the Ellipse.
	/// It is not forbidden to create an ellipse with MajorRadius =
	/// MinorRadius.
	/// The status is "InvertRadius" if MajorRadius < MinorRadius or
	/// "NegativeRadius" if MinorRadius < 0.
	/// </summary>
GCE2d_MakeEllipse(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
		/// <summary>
	/// MajorAxis is the local coordinate system of the ellipse.
	/// It is the "XAxis". The minor axis  is the YAxis of the
	/// ellipse.
	/// Sense give the sense of parametrization of the Ellipse.
	/// It is not forbidden to create an ellipse with MajorRadius =
	/// MinorRadius.
	/// The status is "InvertRadius" if MajorRadius < MinorRadius or
	/// "NegativeRadius" if MinorRadius < 0.
	/// </summary>
GCE2d_MakeEllipse(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius);
		/// <summary>
	/// Axis is the local coordinate system of the ellipse.
	/// It is not forbidden to create an ellipse with MajorRadius =
	/// MinorRadius.
	/// The status is "InvertRadius" if MajorRadius < MinorRadius or
	/// "NegativeRadius" if MinorRadius < 0.
	/// </summary>
GCE2d_MakeEllipse(Macad::Occt::Ax22d Axis, double MajorRadius, double MinorRadius);
		/// <summary>
	/// Make an Ellipse centered on the point Center, where
	/// -   the major axis of the ellipse is defined by Center and S1,
	/// -   its major radius is the distance between Center and S1, and
	/// -   its minor radius is the distance between S2 and the major axis.
	/// The implicit orientation of the ellipse is:
	/// -   the sense defined by Axis or E,
	/// -   the sense defined by points Center, S1 and S2,
	/// -   the trigonometric sense if Sense is not given or is true, or
	/// -   the opposite sense if Sense is false.
	/// </summary>
GCE2d_MakeEllipse(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center);
	GCE2d_MakeEllipse(Macad::Occt::GCE2d_MakeEllipse^ parameter1);
		/// <summary>
	/// Returns the constructed ellipse.
	/// Exceptions StdFail_NotDone if no ellipse is constructed.
	/// </summary>
Macad::Occt::Geom2d_Ellipse^ Value();
}; // class GCE2d_MakeEllipse

//---------------------------------------------------------------------
//  Class  GCE2d_MakeHyperbola
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create Hyperbola from Geom2d.
/// * Create an Hyperbola from two apex  and the center.
/// Defines the main branch of an hyperbola.
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
/// of the hyperbola C and the apex of the main Branch (or the
/// Other branch). The major axis is the "XAxis".
/// The minor radius is the distance between the Location point
/// of the hyperbola C and the apex of the First (or Second)
/// Conjugate branch. The minor axis is the "YAxis".
/// The major radius can be lower than the minor radius.
/// </summary>
public ref class GCE2d_MakeHyperbola sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeHyperbola_h
public:
	Include_GCE2d_MakeHyperbola_h
#endif

public:
	GCE2d_MakeHyperbola(::GCE2d_MakeHyperbola* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeHyperbola(::GCE2d_MakeHyperbola& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeHyperbola* NativeInstance
	{
		::GCE2d_MakeHyperbola* get()
		{
			return static_cast<::GCE2d_MakeHyperbola*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates  an Hyperbola from a non persistent one from package gp
	/// </summary>
GCE2d_MakeHyperbola(Macad::Occt::gp_Hypr2d^ H);
		/// <summary>
	/// MajorAxis is the "XAxis" of the hyperbola.
	/// The major radius of the hyperbola is on this "XAxis" and
	/// the minor radius is on the "YAxis" of the hyperbola.
	/// The status is "NegativeRadius" if MajorRadius < 0.0 or if
	/// MinorRadius < 0.0
	/// </summary>
GCE2d_MakeHyperbola(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
		/// <summary>
	/// Axis is the local coordinate system of the hyperbola.
	/// The major radius of the hyperbola is on this "XAxis" and
	/// the minor radius is on the "YAxis" of the hyperbola.
	/// The status is "NegativeRadius" if MajorRadius < 0.0 or if
	/// MinorRadius < 0.0
	/// </summary>
GCE2d_MakeHyperbola(Macad::Occt::Ax22d Axis, double MajorRadius, double MinorRadius);
		/// <summary>
	/// Creates a hyperbol centered on the origin of the coordinate system
	/// Axis, with major and minor radii MajorRadius and
	/// MinorRadius, where the major axis is the "X Axis"
	/// of Axis (Axis is the local coordinate system of the hyperbola).
	/// The implicit orientation of the ellipse is:
	/// -   the sense defined by Axis or H,
	/// -   the sense defined by points Center, S1 and S2,
	/// -   the trigonometric sense if Sense is not given or is true, or
	/// -   the opposite sense if Sense is false.
	/// Warning
	/// If an error occurs (that is, when IsDone returns
	/// false), the Status function returns:
	/// -   gce_NegativeRadius if MajorRadius or
	/// MinorRadius is less than 0.0, or
	/// -   gce_InvertAxis if the major radius defined by
	/// Center and S1 is less than the minor radius
	/// defined by Center, S1 and S2.Make an Hyperbola with its center and two apexes.
	/// </summary>
GCE2d_MakeHyperbola(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center);
	GCE2d_MakeHyperbola(Macad::Occt::GCE2d_MakeHyperbola^ parameter1);
		/// <summary>
	/// Returns the constructed hyperbola.
	/// Exceptions: StdFail_NotDone if no hyperbola is constructed.
	/// </summary>
Macad::Occt::Geom2d_Hyperbola^ Value();
}; // class GCE2d_MakeHyperbola

//---------------------------------------------------------------------
//  Class  GCE2d_MakeLine
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Line from Geom2d.
/// * Create a Line parallel to another and passing
/// through a point.
/// * Create a Line passing through 2 points.
/// </summary>
public ref class GCE2d_MakeLine sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeLine_h
public:
	Include_GCE2d_MakeLine_h
#endif

public:
	GCE2d_MakeLine(::GCE2d_MakeLine* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeLine(::GCE2d_MakeLine& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeLine* NativeInstance
	{
		::GCE2d_MakeLine* get()
		{
			return static_cast<::GCE2d_MakeLine*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates a line located in 2D space with the axis placement A.
	/// The Location of A is the origin of the line.
	/// </summary>
GCE2d_MakeLine(Macad::Occt::Ax2d A);
		/// <summary>
	/// Creates a line from a non persistent line from package gp.
	/// </summary>
GCE2d_MakeLine(Macad::Occt::gp_Lin2d^ L);
		/// <summary>
	/// P is the origin and V is the direction of the line.
	/// </summary>
GCE2d_MakeLine(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V);
		/// <summary>
	/// Make a Line from Geom2d <TheLin> parallel to another
	/// Lin <Lin> and passing through a Pnt <Point>.
	/// </summary>
GCE2d_MakeLine(Macad::Occt::gp_Lin2d^ Lin, Macad::Occt::Pnt2d Point);
		/// <summary>
	/// Make a Line from Geom2d <TheLin> parallel to another
	/// Lin <Lin> at a distance <Dist>.
	/// </summary>
GCE2d_MakeLine(Macad::Occt::gp_Lin2d^ Lin, double Dist);
		/// <summary>
	/// Make a Line from Geom2d <TheLin> passing through 2
	/// Pnt <P1>,<P2>.
	/// It returns false if <p1> and <P2> are confused.
	/// Warning
	/// If points P1 and P2 coincident (that is, when IsDone
	/// returns false), the Status function returns gce_ConfusedPoints.
	/// </summary>
GCE2d_MakeLine(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	GCE2d_MakeLine(Macad::Occt::GCE2d_MakeLine^ parameter1);
		/// <summary>
	/// Returns the constructed line.
	/// Exceptions StdFail_NotDone if no line is constructed.
	/// </summary>
Macad::Occt::Geom2d_Line^ Value();
}; // class GCE2d_MakeLine

//---------------------------------------------------------------------
//  Class  GCE2d_MakeMirror
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// symmetrical transformation in 2D space about a point
/// or axis. The result is a Geom2d_Transformation transformation.
/// A MakeMirror object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class GCE2d_MakeMirror sealed : public BaseClass<::GCE2d_MakeMirror>
{

#ifdef Include_GCE2d_MakeMirror_h
public:
	Include_GCE2d_MakeMirror_h
#endif

public:
	GCE2d_MakeMirror(::GCE2d_MakeMirror* nativeInstance)
		: BaseClass<::GCE2d_MakeMirror>( nativeInstance, true )
	{}

	GCE2d_MakeMirror(::GCE2d_MakeMirror& nativeInstance)
		: BaseClass<::GCE2d_MakeMirror>( &nativeInstance, false )
	{}

	property ::GCE2d_MakeMirror* NativeInstance
	{
		::GCE2d_MakeMirror* get()
		{
			return static_cast<::GCE2d_MakeMirror*>(_NativeInstance);
		}
	}

public:
	GCE2d_MakeMirror(Macad::Occt::Pnt2d Point);
	GCE2d_MakeMirror(Macad::Occt::Ax2d Axis);
	GCE2d_MakeMirror(Macad::Occt::gp_Lin2d^ Line);
		/// <summary>
	/// Make a symmetry transformation af axis defined by
	/// <Point> and <Direc>.
	/// </summary>
GCE2d_MakeMirror(Macad::Occt::Pnt2d Point, Macad::Occt::Dir2d Direc);
	GCE2d_MakeMirror(Macad::Occt::GCE2d_MakeMirror^ parameter1);
		/// <summary>
	/// Returns the constructed transformation.
	/// </summary>
Macad::Occt::Geom2d_Transformation^ Value();
}; // class GCE2d_MakeMirror

//---------------------------------------------------------------------
//  Class  GCE2d_MakeParabola
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create Parabola from Geom2d.
/// * Create an Parabola from two apex  and the center.
/// Defines the parabola in the parameterization range  :
/// ]-infinite,+infinite[
/// The vertex of the parabola is the "Location" point of the
/// local coordinate system "XAxis" of the parabola.
/// The "XAxis" of the parabola is its axis of symmetry.
/// The "Xaxis" is oriented from the vertex of the parabola to the
/// Focus of the parabola.
/// The equation of the parabola in the local coordinate system is
/// Y**2 = (2*P) * X
/// P is the distance between the focus and the directrix of the
/// parabola called Parameter).
/// The focal length F = P/2 is the distance between the vertex
/// and the focus of the parabola.
/// </summary>
public ref class GCE2d_MakeParabola sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeParabola_h
public:
	Include_GCE2d_MakeParabola_h
#endif

public:
	GCE2d_MakeParabola(::GCE2d_MakeParabola* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeParabola(::GCE2d_MakeParabola& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeParabola* NativeInstance
	{
		::GCE2d_MakeParabola* get()
		{
			return static_cast<::GCE2d_MakeParabola*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates a parabola from a non persistent one.
	/// </summary>
GCE2d_MakeParabola(Macad::Occt::gp_Parab2d^ Prb);
		/// <summary>
	/// Creates a parabola with its local coordinate system and it's focal
	/// length "Focal".
	/// The "Location" point of "Axis" is the vertex of the parabola
	/// Status is "NegativeFocusLength" if Focal < 0.0
	/// </summary>
GCE2d_MakeParabola(Macad::Occt::Ax22d Axis, double Focal);
		/// <summary>
	/// Creates a parabola with its "MirrorAxis" and it's focal length "Focal".
	/// MirrorAxis is the axis of symmetry of the curve, it is the
	/// "XAxis". The "YAxis" is parallel to the directrix of the
	/// parabola. The "Location" point of "MirrorAxis" is the vertex of the parabola
	/// Status is "NegativeFocusLength" if Focal < 0.0
	/// </summary>
GCE2d_MakeParabola(Macad::Occt::Ax2d MirrorAxis, double Focal, bool Sense);
		/// <summary>
	/// D is the directrix of the parabola and F the focus point.
	/// The symmetry axis "XAxis" of the parabola is normal to the
	/// directrix and pass through the focus point F, but its
	/// "Location" point is the vertex of the parabola.
	/// The "YAxis" of the parabola is parallel to D and its "Location"
	/// point is the vertex of the parabola.
	/// </summary>
GCE2d_MakeParabola(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F, bool Sense);
		/// <summary>
	/// D is the directrix of the parabola and F the focus point.
	/// The symmetry axis "XAxis" of the parabola is normal to the
	/// directrix and pass through the focus point F, but its
	/// "Location" point is the vertex of the parabola.
	/// The "YAxis" of the parabola is parallel to D and its "Location"
	/// point is the vertex of the parabola.
	/// </summary>
GCE2d_MakeParabola(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F);
		/// <summary>
	/// Make a parabola with focal point S1 and
	/// center O
	/// The branch of the parabola returned will have <S1> as
	/// focal point
	/// The implicit orientation of the parabola is:
	/// -   the same one as the parabola Prb,
	/// -   the sense defined by the coordinate system Axis or the directrix D,
	/// -   the trigonometric sense if Sense is not given or is true, or
	/// -   the opposite sense if Sense is false.
	/// Warning
	/// The MakeParabola class does not prevent the
	/// construction of a parabola with a null focal distance.
	/// If an error occurs (that is, when IsDone returns
	/// false), the Status function returns:
	/// -   gce_NullFocusLength if Focal is less than 0.0, or
	/// -   gce_NullAxis if points S1 and O are coincident.
	/// </summary>
GCE2d_MakeParabola(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d O);
	GCE2d_MakeParabola(Macad::Occt::GCE2d_MakeParabola^ parameter1);
		/// <summary>
	/// Returns the constructed parabola.
	/// Exceptions StdFail_NotDone if no parabola is constructed.
	/// </summary>
Macad::Occt::Geom2d_Parabola^ Value();
}; // class GCE2d_MakeParabola

//---------------------------------------------------------------------
//  Class  GCE2d_MakeRotation
//---------------------------------------------------------------------
/// <summary>
/// This class implements an elementary construction algorithm for
/// a rotation in 2D space. The result is a Geom2d_Transformation transformation.
/// A MakeRotation object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class GCE2d_MakeRotation sealed : public BaseClass<::GCE2d_MakeRotation>
{

#ifdef Include_GCE2d_MakeRotation_h
public:
	Include_GCE2d_MakeRotation_h
#endif

public:
	GCE2d_MakeRotation(::GCE2d_MakeRotation* nativeInstance)
		: BaseClass<::GCE2d_MakeRotation>( nativeInstance, true )
	{}

	GCE2d_MakeRotation(::GCE2d_MakeRotation& nativeInstance)
		: BaseClass<::GCE2d_MakeRotation>( &nativeInstance, false )
	{}

	property ::GCE2d_MakeRotation* NativeInstance
	{
		::GCE2d_MakeRotation* get()
		{
			return static_cast<::GCE2d_MakeRotation*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs a rotation through angle Angle about the center Point.
	/// </summary>
GCE2d_MakeRotation(Macad::Occt::Pnt2d Point, double Angle);
	GCE2d_MakeRotation(Macad::Occt::GCE2d_MakeRotation^ parameter1);
		/// <summary>
	/// Returns the constructed transformation.
	/// </summary>
Macad::Occt::Geom2d_Transformation^ Value();
}; // class GCE2d_MakeRotation

//---------------------------------------------------------------------
//  Class  GCE2d_MakeScale
//---------------------------------------------------------------------
/// <summary>
/// This class implements an elementary construction algorithm for
/// a scaling transformation in 2D space. The result is a
/// Geom2d_Transformation transformation.
/// A MakeScale object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class GCE2d_MakeScale sealed : public BaseClass<::GCE2d_MakeScale>
{

#ifdef Include_GCE2d_MakeScale_h
public:
	Include_GCE2d_MakeScale_h
#endif

public:
	GCE2d_MakeScale(::GCE2d_MakeScale* nativeInstance)
		: BaseClass<::GCE2d_MakeScale>( nativeInstance, true )
	{}

	GCE2d_MakeScale(::GCE2d_MakeScale& nativeInstance)
		: BaseClass<::GCE2d_MakeScale>( &nativeInstance, false )
	{}

	property ::GCE2d_MakeScale* NativeInstance
	{
		::GCE2d_MakeScale* get()
		{
			return static_cast<::GCE2d_MakeScale*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs a scaling transformation with
	/// -   Point as the center of the transformation, and
	/// -   Scale as the scale factor.
	/// </summary>
GCE2d_MakeScale(Macad::Occt::Pnt2d Point, double Scale);
	GCE2d_MakeScale(Macad::Occt::GCE2d_MakeScale^ parameter1);
		/// <summary>
	/// Returns the constructed transformation.
	/// </summary>
Macad::Occt::Geom2d_Transformation^ Value();
}; // class GCE2d_MakeScale

//---------------------------------------------------------------------
//  Class  GCE2d_MakeSegment
//---------------------------------------------------------------------
/// <summary>
/// Implements construction algorithms for a line
/// segment in the plane. The result is a
/// Geom2d_TrimmedCurve curve.
/// A MakeSegment object provides a framework for:
/// -   defining the construction of the line segment,
/// -   implementing the construction algorithm, and
/// -   consulting the results. In particular, the Value
/// function returns the constructed line segment.
/// </summary>
public ref class GCE2d_MakeSegment sealed : public Macad::Occt::GCE2d_Root
{

#ifdef Include_GCE2d_MakeSegment_h
public:
	Include_GCE2d_MakeSegment_h
#endif

public:
	GCE2d_MakeSegment(::GCE2d_MakeSegment* nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	GCE2d_MakeSegment(::GCE2d_MakeSegment& nativeInstance)
		: Macad::Occt::GCE2d_Root( nativeInstance )
	{}

	property ::GCE2d_MakeSegment* NativeInstance
	{
		::GCE2d_MakeSegment* get()
		{
			return static_cast<::GCE2d_MakeSegment*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Make a segment of Line from the 2 points <P1> and <P2>.
	/// Status is "ConfusedPoints" if <P1> and <P2> are confused.
	/// </summary>
GCE2d_MakeSegment(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
		/// <summary>
	/// Make a segment of Line from the point <P1> with
	/// the direction <P> and ended by the projection of
	/// <P2> on the line <P1,V>.
	/// Status is "ConfusedPoints" if <P1> and <P2> are confused.
	/// </summary>
GCE2d_MakeSegment(Macad::Occt::Pnt2d P1, Macad::Occt::Dir2d V, Macad::Occt::Pnt2d P2);
		/// <summary>
	/// Make a segment of Line from the line <Line>
	/// between the two parameters U1 and U2.
	/// Status is "SameParameters" if <U1> is equal <U2>.
	/// </summary>
GCE2d_MakeSegment(Macad::Occt::gp_Lin2d^ Line, double U1, double U2);
		/// <summary>
	/// Make a segment of Line from the line <Line>
	/// between the point <Point> and the parameter Ulast.
	/// It returns NullObject if <U1> is equal <U2>.
	/// </summary>
GCE2d_MakeSegment(Macad::Occt::gp_Lin2d^ Line, Macad::Occt::Pnt2d Point, double Ulast);
		/// <summary>
	/// Make a segment of Line from the line <Line>
	/// between the two points <P1> and <P2>.
	/// It returns NullObject if <P1> and <P2> are confused.
	/// Warning
	/// If the points which limit the segment are coincident
	/// for given points or for the projection of given points
	/// on the line which supports the line segment (that is,
	/// when IsDone returns false), the Status function
	/// returns gce_ConfusedPoints. This warning only
	/// concerns the first two constructors.
	/// </summary>
GCE2d_MakeSegment(Macad::Occt::gp_Lin2d^ Line, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	GCE2d_MakeSegment(Macad::Occt::GCE2d_MakeSegment^ parameter1);
		/// <summary>
	/// Returns the constructed line segment.
	/// Exceptions StdFail_NotDone if no line segment is constructed.
	/// </summary>
Macad::Occt::Geom2d_TrimmedCurve^ Value();
}; // class GCE2d_MakeSegment

//---------------------------------------------------------------------
//  Class  GCE2d_MakeTranslation
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// translation in 2D space. The result is a
/// Geom2d_Transformation transformation.
/// A MakeTranslation object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class GCE2d_MakeTranslation sealed : public BaseClass<::GCE2d_MakeTranslation>
{

#ifdef Include_GCE2d_MakeTranslation_h
public:
	Include_GCE2d_MakeTranslation_h
#endif

public:
	GCE2d_MakeTranslation(::GCE2d_MakeTranslation* nativeInstance)
		: BaseClass<::GCE2d_MakeTranslation>( nativeInstance, true )
	{}

	GCE2d_MakeTranslation(::GCE2d_MakeTranslation& nativeInstance)
		: BaseClass<::GCE2d_MakeTranslation>( &nativeInstance, false )
	{}

	property ::GCE2d_MakeTranslation* NativeInstance
	{
		::GCE2d_MakeTranslation* get()
		{
			return static_cast<::GCE2d_MakeTranslation*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs a translation along the vector Vect.
	/// </summary>
GCE2d_MakeTranslation(Macad::Occt::Vec2d Vect);
		/// <summary>
	/// Constructs a translation along the vector
	/// (Point1,Point2) defined from the point Point1 to the point Point2.
	/// </summary>
GCE2d_MakeTranslation(Macad::Occt::Pnt2d Point1, Macad::Occt::Pnt2d Point2);
	GCE2d_MakeTranslation(Macad::Occt::GCE2d_MakeTranslation^ parameter1);
		/// <summary>
	/// Returns the constructed transformation.
	/// </summary>
Macad::Occt::Geom2d_Transformation^ Value();
}; // class GCE2d_MakeTranslation

}; // namespace Occt
}; // namespace Macad
