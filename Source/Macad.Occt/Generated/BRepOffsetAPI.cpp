// Generated wrapper code for package BRepOffsetAPI

#include "OcctPCH.h"
#include "BRepOffsetAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "BRepOffsetAPI.h"
#include "Standard.h"
#include "TopoDS.h"
#include "gp.h"
#include "TopTools.h"
#include "Message.h"
#include "BRepBuilderAPI.h"
#include "Geom.h"
#include "GeomAbs.h"
#include "BRepOffset.h"


//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfShape
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::BRepOffsetAPI_SequenceOfSequenceOfShape()
	: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfShape();
}

Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::BRepOffsetAPI_SequenceOfSequenceOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfShape(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::BRepOffsetAPI_SequenceOfSequenceOfShape(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theOther)
	: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfShape(*(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theOther->NativeInstance);
}

int Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Size()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Size();
}

int Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Length()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Length();
}

int Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Lower()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Lower();
}

int Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Upper()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Upper();
}

bool Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::IsEmpty()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Reverse()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Reverse();
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Exchange(int I, int J)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Clear()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Assign(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theOther)
{
	::BRepOffsetAPI_SequenceOfSequenceOfShape* _result = new ::BRepOffsetAPI_SequenceOfSequenceOfShape();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Assign(*(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape(_result);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Remove(int theIndex)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Remove(int theFromIndex, int theToIndex)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Append(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Append(*(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theSeq->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Prepend(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Prepend(*(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theSeq->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::InsertBefore(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->InsertBefore(theIndex, *(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theSeq->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::InsertAfter(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->InsertAfter(theIndex, *(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theSeq->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Split(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Split(theIndex, *(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theSeq->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfReal
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::BRepOffsetAPI_SequenceOfSequenceOfReal()
	: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfReal();
}

Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::BRepOffsetAPI_SequenceOfSequenceOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfReal(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::BRepOffsetAPI_SequenceOfSequenceOfReal(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theOther)
	: BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfReal(*(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theOther->NativeInstance);
}

int Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Size()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Size();
}

int Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Length()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Length();
}

int Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Lower()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Lower();
}

int Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Upper()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::IsEmpty()
{
	return ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Reverse()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Reverse();
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Exchange(int I, int J)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Clear()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Assign(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theOther)
{
	::BRepOffsetAPI_SequenceOfSequenceOfReal* _result = new ::BRepOffsetAPI_SequenceOfSequenceOfReal();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Assign(*(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal(_result);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Remove(int theIndex)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Remove(int theFromIndex, int theToIndex)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Append(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Append(*(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theSeq->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Prepend(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Prepend(*(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theSeq->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::InsertBefore(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->InsertBefore(theIndex, *(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theSeq->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::InsertAfter(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->InsertAfter(theIndex, *(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theSeq->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Split(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Split(theIndex, *(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theSeq->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_DraftAngle
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_DraftAngle::BRepOffsetAPI_DraftAngle()
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_DraftAngle();
}

Macad::Occt::BRepOffsetAPI_DraftAngle::BRepOffsetAPI_DraftAngle(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_DraftAngle(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BRepOffsetAPI_DraftAngle::BRepOffsetAPI_DraftAngle(Macad::Occt::BRepOffsetAPI_DraftAngle^ parameter1)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_DraftAngle(*(::BRepOffsetAPI_DraftAngle*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_DraftAngle::Clear()
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Clear();
}

void Macad::Occt::BRepOffsetAPI_DraftAngle::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_DraftAngle::Add(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Dir Direction, double Angle, Macad::Occt::Pln NeutralPlane, bool Flag)
{
	pin_ptr<Macad::Occt::Dir> pp_Direction = &Direction;
	pin_ptr<Macad::Occt::Pln> pp_NeutralPlane = &NeutralPlane;
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Add(*(::TopoDS_Face*)F->NativeInstance, *(gp_Dir*)pp_Direction, Angle, *(gp_Pln*)pp_NeutralPlane, Flag);
}

void Macad::Occt::BRepOffsetAPI_DraftAngle::Add(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Dir Direction, double Angle, Macad::Occt::Pln NeutralPlane)
{
	pin_ptr<Macad::Occt::Dir> pp_Direction = &Direction;
	pin_ptr<Macad::Occt::Pln> pp_NeutralPlane = &NeutralPlane;
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Add(*(::TopoDS_Face*)F->NativeInstance, *(gp_Dir*)pp_Direction, Angle, *(gp_Pln*)pp_NeutralPlane, true);
}

bool Macad::Occt::BRepOffsetAPI_DraftAngle::AddDone()
{
	return ((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->AddDone();
}

void Macad::Occt::BRepOffsetAPI_DraftAngle::Remove(Macad::Occt::TopoDS_Face^ F)
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Remove(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_DraftAngle::ProblematicShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->ProblematicShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_DraftAngle::ConnectedFaces(Macad::Occt::TopoDS_Face^ F)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->ConnectedFaces(*(::TopoDS_Face*)F->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_DraftAngle::ModifiedFaces()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->ModifiedFaces();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepOffsetAPI_DraftAngle::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_DraftAngle::Build()
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Build(::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_DraftAngle::CorrectWires()
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->CorrectWires();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_DraftAngle::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_DraftAngle::Modified(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_DraftAngle::ModifiedShape(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_FindContigousEdges
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_FindContigousEdges::BRepOffsetAPI_FindContigousEdges(double tolerance, bool option)
	: BaseClass<::BRepOffsetAPI_FindContigousEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_FindContigousEdges(tolerance, option);
}

Macad::Occt::BRepOffsetAPI_FindContigousEdges::BRepOffsetAPI_FindContigousEdges(double tolerance)
	: BaseClass<::BRepOffsetAPI_FindContigousEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_FindContigousEdges(tolerance, true);
}

Macad::Occt::BRepOffsetAPI_FindContigousEdges::BRepOffsetAPI_FindContigousEdges(Macad::Occt::BRepOffsetAPI_FindContigousEdges^ parameter1)
	: BaseClass<::BRepOffsetAPI_FindContigousEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_FindContigousEdges(*(::BRepOffsetAPI_FindContigousEdges*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_FindContigousEdges::Init(double tolerance, bool option)
{
	((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Init(tolerance, option);
}

void Macad::Occt::BRepOffsetAPI_FindContigousEdges::Add(Macad::Occt::TopoDS_Shape^ shape)
{
	((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Add(*(::TopoDS_Shape*)shape->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_FindContigousEdges::Perform()
{
	((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Perform();
}

int Macad::Occt::BRepOffsetAPI_FindContigousEdges::NbEdges()
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

int Macad::Occt::BRepOffsetAPI_FindContigousEdges::NbContigousEdges()
{
	return ((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->NbContigousEdges();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepOffsetAPI_FindContigousEdges::ContigousEdge(int index)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->ContigousEdge(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_FindContigousEdges::ContigousEdgeCouple(int index)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->ContigousEdgeCouple(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepOffsetAPI_FindContigousEdges::SectionToBoundary(Macad::Occt::TopoDS_Edge^ section)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->SectionToBoundary(*(::TopoDS_Edge*)section->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

int Macad::Occt::BRepOffsetAPI_FindContigousEdges::NbDegeneratedShapes()
{
	return ((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->NbDegeneratedShapes();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_FindContigousEdges::DegeneratedShape(int index)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->DegeneratedShape(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepOffsetAPI_FindContigousEdges::IsDegenerated(Macad::Occt::TopoDS_Shape^ shape)
{
	return ((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->IsDegenerated(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool Macad::Occt::BRepOffsetAPI_FindContigousEdges::IsModified(Macad::Occt::TopoDS_Shape^ shape)
{
	return ((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->IsModified(*(::TopoDS_Shape*)shape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_FindContigousEdges::Modified(Macad::Occt::TopoDS_Shape^ shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Modified(*(::TopoDS_Shape*)shape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepOffsetAPI_FindContigousEdges::Dump()
{
	((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Dump();
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeDraft
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MakeDraft::BRepOffsetAPI_MakeDraft(Macad::Occt::TopoDS_Shape^ Shape, Macad::Occt::Dir Dir, double Angle)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir> pp_Dir = &Dir;
	_NativeInstance = new ::BRepOffsetAPI_MakeDraft(*(::TopoDS_Shape*)Shape->NativeInstance, *(gp_Dir*)pp_Dir, Angle);
}

Macad::Occt::BRepOffsetAPI_MakeDraft::BRepOffsetAPI_MakeDraft(Macad::Occt::BRepOffsetAPI_MakeDraft^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeDraft(*(::BRepOffsetAPI_MakeDraft*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style, double AngleMin, double AngleMax)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetOptions((::BRepBuilderAPI_TransitionMode)Style, AngleMin, AngleMax);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style, double AngleMin)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetOptions((::BRepBuilderAPI_TransitionMode)Style, AngleMin, 3.);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetOptions((::BRepBuilderAPI_TransitionMode)Style, 0.01, 3.);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::SetOptions()
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetOptions(BRepBuilderAPI_RightCorner, 0.01, 3.);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::SetDraft(bool IsInternal)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetDraft(IsInternal);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::SetDraft()
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetDraft(false);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::Perform(double LengthMax)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(LengthMax);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::Perform(Macad::Occt::Geom_Surface^ Surface, bool KeepInsideSurface)
{
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(h_Surface, KeepInsideSurface);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::Perform(Macad::Occt::Geom_Surface^ Surface)
{
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(h_Surface, true);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::Perform(Macad::Occt::TopoDS_Shape^ StopShape, bool KeepOutSide)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(*(::TopoDS_Shape*)StopShape->NativeInstance, KeepOutSide);
}

void Macad::Occt::BRepOffsetAPI_MakeDraft::Perform(Macad::Occt::TopoDS_Shape^ StopShape)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(*(::TopoDS_Shape*)StopShape->NativeInstance, true);
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepOffsetAPI_MakeDraft::Shell()
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Shell();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakeDraft::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeEvolved
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved();
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol, bool theIsVolume, bool theRunInParallel)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, theIsProfOnSpine, theTol, theIsVolume, theRunInParallel);
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol, bool theIsVolume)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, theIsProfOnSpine, theTol, theIsVolume, false);
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, theIsProfOnSpine, theTol, false, false);
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, theIsProfOnSpine, 9.9999999999999995E-8, false, false);
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, false, 9.9999999999999995E-8, false, false);
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, false, false, 9.9999999999999995E-8, false, false);
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, true, false, false, 9.9999999999999995E-8, false, false);
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, GeomAbs_Arc, true, false, false, 9.9999999999999995E-8, false, false);
}

Macad::Occt::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(Macad::Occt::BRepOffsetAPI_MakeEvolved^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::BRepOffsetAPI_MakeEvolved*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeEvolved::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeEvolved::Build()
{
	((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakeEvolved::GeneratedShapes(Macad::Occt::TopoDS_Shape^ SpineShape, Macad::Occt::TopoDS_Shape^ ProfShape)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->GeneratedShapes(*(::TopoDS_Shape*)SpineShape->NativeInstance, *(::TopoDS_Shape*)ProfShape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_MakeEvolved::Top()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->Top();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_MakeEvolved::Bottom()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->Bottom();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeFilling
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg, int MaxSegments)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, MaxDeg, MaxSegments);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, MaxDeg, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, 8, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, 2, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, 15, 2, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(Macad::Occt::BRepOffsetAPI_MakeFilling^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(*(::BRepOffsetAPI_MakeFilling*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetConstrParam(double Tol2d, double Tol3d, double TolAng, double TolCurv)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, TolAng, TolCurv);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetConstrParam(double Tol2d, double Tol3d, double TolAng)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, TolAng, 0.10000000000000001);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetConstrParam(double Tol2d, double Tol3d)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, 0.01, 0.10000000000000001);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetConstrParam(double Tol2d)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(Tol2d, 1.0E-4, 0.01, 0.10000000000000001);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetConstrParam()
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetResolParam(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, NbIter, Anisotropie);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetResolParam(int Degree, int NbPtsOnCur, int NbIter)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, NbIter, false);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetResolParam(int Degree, int NbPtsOnCur)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, 2, false);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetResolParam(int Degree)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(Degree, 15, 2, false);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetResolParam()
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(3, 15, 2, false);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetApproxParam(int MaxDeg, int MaxSegments)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetApproxParam(MaxDeg, MaxSegments);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetApproxParam(int MaxDeg)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetApproxParam(MaxDeg, 9);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::SetApproxParam()
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetApproxParam(8, 9);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::LoadInitSurface(Macad::Occt::TopoDS_Face^ Surf)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->LoadInitSurface(*(::TopoDS_Face*)Surf->NativeInstance);
}

int Macad::Occt::BRepOffsetAPI_MakeFilling::Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::GeomAbs_Shape Order, bool IsBound)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Edge*)Constr->NativeInstance, (::GeomAbs_Shape)Order, IsBound);
}

int Macad::Occt::BRepOffsetAPI_MakeFilling::Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::GeomAbs_Shape Order)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Edge*)Constr->NativeInstance, (::GeomAbs_Shape)Order, true);
}

int Macad::Occt::BRepOffsetAPI_MakeFilling::Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order, bool IsBound)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Edge*)Constr->NativeInstance, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order, IsBound);
}

int Macad::Occt::BRepOffsetAPI_MakeFilling::Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Edge*)Constr->NativeInstance, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order, true);
}

int Macad::Occt::BRepOffsetAPI_MakeFilling::Add(Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order);
}

int Macad::Occt::BRepOffsetAPI_MakeFilling::Add(Macad::Occt::Pnt Point)
{
	pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(gp_Pnt*)pp_Point);
}

int Macad::Occt::BRepOffsetAPI_MakeFilling::Add(double U, double V, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(U, V, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeFilling::Build()
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool Macad::Occt::BRepOffsetAPI_MakeFilling::IsDone()
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->IsDone();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakeFilling::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

double Macad::Occt::BRepOffsetAPI_MakeFilling::G0Error()
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G0Error();
}

double Macad::Occt::BRepOffsetAPI_MakeFilling::G1Error()
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G1Error();
}

double Macad::Occt::BRepOffsetAPI_MakeFilling::G2Error()
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G2Error();
}

double Macad::Occt::BRepOffsetAPI_MakeFilling::G0Error(int Index)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G0Error(Index);
}

double Macad::Occt::BRepOffsetAPI_MakeFilling::G1Error(int Index)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G1Error(Index);
}

double Macad::Occt::BRepOffsetAPI_MakeFilling::G2Error(int Index)
{
	return ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G2Error(Index);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeOffset
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset();
}

Macad::Occt::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, IsOpenResult);
}

Macad::Occt::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, false);
}

Macad::Occt::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Face*)Spine->NativeInstance, GeomAbs_Arc, false);
}

Macad::Occt::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Wire*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, IsOpenResult);
}

Macad::Occt::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::GeomAbs_JoinType Join)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Wire*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, false);
}

Macad::Occt::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Wire*)Spine->NativeInstance, GeomAbs_Arc, false);
}

Macad::Occt::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(Macad::Occt::BRepOffsetAPI_MakeOffset^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::BRepOffsetAPI_MakeOffset*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, IsOpenResult);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, false);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Init(Macad::Occt::TopoDS_Face^ Spine)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, GeomAbs_Arc, false);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Init(Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init((::GeomAbs_JoinType)Join, IsOpenResult);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Init(Macad::Occt::GeomAbs_JoinType Join)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init((::GeomAbs_JoinType)Join, false);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Init()
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init(GeomAbs_Arc, false);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::AddWire(Macad::Occt::TopoDS_Wire^ Spine)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->AddWire(*(::TopoDS_Wire*)Spine->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Perform(double Offset, double Alt)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Perform(Offset, Alt);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Perform(double Offset)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Perform(Offset, 0.);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeOffset::Build()
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakeOffset::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeOffsetShape
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MakeOffsetShape::BRepOffsetAPI_MakeOffsetShape()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffsetShape();
}

Macad::Occt::BRepOffsetAPI_MakeOffsetShape::BRepOffsetAPI_MakeOffsetShape(Macad::Occt::BRepOffsetAPI_MakeOffsetShape^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffsetShape(*(::BRepOffsetAPI_MakeOffsetShape*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::PerformBySimple(Macad::Occt::TopoDS_Shape^ theS, double theOffsetValue)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformBySimple(*(::TopoDS_Shape*)theS->NativeInstance, theOffsetValue);
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges, Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, RemoveIntEdges, *(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, RemoveIntEdges, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

Macad::Occt::BRepOffset_MakeOffset^ Macad::Occt::BRepOffsetAPI_MakeOffsetShape::MakeOffset()
{
	::BRepOffset_MakeOffset* _result = new ::BRepOffset_MakeOffset();
	*_result =  (::BRepOffset_MakeOffset)((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->MakeOffset();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_MakeOffset(_result);
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeOffsetShape::Build()
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakeOffsetShape::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakeOffsetShape::Modified(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepOffsetAPI_MakeOffsetShape::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::GeomAbs_JoinType Macad::Occt::BRepOffsetAPI_MakeOffsetShape::GetJoinType()
{
	return (Macad::Occt::GeomAbs_JoinType)((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->GetJoinType();
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakePipe
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MakePipe::BRepOffsetAPI_MakePipe(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile)
	: Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakePipe(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Shape*)Profile->NativeInstance);
}

Macad::Occt::BRepOffsetAPI_MakePipe::BRepOffsetAPI_MakePipe(Macad::Occt::BRepOffsetAPI_MakePipe^ parameter1)
	: Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakePipe(*(::BRepOffsetAPI_MakePipe*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakePipe::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakePipe*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakePipe::Build()
{
	((::BRepOffsetAPI_MakePipe*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_MakePipe::FirstShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipe*)_NativeInstance)->FirstShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_MakePipe::LastShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipe*)_NativeInstance)->LastShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakePipe::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakePipe*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_MakePipe::Generated(Macad::Occt::TopoDS_Shape^ SSpine, Macad::Occt::TopoDS_Shape^ SProfile)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipe*)_NativeInstance)->Generated(*(::TopoDS_Shape*)SSpine->NativeInstance, *(::TopoDS_Shape*)SProfile->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::BRepOffsetAPI_MakePipe::ErrorOnSurface()
{
	return ((::BRepOffsetAPI_MakePipe*)_NativeInstance)->ErrorOnSurface();
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakePipeShell
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MakePipeShell::BRepOffsetAPI_MakePipeShell(Macad::Occt::TopoDS_Wire^ Spine)
	: Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakePipeShell(*(::TopoDS_Wire*)Spine->NativeInstance);
}

Macad::Occt::BRepOffsetAPI_MakePipeShell::BRepOffsetAPI_MakePipeShell(Macad::Occt::BRepOffsetAPI_MakePipeShell^ parameter1)
	: Macad::Occt::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakePipeShell(*(::BRepOffsetAPI_MakePipeShell*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetMode(bool IsFrenet)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(IsFrenet);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetMode()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(false);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetDiscreteMode()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetDiscreteMode();
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetMode(Macad::Occt::Ax2 Axe)
{
	pin_ptr<Macad::Occt::Ax2> pp_Axe = &Axe;
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(*(gp_Ax2*)pp_Axe);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetMode(Macad::Occt::Dir BiNormal)
{
	pin_ptr<Macad::Occt::Dir> pp_BiNormal = &BiNormal;
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(*(gp_Dir*)pp_BiNormal);
}

bool Macad::Occt::BRepOffsetAPI_MakePipeShell::SetMode(Macad::Occt::TopoDS_Shape^ SpineSupport)
{
	return ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(*(::TopoDS_Shape*)SpineSupport->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetMode(Macad::Occt::TopoDS_Wire^ AuxiliarySpine, bool CurvilinearEquivalence)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(*(::TopoDS_Wire*)AuxiliarySpine->NativeInstance, CurvilinearEquivalence, BRepFill_NoContact);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact, bool WithCorrection)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, WithContact, WithCorrection);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, WithContact, false);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, false, false);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact, bool WithCorrection)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, WithContact, WithCorrection);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, WithContact, false);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, false, false);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Delete(Macad::Occt::TopoDS_Shape^ Profile)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Delete(*(::TopoDS_Shape*)Profile->NativeInstance);
}

bool Macad::Occt::BRepOffsetAPI_MakePipeShell::IsReady()
{
	return ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->IsReady();
}

Macad::Occt::BRepBuilderAPI_PipeError Macad::Occt::BRepOffsetAPI_MakePipeShell::GetStatus()
{
	return (Macad::Occt::BRepBuilderAPI_PipeError)((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->GetStatus();
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetTolerance(double Tol3d, double BoundTol, double TolAngular)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, TolAngular);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetTolerance(double Tol3d, double BoundTol)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, 0.01);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetTolerance(double Tol3d)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTolerance(Tol3d, 1.0E-4, 0.01);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetTolerance()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTolerance(1.0E-4, 1.0E-4, 0.01);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetMaxDegree(int NewMaxDegree)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMaxDegree(NewMaxDegree);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetMaxSegments(int NewMaxSegments)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMaxSegments(NewMaxSegments);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetForceApproxC1(bool ForceApproxC1)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetForceApproxC1(ForceApproxC1);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetTransitionMode(Macad::Occt::BRepBuilderAPI_TransitionMode Mode)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTransitionMode((::BRepBuilderAPI_TransitionMode)Mode);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::SetTransitionMode()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTransitionMode(BRepBuilderAPI_Transformed);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Simulate(int NumberOfSection, Macad::Occt::TopTools_ListOfShape^ Result)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Simulate(NumberOfSection, *(::TopTools_ListOfShape*)Result->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Build()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool Macad::Occt::BRepOffsetAPI_MakePipeShell::MakeSolid()
{
	return ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->MakeSolid();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_MakePipeShell::FirstShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->FirstShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_MakePipeShell::LastShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->LastShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakePipeShell::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

double Macad::Occt::BRepOffsetAPI_MakePipeShell::ErrorOnSurface()
{
	return ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->ErrorOnSurface();
}

void Macad::Occt::BRepOffsetAPI_MakePipeShell::Profiles(Macad::Occt::TopTools_ListOfShape^ theProfiles)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Profiles(*(::TopTools_ListOfShape*)theProfiles->NativeInstance);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepOffsetAPI_MakePipeShell::Spine()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result =  (::TopoDS_Wire)((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Spine();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeThickSolid
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MakeThickSolid::BRepOffsetAPI_MakeThickSolid()
	: Macad::Occt::BRepOffsetAPI_MakeOffsetShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeThickSolid();
}

Macad::Occt::BRepOffsetAPI_MakeThickSolid::BRepOffsetAPI_MakeThickSolid(Macad::Occt::BRepOffsetAPI_MakeThickSolid^ parameter1)
	: Macad::Occt::BRepOffsetAPI_MakeOffsetShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeThickSolid(*(::BRepOffsetAPI_MakeThickSolid*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::MakeThickSolidBySimple(Macad::Occt::TopoDS_Shape^ theS, double theOffsetValue)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidBySimple(*(::TopoDS_Shape*)theS->NativeInstance, theOffsetValue);
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges, Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, RemoveIntEdges, *(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, RemoveIntEdges, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MakeThickSolid::Build()
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_MakeThickSolid::Modified(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MiddlePath
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_MiddlePath::BRepOffsetAPI_MiddlePath(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopoDS_Shape^ StartShape, Macad::Occt::TopoDS_Shape^ EndShape)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MiddlePath(*(::TopoDS_Shape*)aShape->NativeInstance, *(::TopoDS_Shape*)StartShape->NativeInstance, *(::TopoDS_Shape*)EndShape->NativeInstance);
}

Macad::Occt::BRepOffsetAPI_MiddlePath::BRepOffsetAPI_MiddlePath(Macad::Occt::BRepOffsetAPI_MiddlePath^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MiddlePath(*(::BRepOffsetAPI_MiddlePath*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MiddlePath::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MiddlePath*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_MiddlePath::Build()
{
	((::BRepOffsetAPI_MiddlePath*)_NativeInstance)->Build(::Message_ProgressRange());
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_NormalProjection
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_NormalProjection::BRepOffsetAPI_NormalProjection()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_NormalProjection();
}

Macad::Occt::BRepOffsetAPI_NormalProjection::BRepOffsetAPI_NormalProjection(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_NormalProjection(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BRepOffsetAPI_NormalProjection::BRepOffsetAPI_NormalProjection(Macad::Occt::BRepOffsetAPI_NormalProjection^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_NormalProjection(*(::BRepOffsetAPI_NormalProjection*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::Add(Macad::Occt::TopoDS_Shape^ ToProj)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Add(*(::TopoDS_Shape*)ToProj->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::SetParams(double Tol3D, double Tol2D, Macad::Occt::GeomAbs_Shape InternalContinuity, int MaxDegree, int MaxSeg)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->SetParams(Tol3D, Tol2D, (::GeomAbs_Shape)InternalContinuity, MaxDegree, MaxSeg);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::SetMaxDistance(double MaxDist)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->SetMaxDistance(MaxDist);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::SetLimit(bool FaceBoundaries)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->SetLimit(FaceBoundaries);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::SetLimit()
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->SetLimit(true);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::Compute3d(bool With3d)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Compute3d(With3d);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::Compute3d()
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Compute3d(true);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_NormalProjection::Build()
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool Macad::Occt::BRepOffsetAPI_NormalProjection::IsDone()
{
	return ((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->IsDone();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_NormalProjection::Projection()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Projection();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_NormalProjection::Couple(Macad::Occt::TopoDS_Edge^ E)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Couple(*(::TopoDS_Edge*)E->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_NormalProjection::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_NormalProjection::Ancestor(Macad::Occt::TopoDS_Edge^ E)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Ancestor(*(::TopoDS_Edge*)E->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepOffsetAPI_NormalProjection::BuildWire(Macad::Occt::TopTools_ListOfShape^ Liste)
{
	return ((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->BuildWire(*(::TopTools_ListOfShape*)Liste->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_ThruSections
//---------------------------------------------------------------------

Macad::Occt::BRepOffsetAPI_ThruSections::BRepOffsetAPI_ThruSections(bool isSolid, bool ruled, double pres3d)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_ThruSections(isSolid, ruled, pres3d);
}

Macad::Occt::BRepOffsetAPI_ThruSections::BRepOffsetAPI_ThruSections(bool isSolid, bool ruled)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_ThruSections(isSolid, ruled, 9.9999999999999995E-7);
}

Macad::Occt::BRepOffsetAPI_ThruSections::BRepOffsetAPI_ThruSections(bool isSolid)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_ThruSections(isSolid, false, 9.9999999999999995E-7);
}

Macad::Occt::BRepOffsetAPI_ThruSections::BRepOffsetAPI_ThruSections(Macad::Occt::BRepOffsetAPI_ThruSections^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_ThruSections(*(::BRepOffsetAPI_ThruSections*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::Init(bool isSolid, bool ruled, double pres3d)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Init(isSolid, ruled, pres3d);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::Init(bool isSolid, bool ruled)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Init(isSolid, ruled, 9.9999999999999995E-7);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::Init(bool isSolid)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Init(isSolid, false, 9.9999999999999995E-7);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::Init()
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Init(false, false, 9.9999999999999995E-7);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::AddWire(Macad::Occt::TopoDS_Wire^ wire)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->AddWire(*(::TopoDS_Wire*)wire->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::AddVertex(Macad::Occt::TopoDS_Vertex^ aVertex)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->AddVertex(*(::TopoDS_Vertex*)aVertex->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::CheckCompatibility(bool check)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->CheckCompatibility(check);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::CheckCompatibility()
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->CheckCompatibility(true);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::SetSmoothing(bool UseSmoothing)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetSmoothing(UseSmoothing);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::SetContinuity(Macad::Occt::GeomAbs_Shape C)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetContinuity((::GeomAbs_Shape)C);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::SetCriteriumWeight(double W1, double W2, double W3)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetCriteriumWeight(W1, W2, W3);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::SetMaxDegree(int MaxDeg)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetMaxDegree(MaxDeg);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepOffsetAPI_ThruSections::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Continuity();
}

int Macad::Occt::BRepOffsetAPI_ThruSections::MaxDegree()
{
	return ((::BRepOffsetAPI_ThruSections*)_NativeInstance)->MaxDegree();
}

bool Macad::Occt::BRepOffsetAPI_ThruSections::UseSmoothing()
{
	return ((::BRepOffsetAPI_ThruSections*)_NativeInstance)->UseSmoothing();
}

void Macad::Occt::BRepOffsetAPI_ThruSections::CriteriumWeight(double% W1, double% W2, double% W3)
{
	pin_ptr<double> pp_W1 = &W1;
	pin_ptr<double> pp_W2 = &W2;
	pin_ptr<double> pp_W3 = &W3;
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->CriteriumWeight(*(Standard_Real*)pp_W1, *(Standard_Real*)pp_W2, *(Standard_Real*)pp_W3);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffsetAPI_ThruSections::Build()
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_ThruSections::FirstShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->FirstShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_ThruSections::LastShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->LastShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffsetAPI_ThruSections::GeneratedFace(Macad::Occt::TopoDS_Shape^ Edge)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_ThruSections*)_NativeInstance)->GeneratedFace(*(::TopoDS_Shape*)Edge->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_ThruSections::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffsetAPI_ThruSections::Wires()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Wires();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}



