// Generated wrapper code for package GCE2d

#include "OcctPCH.h"
#include "GCE2d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "GCE2d.h"
#include "Standard.h"
#include "gce.h"
#include "gp.h"
#include "Geom2d.h"


//---------------------------------------------------------------------
//  Class  GCE2d_Root
//---------------------------------------------------------------------

Macad::Occt::GCE2d_Root::GCE2d_Root(Macad::Occt::GCE2d_Root^ parameter1)
	: BaseClass<::GCE2d_Root>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_Root(*(::GCE2d_Root*)parameter1->NativeInstance);
}

Macad::Occt::GCE2d_Root::GCE2d_Root()
	: BaseClass<::GCE2d_Root>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_Root();
}

bool Macad::Occt::GCE2d_Root::IsDone()
{
	return ((::GCE2d_Root*)_NativeInstance)->IsDone();
}

Macad::Occt::gce_ErrorType Macad::Occt::GCE2d_Root::Status()
{
	return (Macad::Occt::gce_ErrorType)((::GCE2d_Root*)_NativeInstance)->Status();
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeArcOfCircle
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, double Alpha1, double Alpha2, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(::gp_Circ2d*)Circ->NativeInstance, Alpha1, Alpha2, Sense);
}

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, double Alpha1, double Alpha2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(::gp_Circ2d*)Circ->NativeInstance, Alpha1, Alpha2, true);
}

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d P, double Alpha, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(::gp_Circ2d*)Circ->NativeInstance, *(gp_Pnt2d*)pp_P, Alpha, Sense);
}

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d P, double Alpha)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(::gp_Circ2d*)Circ->NativeInstance, *(gp_Pnt2d*)pp_P, Alpha, true);
}

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(::gp_Circ2d*)Circ->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, Sense);
}

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(::gp_Circ2d*)Circ->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, true);
}

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, Macad::Occt::Pnt2d P3)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt2d> pp_P3 = &P3;
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, *(gp_Pnt2d*)pp_P3);
}

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::Pnt2d P1, Macad::Occt::Vec2d V, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(gp_Pnt2d*)pp_P1, *(gp_Vec2d*)pp_V, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::GCE2d_MakeArcOfCircle::GCE2d_MakeArcOfCircle(Macad::Occt::GCE2d_MakeArcOfCircle^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfCircle(*(::GCE2d_MakeArcOfCircle*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_TrimmedCurve^ Macad::Occt::GCE2d_MakeArcOfCircle::Value()
{
	Handle(::Geom2d_TrimmedCurve) _result;
	_result = ((::GCE2d_MakeArcOfCircle*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeArcOfEllipse
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeArcOfEllipse::GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, double Alpha1, double Alpha2, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfEllipse(*(::gp_Elips2d*)Elips->NativeInstance, Alpha1, Alpha2, Sense);
}

Macad::Occt::GCE2d_MakeArcOfEllipse::GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, double Alpha1, double Alpha2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfEllipse(*(::gp_Elips2d*)Elips->NativeInstance, Alpha1, Alpha2, true);
}

Macad::Occt::GCE2d_MakeArcOfEllipse::GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, Macad::Occt::Pnt2d P, double Alpha, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeArcOfEllipse(*(::gp_Elips2d*)Elips->NativeInstance, *(gp_Pnt2d*)pp_P, Alpha, Sense);
}

Macad::Occt::GCE2d_MakeArcOfEllipse::GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, Macad::Occt::Pnt2d P, double Alpha)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeArcOfEllipse(*(::gp_Elips2d*)Elips->NativeInstance, *(gp_Pnt2d*)pp_P, Alpha, true);
}

Macad::Occt::GCE2d_MakeArcOfEllipse::GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfEllipse(*(::gp_Elips2d*)Elips->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, Sense);
}

Macad::Occt::GCE2d_MakeArcOfEllipse::GCE2d_MakeArcOfEllipse(Macad::Occt::gp_Elips2d^ Elips, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfEllipse(*(::gp_Elips2d*)Elips->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, true);
}

Macad::Occt::GCE2d_MakeArcOfEllipse::GCE2d_MakeArcOfEllipse(Macad::Occt::GCE2d_MakeArcOfEllipse^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfEllipse(*(::GCE2d_MakeArcOfEllipse*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_TrimmedCurve^ Macad::Occt::GCE2d_MakeArcOfEllipse::Value()
{
	Handle(::Geom2d_TrimmedCurve) _result;
	_result = ((::GCE2d_MakeArcOfEllipse*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeArcOfHyperbola
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeArcOfHyperbola::GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, double Alpha1, double Alpha2, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfHyperbola(*(::gp_Hypr2d*)Hypr->NativeInstance, Alpha1, Alpha2, Sense);
}

Macad::Occt::GCE2d_MakeArcOfHyperbola::GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, double Alpha1, double Alpha2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfHyperbola(*(::gp_Hypr2d*)Hypr->NativeInstance, Alpha1, Alpha2, true);
}

Macad::Occt::GCE2d_MakeArcOfHyperbola::GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, Macad::Occt::Pnt2d P, double Alpha, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeArcOfHyperbola(*(::gp_Hypr2d*)Hypr->NativeInstance, *(gp_Pnt2d*)pp_P, Alpha, Sense);
}

Macad::Occt::GCE2d_MakeArcOfHyperbola::GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, Macad::Occt::Pnt2d P, double Alpha)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeArcOfHyperbola(*(::gp_Hypr2d*)Hypr->NativeInstance, *(gp_Pnt2d*)pp_P, Alpha, true);
}

Macad::Occt::GCE2d_MakeArcOfHyperbola::GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfHyperbola(*(::gp_Hypr2d*)Hypr->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, Sense);
}

Macad::Occt::GCE2d_MakeArcOfHyperbola::GCE2d_MakeArcOfHyperbola(Macad::Occt::gp_Hypr2d^ Hypr, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfHyperbola(*(::gp_Hypr2d*)Hypr->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, true);
}

Macad::Occt::GCE2d_MakeArcOfHyperbola::GCE2d_MakeArcOfHyperbola(Macad::Occt::GCE2d_MakeArcOfHyperbola^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfHyperbola(*(::GCE2d_MakeArcOfHyperbola*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_TrimmedCurve^ Macad::Occt::GCE2d_MakeArcOfHyperbola::Value()
{
	Handle(::Geom2d_TrimmedCurve) _result;
	_result = ((::GCE2d_MakeArcOfHyperbola*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeArcOfParabola
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeArcOfParabola::GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, double Alpha1, double Alpha2, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfParabola(*(::gp_Parab2d*)Parab->NativeInstance, Alpha1, Alpha2, Sense);
}

Macad::Occt::GCE2d_MakeArcOfParabola::GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, double Alpha1, double Alpha2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfParabola(*(::gp_Parab2d*)Parab->NativeInstance, Alpha1, Alpha2, true);
}

Macad::Occt::GCE2d_MakeArcOfParabola::GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, Macad::Occt::Pnt2d P, double Alpha, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeArcOfParabola(*(::gp_Parab2d*)Parab->NativeInstance, *(gp_Pnt2d*)pp_P, Alpha, Sense);
}

Macad::Occt::GCE2d_MakeArcOfParabola::GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, Macad::Occt::Pnt2d P, double Alpha)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeArcOfParabola(*(::gp_Parab2d*)Parab->NativeInstance, *(gp_Pnt2d*)pp_P, Alpha, true);
}

Macad::Occt::GCE2d_MakeArcOfParabola::GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfParabola(*(::gp_Parab2d*)Parab->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, Sense);
}

Macad::Occt::GCE2d_MakeArcOfParabola::GCE2d_MakeArcOfParabola(Macad::Occt::gp_Parab2d^ Parab, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeArcOfParabola(*(::gp_Parab2d*)Parab->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, true);
}

Macad::Occt::GCE2d_MakeArcOfParabola::GCE2d_MakeArcOfParabola(Macad::Occt::GCE2d_MakeArcOfParabola^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeArcOfParabola(*(::GCE2d_MakeArcOfParabola*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_TrimmedCurve^ Macad::Occt::GCE2d_MakeArcOfParabola::Value()
{
	Handle(::Geom2d_TrimmedCurve) _result;
	_result = ((::GCE2d_MakeArcOfParabola*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeCircle
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::gp_Circ2d^ C)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeCircle(*(::gp_Circ2d*)C->NativeInstance);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::Ax2d A, double Radius, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	_NativeInstance = new ::GCE2d_MakeCircle(*(gp_Ax2d*)pp_A, Radius, Sense);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::Ax2d A, double Radius)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	_NativeInstance = new ::GCE2d_MakeCircle(*(gp_Ax2d*)pp_A, Radius, true);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::Ax22d A, double Radius)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	_NativeInstance = new ::GCE2d_MakeCircle(*(gp_Ax22d*)pp_A, Radius);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::gp_Circ2d^ Circ, double Dist)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeCircle(*(::gp_Circ2d*)Circ->NativeInstance, Dist);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d Point)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	_NativeInstance = new ::GCE2d_MakeCircle(*(::gp_Circ2d*)Circ->NativeInstance, *(gp_Pnt2d*)pp_Point);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, Macad::Occt::Pnt2d P3)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt2d> pp_P3 = &P3;
	_NativeInstance = new ::GCE2d_MakeCircle(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, *(gp_Pnt2d*)pp_P3);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::Pnt2d P, double Radius, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeCircle(*(gp_Pnt2d*)pp_P, Radius, Sense);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::Pnt2d P, double Radius)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	_NativeInstance = new ::GCE2d_MakeCircle(*(gp_Pnt2d*)pp_P, Radius, true);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	_NativeInstance = new ::GCE2d_MakeCircle(*(gp_Pnt2d*)pp_Center, *(gp_Pnt2d*)pp_Point, Sense);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	_NativeInstance = new ::GCE2d_MakeCircle(*(gp_Pnt2d*)pp_Center, *(gp_Pnt2d*)pp_Point, true);
}

Macad::Occt::GCE2d_MakeCircle::GCE2d_MakeCircle(Macad::Occt::GCE2d_MakeCircle^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeCircle(*(::GCE2d_MakeCircle*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Circle^ Macad::Occt::GCE2d_MakeCircle::Value()
{
	Handle(::Geom2d_Circle) _result;
	_result = ((::GCE2d_MakeCircle*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Circle::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeEllipse
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeEllipse::GCE2d_MakeEllipse(Macad::Occt::gp_Elips2d^ E)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeEllipse(*(::gp_Elips2d*)E->NativeInstance);
}

Macad::Occt::GCE2d_MakeEllipse::GCE2d_MakeEllipse(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	_NativeInstance = new ::GCE2d_MakeEllipse(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

Macad::Occt::GCE2d_MakeEllipse::GCE2d_MakeEllipse(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	_NativeInstance = new ::GCE2d_MakeEllipse(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

Macad::Occt::GCE2d_MakeEllipse::GCE2d_MakeEllipse(Macad::Occt::Ax22d Axis, double MajorRadius, double MinorRadius)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Axis = &Axis;
	_NativeInstance = new ::GCE2d_MakeEllipse(*(gp_Ax22d*)pp_Axis, MajorRadius, MinorRadius);
}

Macad::Occt::GCE2d_MakeEllipse::GCE2d_MakeEllipse(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_S1 = &S1;
	pin_ptr<Macad::Occt::Pnt2d> pp_S2 = &S2;
	pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
	_NativeInstance = new ::GCE2d_MakeEllipse(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_S2, *(gp_Pnt2d*)pp_Center);
}

Macad::Occt::GCE2d_MakeEllipse::GCE2d_MakeEllipse(Macad::Occt::GCE2d_MakeEllipse^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeEllipse(*(::GCE2d_MakeEllipse*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Ellipse^ Macad::Occt::GCE2d_MakeEllipse::Value()
{
	Handle(::Geom2d_Ellipse) _result;
	_result = ((::GCE2d_MakeEllipse*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Ellipse::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeHyperbola
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(Macad::Occt::gp_Hypr2d^ H)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeHyperbola(*(::gp_Hypr2d*)H->NativeInstance);
}

Macad::Occt::GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	_NativeInstance = new ::GCE2d_MakeHyperbola(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

Macad::Occt::GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(Macad::Occt::Ax22d Axis, double MajorRadius, double MinorRadius)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Axis = &Axis;
	_NativeInstance = new ::GCE2d_MakeHyperbola(*(gp_Ax22d*)pp_Axis, MajorRadius, MinorRadius);
}

Macad::Occt::GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_S1 = &S1;
	pin_ptr<Macad::Occt::Pnt2d> pp_S2 = &S2;
	pin_ptr<Macad::Occt::Pnt2d> pp_Center = &Center;
	_NativeInstance = new ::GCE2d_MakeHyperbola(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_S2, *(gp_Pnt2d*)pp_Center);
}

Macad::Occt::GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(Macad::Occt::GCE2d_MakeHyperbola^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeHyperbola(*(::GCE2d_MakeHyperbola*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Hyperbola^ Macad::Occt::GCE2d_MakeHyperbola::Value()
{
	Handle(::Geom2d_Hyperbola) _result;
	_result = ((::GCE2d_MakeHyperbola*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Hyperbola::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeLine
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeLine::GCE2d_MakeLine(Macad::Occt::Ax2d A)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	_NativeInstance = new ::GCE2d_MakeLine(*(gp_Ax2d*)pp_A);
}

Macad::Occt::GCE2d_MakeLine::GCE2d_MakeLine(Macad::Occt::gp_Lin2d^ L)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeLine(*(::gp_Lin2d*)L->NativeInstance);
}

Macad::Occt::GCE2d_MakeLine::GCE2d_MakeLine(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	_NativeInstance = new ::GCE2d_MakeLine(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_V);
}

Macad::Occt::GCE2d_MakeLine::GCE2d_MakeLine(Macad::Occt::gp_Lin2d^ Lin, Macad::Occt::Pnt2d Point)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	_NativeInstance = new ::GCE2d_MakeLine(*(::gp_Lin2d*)Lin->NativeInstance, *(gp_Pnt2d*)pp_Point);
}

Macad::Occt::GCE2d_MakeLine::GCE2d_MakeLine(Macad::Occt::gp_Lin2d^ Lin, double Dist)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeLine(*(::gp_Lin2d*)Lin->NativeInstance, Dist);
}

Macad::Occt::GCE2d_MakeLine::GCE2d_MakeLine(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeLine(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::GCE2d_MakeLine::GCE2d_MakeLine(Macad::Occt::GCE2d_MakeLine^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeLine(*(::GCE2d_MakeLine*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Line^ Macad::Occt::GCE2d_MakeLine::Value()
{
	Handle(::Geom2d_Line) _result;
	_result = ((::GCE2d_MakeLine*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Line::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeMirror
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeMirror::GCE2d_MakeMirror(Macad::Occt::Pnt2d Point)
	: BaseClass<::GCE2d_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	_NativeInstance = new ::GCE2d_MakeMirror(*(gp_Pnt2d*)pp_Point);
}

Macad::Occt::GCE2d_MakeMirror::GCE2d_MakeMirror(Macad::Occt::Ax2d Axis)
	: BaseClass<::GCE2d_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_Axis = &Axis;
	_NativeInstance = new ::GCE2d_MakeMirror(*(gp_Ax2d*)pp_Axis);
}

Macad::Occt::GCE2d_MakeMirror::GCE2d_MakeMirror(Macad::Occt::gp_Lin2d^ Line)
	: BaseClass<::GCE2d_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeMirror(*(::gp_Lin2d*)Line->NativeInstance);
}

Macad::Occt::GCE2d_MakeMirror::GCE2d_MakeMirror(Macad::Occt::Pnt2d Point, Macad::Occt::Dir2d Direc)
	: BaseClass<::GCE2d_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	pin_ptr<Macad::Occt::Dir2d> pp_Direc = &Direc;
	_NativeInstance = new ::GCE2d_MakeMirror(*(gp_Pnt2d*)pp_Point, *(gp_Dir2d*)pp_Direc);
}

Macad::Occt::GCE2d_MakeMirror::GCE2d_MakeMirror(Macad::Occt::GCE2d_MakeMirror^ parameter1)
	: BaseClass<::GCE2d_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeMirror(*(::GCE2d_MakeMirror*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Transformation^ Macad::Occt::GCE2d_MakeMirror::Value()
{
	Handle(::Geom2d_Transformation) _result;
	_result = ((::GCE2d_MakeMirror*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Transformation::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeParabola
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeParabola::GCE2d_MakeParabola(Macad::Occt::gp_Parab2d^ Prb)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeParabola(*(::gp_Parab2d*)Prb->NativeInstance);
}

Macad::Occt::GCE2d_MakeParabola::GCE2d_MakeParabola(Macad::Occt::Ax22d Axis, double Focal)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Axis = &Axis;
	_NativeInstance = new ::GCE2d_MakeParabola(*(gp_Ax22d*)pp_Axis, Focal);
}

Macad::Occt::GCE2d_MakeParabola::GCE2d_MakeParabola(Macad::Occt::Ax2d MirrorAxis, double Focal, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MirrorAxis = &MirrorAxis;
	_NativeInstance = new ::GCE2d_MakeParabola(*(gp_Ax2d*)pp_MirrorAxis, Focal, Sense);
}

Macad::Occt::GCE2d_MakeParabola::GCE2d_MakeParabola(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F, bool Sense)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_D = &D;
	pin_ptr<Macad::Occt::Pnt2d> pp_F = &F;
	_NativeInstance = new ::GCE2d_MakeParabola(*(gp_Ax2d*)pp_D, *(gp_Pnt2d*)pp_F, Sense);
}

Macad::Occt::GCE2d_MakeParabola::GCE2d_MakeParabola(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_D = &D;
	pin_ptr<Macad::Occt::Pnt2d> pp_F = &F;
	_NativeInstance = new ::GCE2d_MakeParabola(*(gp_Ax2d*)pp_D, *(gp_Pnt2d*)pp_F, true);
}

Macad::Occt::GCE2d_MakeParabola::GCE2d_MakeParabola(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d O)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_S1 = &S1;
	pin_ptr<Macad::Occt::Pnt2d> pp_O = &O;
	_NativeInstance = new ::GCE2d_MakeParabola(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_O);
}

Macad::Occt::GCE2d_MakeParabola::GCE2d_MakeParabola(Macad::Occt::GCE2d_MakeParabola^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeParabola(*(::GCE2d_MakeParabola*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Parabola^ Macad::Occt::GCE2d_MakeParabola::Value()
{
	Handle(::Geom2d_Parabola) _result;
	_result = ((::GCE2d_MakeParabola*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Parabola::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeRotation
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeRotation::GCE2d_MakeRotation(Macad::Occt::Pnt2d Point, double Angle)
	: BaseClass<::GCE2d_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	_NativeInstance = new ::GCE2d_MakeRotation(*(gp_Pnt2d*)pp_Point, Angle);
}

Macad::Occt::GCE2d_MakeRotation::GCE2d_MakeRotation(Macad::Occt::GCE2d_MakeRotation^ parameter1)
	: BaseClass<::GCE2d_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeRotation(*(::GCE2d_MakeRotation*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Transformation^ Macad::Occt::GCE2d_MakeRotation::Value()
{
	Handle(::Geom2d_Transformation) _result;
	_result = ((::GCE2d_MakeRotation*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Transformation::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeScale
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeScale::GCE2d_MakeScale(Macad::Occt::Pnt2d Point, double Scale)
	: BaseClass<::GCE2d_MakeScale>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	_NativeInstance = new ::GCE2d_MakeScale(*(gp_Pnt2d*)pp_Point, Scale);
}

Macad::Occt::GCE2d_MakeScale::GCE2d_MakeScale(Macad::Occt::GCE2d_MakeScale^ parameter1)
	: BaseClass<::GCE2d_MakeScale>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeScale(*(::GCE2d_MakeScale*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Transformation^ Macad::Occt::GCE2d_MakeScale::Value()
{
	Handle(::Geom2d_Transformation) _result;
	_result = ((::GCE2d_MakeScale*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Transformation::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeSegment
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeSegment::GCE2d_MakeSegment(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeSegment(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::GCE2d_MakeSegment::GCE2d_MakeSegment(Macad::Occt::Pnt2d P1, Macad::Occt::Dir2d V, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeSegment(*(gp_Pnt2d*)pp_P1, *(gp_Dir2d*)pp_V, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::GCE2d_MakeSegment::GCE2d_MakeSegment(Macad::Occt::gp_Lin2d^ Line, double U1, double U2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeSegment(*(::gp_Lin2d*)Line->NativeInstance, U1, U2);
}

Macad::Occt::GCE2d_MakeSegment::GCE2d_MakeSegment(Macad::Occt::gp_Lin2d^ Line, Macad::Occt::Pnt2d Point, double Ulast)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
	_NativeInstance = new ::GCE2d_MakeSegment(*(::gp_Lin2d*)Line->NativeInstance, *(gp_Pnt2d*)pp_Point, Ulast);
}

Macad::Occt::GCE2d_MakeSegment::GCE2d_MakeSegment(Macad::Occt::gp_Lin2d^ Line, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::GCE2d_MakeSegment(*(::gp_Lin2d*)Line->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::GCE2d_MakeSegment::GCE2d_MakeSegment(Macad::Occt::GCE2d_MakeSegment^ parameter1)
	: Macad::Occt::GCE2d_Root(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeSegment(*(::GCE2d_MakeSegment*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_TrimmedCurve^ Macad::Occt::GCE2d_MakeSegment::Value()
{
	Handle(::Geom2d_TrimmedCurve) _result;
	_result = ((::GCE2d_MakeSegment*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_TrimmedCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GCE2d_MakeTranslation
//---------------------------------------------------------------------

Macad::Occt::GCE2d_MakeTranslation::GCE2d_MakeTranslation(Macad::Occt::Vec2d Vect)
	: BaseClass<::GCE2d_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec2d> pp_Vect = &Vect;
	_NativeInstance = new ::GCE2d_MakeTranslation(*(gp_Vec2d*)pp_Vect);
}

Macad::Occt::GCE2d_MakeTranslation::GCE2d_MakeTranslation(Macad::Occt::Pnt2d Point1, Macad::Occt::Pnt2d Point2)
	: BaseClass<::GCE2d_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Point1 = &Point1;
	pin_ptr<Macad::Occt::Pnt2d> pp_Point2 = &Point2;
	_NativeInstance = new ::GCE2d_MakeTranslation(*(gp_Pnt2d*)pp_Point1, *(gp_Pnt2d*)pp_Point2);
}

Macad::Occt::GCE2d_MakeTranslation::GCE2d_MakeTranslation(Macad::Occt::GCE2d_MakeTranslation^ parameter1)
	: BaseClass<::GCE2d_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GCE2d_MakeTranslation(*(::GCE2d_MakeTranslation*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Transformation^ Macad::Occt::GCE2d_MakeTranslation::Value()
{
	Handle(::Geom2d_Transformation) _result;
	_result = ((::GCE2d_MakeTranslation*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Transformation::CreateDowncasted( _result.get());
}



