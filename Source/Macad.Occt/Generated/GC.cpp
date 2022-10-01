// Generated wrapper code for package GC

#include "OcctPCH.h"
#include "GC.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "GC.h"
#include "Standard.h"
#include "gce.h"
#include "gp.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  GC_Root
//---------------------------------------------------------------------

Macad::Occt::GC_Root::GC_Root(Macad::Occt::GC_Root^ parameter1)
	: BaseClass<::GC_Root>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_Root(*(::GC_Root*)parameter1->NativeInstance);
}

Macad::Occt::GC_Root::GC_Root()
	: BaseClass<::GC_Root>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_Root();
}

bool Macad::Occt::GC_Root::IsDone()
{
	return ((::GC_Root*)_NativeInstance)->IsDone();
}

Macad::Occt::gce_ErrorType Macad::Occt::GC_Root::Status()
{
	return (Macad::Occt::gce_ErrorType)((::GC_Root*)_NativeInstance)->Status();
}




//---------------------------------------------------------------------
//  Class  GC_MakeArcOfCircle
//---------------------------------------------------------------------

Macad::Occt::GC_MakeArcOfCircle::GC_MakeArcOfCircle(Macad::Occt::gp_Circ^ Circ, double Alpha1, double Alpha2, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeArcOfCircle(*(::gp_Circ*)Circ->NativeInstance, Alpha1, Alpha2, Sense);
}

Macad::Occt::GC_MakeArcOfCircle::GC_MakeArcOfCircle(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt P, double Alpha, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::GC_MakeArcOfCircle(*(::gp_Circ*)Circ->NativeInstance, *(gp_Pnt*)pp_P, Alpha, Sense);
}

Macad::Occt::GC_MakeArcOfCircle::GC_MakeArcOfCircle(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeArcOfCircle(*(::gp_Circ*)Circ->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, Sense);
}

Macad::Occt::GC_MakeArcOfCircle::GC_MakeArcOfCircle(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	_NativeInstance = new ::GC_MakeArcOfCircle(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

Macad::Occt::GC_MakeArcOfCircle::GC_MakeArcOfCircle(Macad::Occt::Pnt P1, Macad::Occt::Vec V, Macad::Occt::Pnt P2)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeArcOfCircle(*(gp_Pnt*)pp_P1, *(gp_Vec*)pp_V, *(gp_Pnt*)pp_P2);
}

Macad::Occt::GC_MakeArcOfCircle::GC_MakeArcOfCircle(Macad::Occt::GC_MakeArcOfCircle^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeArcOfCircle(*(::GC_MakeArcOfCircle*)parameter1->NativeInstance);
}

Macad::Occt::Geom_TrimmedCurve^ Macad::Occt::GC_MakeArcOfCircle::Value()
{
	Handle(::Geom_TrimmedCurve) _result;
	_result = ((::GC_MakeArcOfCircle*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeArcOfEllipse
//---------------------------------------------------------------------

Macad::Occt::GC_MakeArcOfEllipse::GC_MakeArcOfEllipse(Macad::Occt::gp_Elips^ Elips, double Alpha1, double Alpha2, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeArcOfEllipse(*(::gp_Elips*)Elips->NativeInstance, Alpha1, Alpha2, Sense);
}

Macad::Occt::GC_MakeArcOfEllipse::GC_MakeArcOfEllipse(Macad::Occt::gp_Elips^ Elips, Macad::Occt::Pnt P, double Alpha, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::GC_MakeArcOfEllipse(*(::gp_Elips*)Elips->NativeInstance, *(gp_Pnt*)pp_P, Alpha, Sense);
}

Macad::Occt::GC_MakeArcOfEllipse::GC_MakeArcOfEllipse(Macad::Occt::gp_Elips^ Elips, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeArcOfEllipse(*(::gp_Elips*)Elips->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, Sense);
}

Macad::Occt::GC_MakeArcOfEllipse::GC_MakeArcOfEllipse(Macad::Occt::GC_MakeArcOfEllipse^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeArcOfEllipse(*(::GC_MakeArcOfEllipse*)parameter1->NativeInstance);
}

Macad::Occt::Geom_TrimmedCurve^ Macad::Occt::GC_MakeArcOfEllipse::Value()
{
	Handle(::Geom_TrimmedCurve) _result;
	_result = ((::GC_MakeArcOfEllipse*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeArcOfHyperbola
//---------------------------------------------------------------------

Macad::Occt::GC_MakeArcOfHyperbola::GC_MakeArcOfHyperbola(Macad::Occt::gp_Hypr^ Hypr, double Alpha1, double Alpha2, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeArcOfHyperbola(*(::gp_Hypr*)Hypr->NativeInstance, Alpha1, Alpha2, Sense);
}

Macad::Occt::GC_MakeArcOfHyperbola::GC_MakeArcOfHyperbola(Macad::Occt::gp_Hypr^ Hypr, Macad::Occt::Pnt P, double Alpha, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::GC_MakeArcOfHyperbola(*(::gp_Hypr*)Hypr->NativeInstance, *(gp_Pnt*)pp_P, Alpha, Sense);
}

Macad::Occt::GC_MakeArcOfHyperbola::GC_MakeArcOfHyperbola(Macad::Occt::gp_Hypr^ Hypr, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeArcOfHyperbola(*(::gp_Hypr*)Hypr->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, Sense);
}

Macad::Occt::GC_MakeArcOfHyperbola::GC_MakeArcOfHyperbola(Macad::Occt::GC_MakeArcOfHyperbola^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeArcOfHyperbola(*(::GC_MakeArcOfHyperbola*)parameter1->NativeInstance);
}

Macad::Occt::Geom_TrimmedCurve^ Macad::Occt::GC_MakeArcOfHyperbola::Value()
{
	Handle(::Geom_TrimmedCurve) _result;
	_result = ((::GC_MakeArcOfHyperbola*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeArcOfParabola
//---------------------------------------------------------------------

Macad::Occt::GC_MakeArcOfParabola::GC_MakeArcOfParabola(Macad::Occt::gp_Parab^ Parab, double Alpha1, double Alpha2, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeArcOfParabola(*(::gp_Parab*)Parab->NativeInstance, Alpha1, Alpha2, Sense);
}

Macad::Occt::GC_MakeArcOfParabola::GC_MakeArcOfParabola(Macad::Occt::gp_Parab^ Parab, Macad::Occt::Pnt P, double Alpha, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::GC_MakeArcOfParabola(*(::gp_Parab*)Parab->NativeInstance, *(gp_Pnt*)pp_P, Alpha, Sense);
}

Macad::Occt::GC_MakeArcOfParabola::GC_MakeArcOfParabola(Macad::Occt::gp_Parab^ Parab, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool Sense)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeArcOfParabola(*(::gp_Parab*)Parab->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, Sense);
}

Macad::Occt::GC_MakeArcOfParabola::GC_MakeArcOfParabola(Macad::Occt::GC_MakeArcOfParabola^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeArcOfParabola(*(::GC_MakeArcOfParabola*)parameter1->NativeInstance);
}

Macad::Occt::Geom_TrimmedCurve^ Macad::Occt::GC_MakeArcOfParabola::Value()
{
	Handle(::Geom_TrimmedCurve) _result;
	_result = ((::GC_MakeArcOfParabola*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeCircle
//---------------------------------------------------------------------

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::gp_Circ^ C)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeCircle(*(::gp_Circ*)C->NativeInstance);
}

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::Ax2 A2, double Radius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::GC_MakeCircle(*(gp_Ax2*)pp_A2, Radius);
}

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::gp_Circ^ Circ, double Dist)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeCircle(*(::gp_Circ*)Circ->NativeInstance, Dist);
}

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt Point)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	_NativeInstance = new ::GC_MakeCircle(*(::gp_Circ*)Circ->NativeInstance, *(gp_Pnt*)pp_Point);
}

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	_NativeInstance = new ::GC_MakeCircle(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::Pnt Center, Macad::Occt::Dir Norm, double Radius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
	pin_ptr<Macad::Occt::Dir> pp_Norm = &Norm;
	_NativeInstance = new ::GC_MakeCircle(*(gp_Pnt*)pp_Center, *(gp_Dir*)pp_Norm, Radius);
}

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::Pnt Center, Macad::Occt::Pnt PtAxis, double Radius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
	pin_ptr<Macad::Occt::Pnt> pp_PtAxis = &PtAxis;
	_NativeInstance = new ::GC_MakeCircle(*(gp_Pnt*)pp_Center, *(gp_Pnt*)pp_PtAxis, Radius);
}

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::Ax1 Axis, double Radius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
	_NativeInstance = new ::GC_MakeCircle(*(gp_Ax1*)pp_Axis, Radius);
}

Macad::Occt::GC_MakeCircle::GC_MakeCircle(Macad::Occt::GC_MakeCircle^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeCircle(*(::GC_MakeCircle*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Circle^ Macad::Occt::GC_MakeCircle::Value()
{
	Handle(::Geom_Circle) _result;
	_result = ((::GC_MakeCircle*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Circle::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeConicalSurface
//---------------------------------------------------------------------

Macad::Occt::GC_MakeConicalSurface::GC_MakeConicalSurface(Macad::Occt::Ax2 A2, double Ang, double Radius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::GC_MakeConicalSurface(*(gp_Ax2*)pp_A2, Ang, Radius);
}

Macad::Occt::GC_MakeConicalSurface::GC_MakeConicalSurface(Macad::Occt::gp_Cone^ C)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeConicalSurface(*(::gp_Cone*)C->NativeInstance);
}

Macad::Occt::GC_MakeConicalSurface::GC_MakeConicalSurface(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	pin_ptr<Macad::Occt::Pnt> pp_P4 = &P4;
	_NativeInstance = new ::GC_MakeConicalSurface(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4);
}

Macad::Occt::GC_MakeConicalSurface::GC_MakeConicalSurface(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double R1, double R2)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeConicalSurface(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, R1, R2);
}

Macad::Occt::GC_MakeConicalSurface::GC_MakeConicalSurface(Macad::Occt::GC_MakeConicalSurface^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeConicalSurface(*(::GC_MakeConicalSurface*)parameter1->NativeInstance);
}

Macad::Occt::Geom_ConicalSurface^ Macad::Occt::GC_MakeConicalSurface::Value()
{
	Handle(::Geom_ConicalSurface) _result;
	_result = ((::GC_MakeConicalSurface*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_ConicalSurface::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeCylindricalSurface
//---------------------------------------------------------------------

Macad::Occt::GC_MakeCylindricalSurface::GC_MakeCylindricalSurface(Macad::Occt::Ax2 A2, double Radius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::GC_MakeCylindricalSurface(*(gp_Ax2*)pp_A2, Radius);
}

Macad::Occt::GC_MakeCylindricalSurface::GC_MakeCylindricalSurface(Macad::Occt::gp_Cylinder^ C)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeCylindricalSurface(*(::gp_Cylinder*)C->NativeInstance);
}

Macad::Occt::GC_MakeCylindricalSurface::GC_MakeCylindricalSurface(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::Pnt Point)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	_NativeInstance = new ::GC_MakeCylindricalSurface(*(::gp_Cylinder*)Cyl->NativeInstance, *(gp_Pnt*)pp_Point);
}

Macad::Occt::GC_MakeCylindricalSurface::GC_MakeCylindricalSurface(Macad::Occt::gp_Cylinder^ Cyl, double Dist)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeCylindricalSurface(*(::gp_Cylinder*)Cyl->NativeInstance, Dist);
}

Macad::Occt::GC_MakeCylindricalSurface::GC_MakeCylindricalSurface(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	_NativeInstance = new ::GC_MakeCylindricalSurface(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

Macad::Occt::GC_MakeCylindricalSurface::GC_MakeCylindricalSurface(Macad::Occt::Ax1 Axis, double Radius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
	_NativeInstance = new ::GC_MakeCylindricalSurface(*(gp_Ax1*)pp_Axis, Radius);
}

Macad::Occt::GC_MakeCylindricalSurface::GC_MakeCylindricalSurface(Macad::Occt::gp_Circ^ Circ)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeCylindricalSurface(*(::gp_Circ*)Circ->NativeInstance);
}

Macad::Occt::GC_MakeCylindricalSurface::GC_MakeCylindricalSurface(Macad::Occt::GC_MakeCylindricalSurface^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeCylindricalSurface(*(::GC_MakeCylindricalSurface*)parameter1->NativeInstance);
}

Macad::Occt::Geom_CylindricalSurface^ Macad::Occt::GC_MakeCylindricalSurface::Value()
{
	Handle(::Geom_CylindricalSurface) _result;
	_result = ((::GC_MakeCylindricalSurface*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_CylindricalSurface::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeEllipse
//---------------------------------------------------------------------

Macad::Occt::GC_MakeEllipse::GC_MakeEllipse(Macad::Occt::gp_Elips^ E)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeEllipse(*(::gp_Elips*)E->NativeInstance);
}

Macad::Occt::GC_MakeEllipse::GC_MakeEllipse(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::GC_MakeEllipse(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

Macad::Occt::GC_MakeEllipse::GC_MakeEllipse(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_S1 = &S1;
	pin_ptr<Macad::Occt::Pnt> pp_S2 = &S2;
	pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
	_NativeInstance = new ::GC_MakeEllipse(*(gp_Pnt*)pp_S1, *(gp_Pnt*)pp_S2, *(gp_Pnt*)pp_Center);
}

Macad::Occt::GC_MakeEllipse::GC_MakeEllipse(Macad::Occt::GC_MakeEllipse^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeEllipse(*(::GC_MakeEllipse*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Ellipse^ Macad::Occt::GC_MakeEllipse::Value()
{
	Handle(::Geom_Ellipse) _result;
	_result = ((::GC_MakeEllipse*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Ellipse::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeHyperbola
//---------------------------------------------------------------------

Macad::Occt::GC_MakeHyperbola::GC_MakeHyperbola(Macad::Occt::gp_Hypr^ H)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeHyperbola(*(::gp_Hypr*)H->NativeInstance);
}

Macad::Occt::GC_MakeHyperbola::GC_MakeHyperbola(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::GC_MakeHyperbola(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

Macad::Occt::GC_MakeHyperbola::GC_MakeHyperbola(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_S1 = &S1;
	pin_ptr<Macad::Occt::Pnt> pp_S2 = &S2;
	pin_ptr<Macad::Occt::Pnt> pp_Center = &Center;
	_NativeInstance = new ::GC_MakeHyperbola(*(gp_Pnt*)pp_S1, *(gp_Pnt*)pp_S2, *(gp_Pnt*)pp_Center);
}

Macad::Occt::GC_MakeHyperbola::GC_MakeHyperbola(Macad::Occt::GC_MakeHyperbola^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeHyperbola(*(::GC_MakeHyperbola*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Hyperbola^ Macad::Occt::GC_MakeHyperbola::Value()
{
	Handle(::Geom_Hyperbola) _result;
	_result = ((::GC_MakeHyperbola*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Hyperbola::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeLine
//---------------------------------------------------------------------

Macad::Occt::GC_MakeLine::GC_MakeLine(Macad::Occt::Ax1 A1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	_NativeInstance = new ::GC_MakeLine(*(gp_Ax1*)pp_A1);
}

Macad::Occt::GC_MakeLine::GC_MakeLine(Macad::Occt::gp_Lin^ L)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeLine(*(::gp_Lin*)L->NativeInstance);
}

Macad::Occt::GC_MakeLine::GC_MakeLine(Macad::Occt::Pnt P, Macad::Occt::Dir V)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Dir> pp_V = &V;
	_NativeInstance = new ::GC_MakeLine(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

Macad::Occt::GC_MakeLine::GC_MakeLine(Macad::Occt::gp_Lin^ Lin, Macad::Occt::Pnt Point)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	_NativeInstance = new ::GC_MakeLine(*(::gp_Lin*)Lin->NativeInstance, *(gp_Pnt*)pp_Point);
}

Macad::Occt::GC_MakeLine::GC_MakeLine(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeLine(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::GC_MakeLine::GC_MakeLine(Macad::Occt::GC_MakeLine^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeLine(*(::GC_MakeLine*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Line^ Macad::Occt::GC_MakeLine::Value()
{
	Handle(::Geom_Line) _result;
	_result = ((::GC_MakeLine*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Line::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeMirror
//---------------------------------------------------------------------

Macad::Occt::GC_MakeMirror::GC_MakeMirror(Macad::Occt::Pnt Point)
	: BaseClass<::GC_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	_NativeInstance = new ::GC_MakeMirror(*(gp_Pnt*)pp_Point);
}

Macad::Occt::GC_MakeMirror::GC_MakeMirror(Macad::Occt::Ax1 Axis)
	: BaseClass<::GC_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
	_NativeInstance = new ::GC_MakeMirror(*(gp_Ax1*)pp_Axis);
}

Macad::Occt::GC_MakeMirror::GC_MakeMirror(Macad::Occt::gp_Lin^ Line)
	: BaseClass<::GC_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeMirror(*(::gp_Lin*)Line->NativeInstance);
}

Macad::Occt::GC_MakeMirror::GC_MakeMirror(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc)
	: BaseClass<::GC_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	pin_ptr<Macad::Occt::Dir> pp_Direc = &Direc;
	_NativeInstance = new ::GC_MakeMirror(*(gp_Pnt*)pp_Point, *(gp_Dir*)pp_Direc);
}

Macad::Occt::GC_MakeMirror::GC_MakeMirror(Macad::Occt::Pln Plane)
	: BaseClass<::GC_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Plane = &Plane;
	_NativeInstance = new ::GC_MakeMirror(*(gp_Pln*)pp_Plane);
}

Macad::Occt::GC_MakeMirror::GC_MakeMirror(Macad::Occt::Ax2 Plane)
	: BaseClass<::GC_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_Plane = &Plane;
	_NativeInstance = new ::GC_MakeMirror(*(gp_Ax2*)pp_Plane);
}

Macad::Occt::GC_MakeMirror::GC_MakeMirror(Macad::Occt::GC_MakeMirror^ parameter1)
	: BaseClass<::GC_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeMirror(*(::GC_MakeMirror*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Transformation^ Macad::Occt::GC_MakeMirror::Value()
{
	Handle(::Geom_Transformation) _result;
	_result = ((::GC_MakeMirror*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Transformation::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakePlane
//---------------------------------------------------------------------

Macad::Occt::GC_MakePlane::GC_MakePlane(Macad::Occt::Pln Pl)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::GC_MakePlane(*(gp_Pln*)pp_Pl);
}

Macad::Occt::GC_MakePlane::GC_MakePlane(Macad::Occt::Pnt P, Macad::Occt::Dir V)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Dir> pp_V = &V;
	_NativeInstance = new ::GC_MakePlane(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

Macad::Occt::GC_MakePlane::GC_MakePlane(double A, double B, double C, double D)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakePlane(A, B, C, D);
}

Macad::Occt::GC_MakePlane::GC_MakePlane(Macad::Occt::Pln Pln, Macad::Occt::Pnt Point)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pln = &Pln;
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	_NativeInstance = new ::GC_MakePlane(*(gp_Pln*)pp_Pln, *(gp_Pnt*)pp_Point);
}

Macad::Occt::GC_MakePlane::GC_MakePlane(Macad::Occt::Pln Pln, double Dist)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pln = &Pln;
	_NativeInstance = new ::GC_MakePlane(*(gp_Pln*)pp_Pln, Dist);
}

Macad::Occt::GC_MakePlane::GC_MakePlane(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	_NativeInstance = new ::GC_MakePlane(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

Macad::Occt::GC_MakePlane::GC_MakePlane(Macad::Occt::Ax1 Axis)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
	_NativeInstance = new ::GC_MakePlane(*(gp_Ax1*)pp_Axis);
}

Macad::Occt::GC_MakePlane::GC_MakePlane(Macad::Occt::GC_MakePlane^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakePlane(*(::GC_MakePlane*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Plane^ Macad::Occt::GC_MakePlane::Value()
{
	Handle(::Geom_Plane) _result;
	_result = ((::GC_MakePlane*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeRotation
//---------------------------------------------------------------------

Macad::Occt::GC_MakeRotation::GC_MakeRotation(Macad::Occt::gp_Lin^ Line, double Angle)
	: BaseClass<::GC_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeRotation(*(::gp_Lin*)Line->NativeInstance, Angle);
}

Macad::Occt::GC_MakeRotation::GC_MakeRotation(Macad::Occt::Ax1 Axis, double Angle)
	: BaseClass<::GC_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_Axis = &Axis;
	_NativeInstance = new ::GC_MakeRotation(*(gp_Ax1*)pp_Axis, Angle);
}

Macad::Occt::GC_MakeRotation::GC_MakeRotation(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc, double Angle)
	: BaseClass<::GC_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	pin_ptr<Macad::Occt::Dir> pp_Direc = &Direc;
	_NativeInstance = new ::GC_MakeRotation(*(gp_Pnt*)pp_Point, *(gp_Dir*)pp_Direc, Angle);
}

Macad::Occt::GC_MakeRotation::GC_MakeRotation(Macad::Occt::GC_MakeRotation^ parameter1)
	: BaseClass<::GC_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeRotation(*(::GC_MakeRotation*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Transformation^ Macad::Occt::GC_MakeRotation::Value()
{
	Handle(::Geom_Transformation) _result;
	_result = ((::GC_MakeRotation*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Transformation::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeScale
//---------------------------------------------------------------------

Macad::Occt::GC_MakeScale::GC_MakeScale(Macad::Occt::Pnt Point, double Scale)
	: BaseClass<::GC_MakeScale>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	_NativeInstance = new ::GC_MakeScale(*(gp_Pnt*)pp_Point, Scale);
}

Macad::Occt::GC_MakeScale::GC_MakeScale(Macad::Occt::GC_MakeScale^ parameter1)
	: BaseClass<::GC_MakeScale>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeScale(*(::GC_MakeScale*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Transformation^ Macad::Occt::GC_MakeScale::Value()
{
	Handle(::Geom_Transformation) _result;
	_result = ((::GC_MakeScale*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Transformation::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeSegment
//---------------------------------------------------------------------

Macad::Occt::GC_MakeSegment::GC_MakeSegment(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeSegment(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::GC_MakeSegment::GC_MakeSegment(Macad::Occt::gp_Lin^ Line, double U1, double U2)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeSegment(*(::gp_Lin*)Line->NativeInstance, U1, U2);
}

Macad::Occt::GC_MakeSegment::GC_MakeSegment(Macad::Occt::gp_Lin^ Line, Macad::Occt::Pnt Point, double Ulast)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	_NativeInstance = new ::GC_MakeSegment(*(::gp_Lin*)Line->NativeInstance, *(gp_Pnt*)pp_Point, Ulast);
}

Macad::Occt::GC_MakeSegment::GC_MakeSegment(Macad::Occt::gp_Lin^ Line, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeSegment(*(::gp_Lin*)Line->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::GC_MakeSegment::GC_MakeSegment(Macad::Occt::GC_MakeSegment^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeSegment(*(::GC_MakeSegment*)parameter1->NativeInstance);
}

Macad::Occt::Geom_TrimmedCurve^ Macad::Occt::GC_MakeSegment::Value()
{
	Handle(::Geom_TrimmedCurve) _result;
	_result = ((::GC_MakeSegment*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeTranslation
//---------------------------------------------------------------------

Macad::Occt::GC_MakeTranslation::GC_MakeTranslation(Macad::Occt::Vec Vect)
	: BaseClass<::GC_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec> pp_Vect = &Vect;
	_NativeInstance = new ::GC_MakeTranslation(*(gp_Vec*)pp_Vect);
}

Macad::Occt::GC_MakeTranslation::GC_MakeTranslation(Macad::Occt::Pnt Point1, Macad::Occt::Pnt Point2)
	: BaseClass<::GC_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point1 = &Point1;
	pin_ptr<Macad::Occt::Pnt> pp_Point2 = &Point2;
	_NativeInstance = new ::GC_MakeTranslation(*(gp_Pnt*)pp_Point1, *(gp_Pnt*)pp_Point2);
}

Macad::Occt::GC_MakeTranslation::GC_MakeTranslation(Macad::Occt::GC_MakeTranslation^ parameter1)
	: BaseClass<::GC_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeTranslation(*(::GC_MakeTranslation*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Transformation^ Macad::Occt::GC_MakeTranslation::Value()
{
	Handle(::Geom_Transformation) _result;
	_result = ((::GC_MakeTranslation*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Transformation::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeTrimmedCone
//---------------------------------------------------------------------

Macad::Occt::GC_MakeTrimmedCone::GC_MakeTrimmedCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	pin_ptr<Macad::Occt::Pnt> pp_P4 = &P4;
	_NativeInstance = new ::GC_MakeTrimmedCone(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4);
}

Macad::Occt::GC_MakeTrimmedCone::GC_MakeTrimmedCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double R1, double R2)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::GC_MakeTrimmedCone(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, R1, R2);
}

Macad::Occt::GC_MakeTrimmedCone::GC_MakeTrimmedCone(Macad::Occt::GC_MakeTrimmedCone^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeTrimmedCone(*(::GC_MakeTrimmedCone*)parameter1->NativeInstance);
}

Macad::Occt::Geom_RectangularTrimmedSurface^ Macad::Occt::GC_MakeTrimmedCone::Value()
{
	Handle(::Geom_RectangularTrimmedSurface) _result;
	_result = ((::GC_MakeTrimmedCone*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_RectangularTrimmedSurface::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GC_MakeTrimmedCylinder
//---------------------------------------------------------------------

Macad::Occt::GC_MakeTrimmedCylinder::GC_MakeTrimmedCylinder(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	_NativeInstance = new ::GC_MakeTrimmedCylinder(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

Macad::Occt::GC_MakeTrimmedCylinder::GC_MakeTrimmedCylinder(Macad::Occt::gp_Circ^ Circ, double Height)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeTrimmedCylinder(*(::gp_Circ*)Circ->NativeInstance, Height);
}

Macad::Occt::GC_MakeTrimmedCylinder::GC_MakeTrimmedCylinder(Macad::Occt::Ax1 A1, double Radius, double Height)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	_NativeInstance = new ::GC_MakeTrimmedCylinder(*(gp_Ax1*)pp_A1, Radius, Height);
}

Macad::Occt::GC_MakeTrimmedCylinder::GC_MakeTrimmedCylinder(Macad::Occt::GC_MakeTrimmedCylinder^ parameter1)
	: Macad::Occt::GC_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GC_MakeTrimmedCylinder(*(::GC_MakeTrimmedCylinder*)parameter1->NativeInstance);
}

Macad::Occt::Geom_RectangularTrimmedSurface^ Macad::Occt::GC_MakeTrimmedCylinder::Value()
{
	Handle(::Geom_RectangularTrimmedSurface) _result;
	_result = ((::GC_MakeTrimmedCylinder*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_RectangularTrimmedSurface::CreateDowncasted( _result.get());
}



