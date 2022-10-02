// Generated wrapper code for package TopoDS

#pragma once

#include "TopoDS.h"
#include "Message.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TopoDS_ListOfShape
//---------------------------------------------------------------------
public ref class TopoDS_ListOfShape sealed : public BaseClass<::TopoDS_ListOfShape>
{

#ifdef Include_TopoDS_ListOfShape_h
public:
	Include_TopoDS_ListOfShape_h
#endif

public:
	TopoDS_ListOfShape(::TopoDS_ListOfShape* nativeInstance)
		: BaseClass<::TopoDS_ListOfShape>( nativeInstance, true )
	{}

	TopoDS_ListOfShape(::TopoDS_ListOfShape& nativeInstance)
		: BaseClass<::TopoDS_ListOfShape>( &nativeInstance, false )
	{}

	property ::TopoDS_ListOfShape* NativeInstance
	{
		::TopoDS_ListOfShape* get()
		{
			return static_cast<::TopoDS_ListOfShape*>(_NativeInstance);
		}
	}

public:
	TopoDS_ListOfShape();
	TopoDS_ListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopoDS_ListOfShape(Macad::Occt::TopoDS_ListOfShape^ theOther);
	int Size();
	Macad::Occt::TopoDS_ListOfShape^ Assign(Macad::Occt::TopoDS_ListOfShape^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TopoDS_Shape^ First();
	Macad::Occt::TopoDS_Shape^ Last();
	Macad::Occt::TopoDS_Shape^ Append(Macad::Occt::TopoDS_Shape^ theItem);
	/* Method skipped due to unknown mapping: void Append(TopoDS_Shape theItem, Iterator theIter, ) */
	void Append(Macad::Occt::TopoDS_ListOfShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Prepend(Macad::Occt::TopoDS_Shape^ theItem);
	void Prepend(Macad::Occt::TopoDS_ListOfShape^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TopoDS_Shape InsertBefore(TopoDS_Shape theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(TopoDS_ListOfShape theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TopoDS_Shape InsertAfter(TopoDS_Shape theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(TopoDS_ListOfShape theOther, Iterator theIter, ) */
	void Reverse();
}; // class TopoDS_ListOfShape

//---------------------------------------------------------------------
//  Class  TopoDS_Shape
//---------------------------------------------------------------------
/// <summary>
/// Describes a shape which
/// - references an underlying shape with the potential
/// to be given a location and an orientation
/// - has a location for the underlying shape, giving its
/// placement in the local coordinate system
/// - has an orientation for the underlying shape, in
/// terms of its geometry (as opposed to orientation in
/// relation to other shapes).
/// Note: A Shape is empty if it references an underlying
/// shape which has an empty list of shapes.
/// </summary>
public ref class TopoDS_Shape : public BaseClass<::TopoDS_Shape>
{

#ifdef Include_TopoDS_Shape_h
public:
	Include_TopoDS_Shape_h
#endif

protected:
	TopoDS_Shape(InitMode init)
		: BaseClass<::TopoDS_Shape>( init )
	{}

public:
	TopoDS_Shape(::TopoDS_Shape* nativeInstance)
		: BaseClass<::TopoDS_Shape>( nativeInstance, true )
	{}

	TopoDS_Shape(::TopoDS_Shape& nativeInstance)
		: BaseClass<::TopoDS_Shape>( &nativeInstance, false )
	{}

	property ::TopoDS_Shape* NativeInstance
	{
		::TopoDS_Shape* get()
		{
			return static_cast<::TopoDS_Shape*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates a NULL Shape referring to nothing.
	/// </summary>
TopoDS_Shape();
	TopoDS_Shape(Macad::Occt::TopoDS_Shape^ parameter1);
		/// <summary>
	/// Returns true if this shape is null. In other words, it
	/// references no underlying shape with the potential to
	/// be given a location and an orientation.
	/// </summary>
bool IsNull();
		/// <summary>
	/// Destroys the reference to the underlying shape
	/// stored in this shape. As a result, this shape becomes null.
	/// </summary>
void Nullify();
		/// <summary>
	/// Returns the shape local coordinate system.
	/// </summary>
Macad::Occt::TopLoc_Location^ Location();
		/// <summary>
	/// Sets the shape local coordinate system.
	/// </summary>
void Location(Macad::Occt::TopLoc_Location^ theLoc, bool theRaiseExc);
		/// <summary>
	/// Sets the shape local coordinate system.
	/// </summary>
void Location(Macad::Occt::TopLoc_Location^ theLoc);
		/// <summary>
	/// Returns a  shape  similar to <me> with   the local
	/// coordinate system set to <Loc>.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Located(Macad::Occt::TopLoc_Location^ theLoc, bool theRaiseExc);
		/// <summary>
	/// Returns a  shape  similar to <me> with   the local
	/// coordinate system set to <Loc>.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Located(Macad::Occt::TopLoc_Location^ theLoc);
		/// <summary>
	/// Returns the shape orientation.
	/// </summary>
Macad::Occt::TopAbs_Orientation Orientation();
		/// <summary>
	/// Sets the shape orientation.
	/// </summary>
void Orientation(Macad::Occt::TopAbs_Orientation theOrient);
		/// <summary>
	/// Returns  a    shape  similar  to  <me>   with  the
	/// orientation set to <Or>.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Oriented(Macad::Occt::TopAbs_Orientation theOrient);
		/// <summary>
	/// Returns a handle to the actual shape implementation.
	/// </summary>
Macad::Occt::TopoDS_TShape^ TShape();
		/// <summary>
	/// Returns the value of the TopAbs_ShapeEnum
	/// enumeration that corresponds to this shape, for
	/// example VERTEX, EDGE, and so on.
	/// Exceptions
	/// Standard_NullObject if this shape is null.
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
		/// <summary>
	/// Returns the free flag.
	/// </summary>
bool Free();
		/// <summary>
	/// Sets the free flag.
	/// </summary>
void Free(bool theIsFree);
		/// <summary>
	/// Returns the locked flag.
	/// </summary>
bool Locked();
		/// <summary>
	/// Sets the locked flag.
	/// </summary>
void Locked(bool theIsLocked);
		/// <summary>
	/// Returns the modification flag.
	/// </summary>
bool Modified();
		/// <summary>
	/// Sets the modification flag.
	/// </summary>
void Modified(bool theIsModified);
		/// <summary>
	/// Returns the checked flag.
	/// </summary>
bool Checked();
		/// <summary>
	/// Sets the checked flag.
	/// </summary>
void Checked(bool theIsChecked);
		/// <summary>
	/// Returns the orientability flag.
	/// </summary>
bool Orientable();
		/// <summary>
	/// Sets the orientability flag.
	/// </summary>
void Orientable(bool theIsOrientable);
		/// <summary>
	/// Returns the closedness flag.
	/// </summary>
bool Closed();
		/// <summary>
	/// Sets the closedness flag.
	/// </summary>
void Closed(bool theIsClosed);
		/// <summary>
	/// Returns the infinity flag.
	/// </summary>
bool Infinite();
		/// <summary>
	/// Sets the infinity flag.
	/// </summary>
void Infinite(bool theIsInfinite);
		/// <summary>
	/// Returns the convexness flag.
	/// </summary>
bool Convex();
		/// <summary>
	/// Sets the convexness flag.
	/// </summary>
void Convex(bool theIsConvex);
		/// <summary>
	/// Multiplies the Shape location by thePosition.
	/// </summary>
void Move(Macad::Occt::TopLoc_Location^ thePosition, bool theRaiseExc);
		/// <summary>
	/// Multiplies the Shape location by thePosition.
	/// </summary>
void Move(Macad::Occt::TopLoc_Location^ thePosition);
		/// <summary>
	/// Returns a shape similar to <me> with a location multiplied by thePosition.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Moved(Macad::Occt::TopLoc_Location^ thePosition, bool theRaiseExc);
		/// <summary>
	/// Returns a shape similar to <me> with a location multiplied by thePosition.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Moved(Macad::Occt::TopLoc_Location^ thePosition);
		/// <summary>
	/// Reverses the orientation, using the Reverse method
	/// from the TopAbs package.
	/// </summary>
void Reverse();
		/// <summary>
	/// Returns    a shape  similar    to  <me>  with  the
	/// orientation  reversed, using  the   Reverse method
	/// from the TopAbs package.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Reversed();
		/// <summary>
	/// Complements the orientation, using the  Complement
	/// method from the TopAbs package.
	/// </summary>
void Complement();
		/// <summary>
	/// Returns  a   shape  similar  to   <me>   with  the
	/// orientation complemented,  using   the  Complement
	/// method from the TopAbs package.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Complemented();
		/// <summary>
	/// Updates the Shape Orientation by composition with theOrient,
	/// using the Compose method from the TopAbs package.
	/// </summary>
void Compose(Macad::Occt::TopAbs_Orientation theOrient);
		/// <summary>
	/// Returns  a  shape   similar   to  <me>   with  the
	/// orientation composed with theOrient, using the
	/// Compose method from the TopAbs package.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Composed(Macad::Occt::TopAbs_Orientation theOrient);
		/// <summary>
	/// Returns the number of direct sub-shapes (children).
	/// </summary>
	/// @sa TopoDS_Iterator for accessing sub-shapes
int NbChildren();
		/// <summary>
	/// Returns True if two shapes  are partners, i.e.  if
	/// they   share   the   same  TShape.  Locations  and
	/// Orientations may differ.
	/// </summary>
bool IsPartner(Macad::Occt::TopoDS_Shape^ theOther);
		/// <summary>
	/// Returns True if two shapes are same, i.e.  if they
	/// share  the  same TShape  with the same  Locations.
	/// Orientations may differ.
	/// </summary>
bool IsSame(Macad::Occt::TopoDS_Shape^ theOther);
		/// <summary>
	/// Returns True if two shapes are equal, i.e. if they
	/// share the same TShape with  the same Locations and
	/// Orientations.
	/// </summary>
bool IsEqual(Macad::Occt::TopoDS_Shape^ theOther);
		/// <summary>
	/// Negation of the IsEqual method.
	/// </summary>
bool IsNotEqual(Macad::Occt::TopoDS_Shape^ theOther);
		/// <summary>
	/// Returns a hashed value denoting <me>. This value is in the range [1, theUpperBound]. It is computed from the
	/// TShape and the Location. The Orientation is not used.
	/// </summary>
	/// <param name="theUpperBound">
	/// the upper bound of the range a computing hash code must be within
	/// </param>
	/// <returns>
	/// a computed hash code, in the range [1, theUpperBound]
	/// </returns>
int HashCode(int theUpperBound);
		/// <summary>
	/// Replace   <me> by  a  new   Shape with the    same
	/// Orientation and Location and a new TShape with the
	/// same geometry and no sub-shapes.
	/// </summary>
void EmptyCopy();
		/// <summary>
	/// Returns a new Shape with the  same Orientation and
	/// Location and  a new TShape  with the same geometry
	/// and no sub-shapes.
	/// </summary>
Macad::Occt::TopoDS_Shape^ EmptyCopied();
	void TShape(Macad::Occt::TopoDS_TShape^ theTShape);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class TopoDS_Shape

//---------------------------------------------------------------------
//  Class  TopoDS_Vertex
//---------------------------------------------------------------------
/// <summary>
/// Describes a vertex which
/// - references an underlying vertex with the potential
/// to be given a location and an orientation
/// - has a location for the underlying vertex, giving its
/// placement in the local coordinate system
/// - has an orientation for the underlying vertex, in
/// terms of its geometry (as opposed to orientation in
/// relation to other shapes).
/// </summary>
public ref class TopoDS_Vertex sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Vertex_h
public:
	Include_TopoDS_Vertex_h
#endif

public:
	TopoDS_Vertex(::TopoDS_Vertex* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Vertex(::TopoDS_Vertex& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Vertex* NativeInstance
	{
		::TopoDS_Vertex* get()
		{
			return static_cast<::TopoDS_Vertex*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Undefined Vertex.
	/// </summary>
TopoDS_Vertex();
	TopoDS_Vertex(Macad::Occt::TopoDS_Vertex^ parameter1);
}; // class TopoDS_Vertex

//---------------------------------------------------------------------
//  Class  TopoDS_Edge
//---------------------------------------------------------------------
/// <summary>
/// Describes an edge which
/// - references an underlying edge with the potential to
/// be given a location and an orientation
/// - has a location for the underlying edge, giving its
/// placement in the local coordinate system
/// - has an orientation for the underlying edge, in terms
/// of its geometry (as opposed to orientation in
/// relation to other shapes).
/// </summary>
public ref class TopoDS_Edge sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Edge_h
public:
	Include_TopoDS_Edge_h
#endif

public:
	TopoDS_Edge(::TopoDS_Edge* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Edge(::TopoDS_Edge& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Edge* NativeInstance
	{
		::TopoDS_Edge* get()
		{
			return static_cast<::TopoDS_Edge*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Undefined Edge.
	/// </summary>
TopoDS_Edge();
	TopoDS_Edge(Macad::Occt::TopoDS_Edge^ parameter1);
}; // class TopoDS_Edge

//---------------------------------------------------------------------
//  Class  TopoDS_Wire
//---------------------------------------------------------------------
/// <summary>
/// Describes a wire which
/// - references an underlying wire with the potential to
/// be given a location and an orientation
/// - has a location for the underlying wire, giving its
/// placement in the local coordinate system
/// - has an orientation for the underlying wire, in terms
/// of its geometry (as opposed to orientation in relation to other shapes).
/// </summary>
public ref class TopoDS_Wire sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Wire_h
public:
	Include_TopoDS_Wire_h
#endif

public:
	TopoDS_Wire(::TopoDS_Wire* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Wire(::TopoDS_Wire& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Wire* NativeInstance
	{
		::TopoDS_Wire* get()
		{
			return static_cast<::TopoDS_Wire*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Undefined Wire.
	/// </summary>
TopoDS_Wire();
	TopoDS_Wire(Macad::Occt::TopoDS_Wire^ parameter1);
}; // class TopoDS_Wire

//---------------------------------------------------------------------
//  Class  TopoDS_Face
//---------------------------------------------------------------------
/// <summary>
/// Describes a face which
/// - references an underlying face with the potential to
/// be given a location and an orientation
/// - has a location for the underlying face, giving its
/// placement in the local coordinate system
/// - has an orientation for the underlying face, in terms
/// of its geometry (as opposed to orientation in relation to other shapes).
/// </summary>
public ref class TopoDS_Face sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Face_h
public:
	Include_TopoDS_Face_h
#endif

public:
	TopoDS_Face(::TopoDS_Face* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Face(::TopoDS_Face& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Face* NativeInstance
	{
		::TopoDS_Face* get()
		{
			return static_cast<::TopoDS_Face*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Undefined Face.
	/// </summary>
TopoDS_Face();
	TopoDS_Face(Macad::Occt::TopoDS_Face^ parameter1);
}; // class TopoDS_Face

//---------------------------------------------------------------------
//  Class  TopoDS_Shell
//---------------------------------------------------------------------
/// <summary>
/// Describes a shell which
/// - references an underlying shell with the potential to
/// be given a location and an orientation
/// - has a location for the underlying shell, giving its
/// placement in the local coordinate system
/// - has an orientation for the underlying shell, in terms
/// of its geometry (as opposed to orientation in relation to other shapes).
/// </summary>
public ref class TopoDS_Shell sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Shell_h
public:
	Include_TopoDS_Shell_h
#endif

public:
	TopoDS_Shell(::TopoDS_Shell* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Shell(::TopoDS_Shell& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Shell* NativeInstance
	{
		::TopoDS_Shell* get()
		{
			return static_cast<::TopoDS_Shell*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs an Undefined Shell.
	/// </summary>
TopoDS_Shell();
	TopoDS_Shell(Macad::Occt::TopoDS_Shell^ parameter1);
}; // class TopoDS_Shell

//---------------------------------------------------------------------
//  Class  TopoDS_Solid
//---------------------------------------------------------------------
/// <summary>
/// Describes a solid shape which
/// - references an underlying solid shape with the
/// potential to be given a location and an orientation
/// - has a location for the underlying shape, giving its
/// placement in the local coordinate system
/// - has an orientation for the underlying shape, in
/// terms of its geometry (as opposed to orientation in
/// relation to other shapes).
/// </summary>
public ref class TopoDS_Solid sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Solid_h
public:
	Include_TopoDS_Solid_h
#endif

public:
	TopoDS_Solid(::TopoDS_Solid* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Solid(::TopoDS_Solid& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Solid* NativeInstance
	{
		::TopoDS_Solid* get()
		{
			return static_cast<::TopoDS_Solid*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs an Undefined Solid.
	/// </summary>
TopoDS_Solid();
	TopoDS_Solid(Macad::Occt::TopoDS_Solid^ parameter1);
}; // class TopoDS_Solid

//---------------------------------------------------------------------
//  Class  TopoDS_CompSolid
//---------------------------------------------------------------------
/// <summary>
/// Describes a composite solid which
/// - references an underlying composite solid with the
/// potential to be given a location and an orientation
/// - has a location for the underlying composite solid,
/// giving its placement in the local coordinate system
/// - has an orientation for the underlying composite
/// solid, in terms of its geometry (as opposed to
/// orientation in relation to other shapes).
/// Casts shape S to the more specialized return type, CompSolid.
/// </summary>
public ref class TopoDS_CompSolid sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_CompSolid_h
public:
	Include_TopoDS_CompSolid_h
#endif

public:
	TopoDS_CompSolid(::TopoDS_CompSolid* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_CompSolid(::TopoDS_CompSolid& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_CompSolid* NativeInstance
	{
		::TopoDS_CompSolid* get()
		{
			return static_cast<::TopoDS_CompSolid*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs an Undefined CompSolid.
	/// </summary>
TopoDS_CompSolid();
	TopoDS_CompSolid(Macad::Occt::TopoDS_CompSolid^ parameter1);
}; // class TopoDS_CompSolid

//---------------------------------------------------------------------
//  Class  TopoDS_Compound
//---------------------------------------------------------------------
/// <summary>
/// Describes a compound which
/// - references an underlying compound with the
/// potential to be given a location and an orientation
/// - has a location for the underlying compound, giving
/// its placement in the local coordinate system
/// - has an orientation for the underlying compound, in
/// terms of its geometry (as opposed to orientation in
/// relation to other shapes).
/// Casts shape S to the more specialized return type, Compound.
/// </summary>
public ref class TopoDS_Compound sealed : public Macad::Occt::TopoDS_Shape
{

#ifdef Include_TopoDS_Compound_h
public:
	Include_TopoDS_Compound_h
#endif

public:
	TopoDS_Compound(::TopoDS_Compound* nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	TopoDS_Compound(::TopoDS_Compound& nativeInstance)
		: Macad::Occt::TopoDS_Shape( nativeInstance )
	{}

	property ::TopoDS_Compound* NativeInstance
	{
		::TopoDS_Compound* get()
		{
			return static_cast<::TopoDS_Compound*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Constructs an Undefined Compound.
	/// </summary>
TopoDS_Compound();
	TopoDS_Compound(Macad::Occt::TopoDS_Compound^ parameter1);
}; // class TopoDS_Compound

//---------------------------------------------------------------------
//  Class  TopoDS_HShape
//---------------------------------------------------------------------
/// <summary>
/// Class to manipulate a Shape with  handle.
/// </summary>
public ref class TopoDS_HShape sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopoDS_HShape_h
public:
	Include_TopoDS_HShape_h
#endif

public:
	TopoDS_HShape(::TopoDS_HShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopoDS_HShape(::TopoDS_HShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopoDS_HShape* NativeInstance
	{
		::TopoDS_HShape* get()
		{
			return static_cast<::TopoDS_HShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_HShape^ CreateDowncasted(::TopoDS_HShape* instance);

public:
		/// <summary>
	/// Constructs an empty shape object
	/// </summary>
TopoDS_HShape();
		/// <summary>
	/// Constructs a shape object defined by the shape aShape.
	/// </summary>
TopoDS_HShape(Macad::Occt::TopoDS_Shape^ aShape);
	TopoDS_HShape(Macad::Occt::TopoDS_HShape^ parameter1);
		/// <summary>
	/// Loads this shape with the shape aShape
	/// </summary>
void Shape(Macad::Occt::TopoDS_Shape^ aShape);
		/// <summary>
	/// Returns a reference to a constant TopoDS_Shape based on this shape.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Shape();
		/// <summary>
	/// Exchanges the TopoDS_Shape object defining this
	/// shape for another one referencing the same underlying shape
	/// Accesses the list of shapes within the underlying
	/// shape referenced by the TopoDS_Shape object.
	/// Returns a reference to a TopoDS_Shape based on
	/// this shape. The TopoDS_Shape can be modified.
	/// </summary>
Macad::Occt::TopoDS_Shape^ ChangeShape();
}; // class TopoDS_HShape

//---------------------------------------------------------------------
//  Class  TopoDS_TShape
//---------------------------------------------------------------------
/// <summary>
/// A TShape  is a topological  structure describing a
/// set of points in a 2D or 3D space.
/// 
/// A topological shape is a structure made from other
/// shapes.  This is a deferred class  used to support
/// topological objects.
/// 
/// TShapes are   defined   by  their  optional domain
/// (geometry)  and  their  components  (other TShapes
/// with  Locations and Orientations).  The components
/// are stored in a List of Shapes.
/// 
/// A   TShape contains  the   following boolean flags :
/// 
/// - Free       : Free or Frozen.
/// - Modified   : Has been modified.
/// - Checked    : Has been checked.
/// - Orientable : Can be oriented.
/// - Closed     : Is closed (note that only Wires and Shells may be closed).
/// - Infinite   : Is infinite.
/// - Convex     : Is convex.
/// 
/// Users have no direct access to the classes derived
/// from TShape.  They  handle them with   the classes
/// derived from Shape.
/// </summary>
public ref class TopoDS_TShape : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopoDS_TShape_h
public:
	Include_TopoDS_TShape_h
#endif

protected:
	TopoDS_TShape(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	TopoDS_TShape(::TopoDS_TShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopoDS_TShape(::TopoDS_TShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopoDS_TShape* NativeInstance
	{
		::TopoDS_TShape* get()
		{
			return static_cast<::TopoDS_TShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TShape^ CreateDowncasted(::TopoDS_TShape* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  TopoDS_TShape_Flags
	//---------------------------------------------------------------------
	enum class TopoDS_TShape_Flags
	{
		TopoDS_TShape_Flags_Free = 1,
		TopoDS_TShape_Flags_Modified = 2,
		TopoDS_TShape_Flags_Checked = 4,
		TopoDS_TShape_Flags_Orientable = 8,
		TopoDS_TShape_Flags_Closed = 16,
		TopoDS_TShape_Flags_Infinite = 32,
		TopoDS_TShape_Flags_Convex = 64,
		TopoDS_TShape_Flags_Locked = 128
	}; // enum  class TopoDS_TShape_Flags

	TopoDS_TShape(Macad::Occt::TopoDS_TShape^ parameter1);
		/// <summary>
	/// Returns the free flag.
	/// </summary>
bool Free();
		/// <summary>
	/// Sets the free flag.
	/// </summary>
void Free(bool theIsFree);
		/// <summary>
	/// Returns the locked flag.
	/// </summary>
bool Locked();
		/// <summary>
	/// Sets the locked flag.
	/// </summary>
void Locked(bool theIsLocked);
		/// <summary>
	/// Returns the modification flag.
	/// </summary>
bool Modified();
		/// <summary>
	/// Sets the modification flag.
	/// </summary>
void Modified(bool theIsModified);
		/// <summary>
	/// Returns the checked flag.
	/// </summary>
bool Checked();
		/// <summary>
	/// Sets the checked flag.
	/// </summary>
void Checked(bool theIsChecked);
		/// <summary>
	/// Returns the orientability flag.
	/// </summary>
bool Orientable();
		/// <summary>
	/// Sets the orientability flag.
	/// </summary>
void Orientable(bool theIsOrientable);
		/// <summary>
	/// Returns the closedness flag.
	/// </summary>
bool Closed();
		/// <summary>
	/// Sets the closedness flag.
	/// </summary>
void Closed(bool theIsClosed);
		/// <summary>
	/// Returns the infinity flag.
	/// </summary>
bool Infinite();
		/// <summary>
	/// Sets the infinity flag.
	/// </summary>
void Infinite(bool theIsInfinite);
		/// <summary>
	/// Returns the convexness flag.
	/// </summary>
bool Convex();
		/// <summary>
	/// Sets the convexness flag.
	/// </summary>
void Convex(bool theIsConvex);
		/// <summary>
	/// Returns the type as a term of the ShapeEnum enum :
	/// VERTEX, EDGE, WIRE, FACE, ....
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
		/// <summary>
	/// Returns a copy  of the  TShape  with no sub-shapes.
	/// </summary>
Macad::Occt::TopoDS_TShape^ EmptyCopy();
		/// <summary>
	/// Returns the number of direct sub-shapes (children).
	/// </summary>
	/// @sa TopoDS_Iterator for accessing sub-shapes
int NbChildren();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class TopoDS_TShape

//---------------------------------------------------------------------
//  Class  TopoDS_TVertex
//---------------------------------------------------------------------
/// <summary>
/// A  Vertex is a topological  point in  two or three
/// dimensions.
/// </summary>
public ref class TopoDS_TVertex : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TVertex_h
public:
	Include_TopoDS_TVertex_h
#endif

protected:
	TopoDS_TVertex(InitMode init)
		: Macad::Occt::TopoDS_TShape( init )
	{}

public:
	TopoDS_TVertex(::TopoDS_TVertex* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TVertex(::TopoDS_TVertex& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TVertex* NativeInstance
	{
		::TopoDS_TVertex* get()
		{
			return static_cast<::TopoDS_TVertex*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TVertex^ CreateDowncasted(::TopoDS_TVertex* instance);

public:
	TopoDS_TVertex(Macad::Occt::TopoDS_TVertex^ parameter1);
		/// <summary>
	/// Returns VERTEX.
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
}; // class TopoDS_TVertex

//---------------------------------------------------------------------
//  Class  TopoDS_TEdge
//---------------------------------------------------------------------
/// <summary>
/// A topological part  of a  curve  in 2D or 3D,  the
/// boundary    is   a   set  of oriented    Vertices.
/// </summary>
public ref class TopoDS_TEdge : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TEdge_h
public:
	Include_TopoDS_TEdge_h
#endif

protected:
	TopoDS_TEdge(InitMode init)
		: Macad::Occt::TopoDS_TShape( init )
	{}

public:
	TopoDS_TEdge(::TopoDS_TEdge* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TEdge(::TopoDS_TEdge& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TEdge* NativeInstance
	{
		::TopoDS_TEdge* get()
		{
			return static_cast<::TopoDS_TEdge*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TEdge^ CreateDowncasted(::TopoDS_TEdge* instance);

public:
	TopoDS_TEdge(Macad::Occt::TopoDS_TEdge^ parameter1);
		/// <summary>
	/// Returns  EDGE.
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
}; // class TopoDS_TEdge

//---------------------------------------------------------------------
//  Class  TopoDS_TWire
//---------------------------------------------------------------------
/// <summary>
/// A set of edges connected by their vertices.
/// </summary>
public ref class TopoDS_TWire sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TWire_h
public:
	Include_TopoDS_TWire_h
#endif

public:
	TopoDS_TWire(::TopoDS_TWire* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TWire(::TopoDS_TWire& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TWire* NativeInstance
	{
		::TopoDS_TWire* get()
		{
			return static_cast<::TopoDS_TWire*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TWire^ CreateDowncasted(::TopoDS_TWire* instance);

public:
		/// <summary>
	/// Creates an empty TWire.
	/// </summary>
TopoDS_TWire();
	TopoDS_TWire(Macad::Occt::TopoDS_TWire^ parameter1);
		/// <summary>
	/// Returns WIRE.
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
		/// <summary>
	/// Returns an empty TWire.
	/// </summary>
Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TWire

//---------------------------------------------------------------------
//  Class  TopoDS_TFace
//---------------------------------------------------------------------
/// <summary>
/// A  topological part  of a surface   or  of the  2D
/// space.  The  boundary  is  a   set of  wires   and
/// vertices.
/// </summary>
public ref class TopoDS_TFace : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TFace_h
public:
	Include_TopoDS_TFace_h
#endif

protected:
	TopoDS_TFace(InitMode init)
		: Macad::Occt::TopoDS_TShape( init )
	{}

public:
	TopoDS_TFace(::TopoDS_TFace* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TFace(::TopoDS_TFace& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TFace* NativeInstance
	{
		::TopoDS_TFace* get()
		{
			return static_cast<::TopoDS_TFace*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TFace^ CreateDowncasted(::TopoDS_TFace* instance);

public:
		/// <summary>
	/// Creates an empty TFace.
	/// </summary>
TopoDS_TFace();
	TopoDS_TFace(Macad::Occt::TopoDS_TFace^ parameter1);
		/// <summary>
	/// returns FACE.
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
		/// <summary>
	/// Returns an empty TFace.
	/// </summary>
Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TFace

//---------------------------------------------------------------------
//  Class  TopoDS_TShell
//---------------------------------------------------------------------
/// <summary>
/// A set of faces connected by their edges.
/// </summary>
public ref class TopoDS_TShell sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TShell_h
public:
	Include_TopoDS_TShell_h
#endif

public:
	TopoDS_TShell(::TopoDS_TShell* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TShell(::TopoDS_TShell& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TShell* NativeInstance
	{
		::TopoDS_TShell* get()
		{
			return static_cast<::TopoDS_TShell*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TShell^ CreateDowncasted(::TopoDS_TShell* instance);

public:
		/// <summary>
	/// Creates an empty TShell.
	/// </summary>
TopoDS_TShell();
	TopoDS_TShell(Macad::Occt::TopoDS_TShell^ parameter1);
		/// <summary>
	/// Returns SHELL.
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
		/// <summary>
	/// Returns an empty TShell.
	/// </summary>
Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TShell

//---------------------------------------------------------------------
//  Class  TopoDS_TSolid
//---------------------------------------------------------------------
/// <summary>
/// A Topological part of 3D space, bounded by shells,
/// edges and vertices.
/// </summary>
public ref class TopoDS_TSolid sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TSolid_h
public:
	Include_TopoDS_TSolid_h
#endif

public:
	TopoDS_TSolid(::TopoDS_TSolid* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TSolid(::TopoDS_TSolid& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TSolid* NativeInstance
	{
		::TopoDS_TSolid* get()
		{
			return static_cast<::TopoDS_TSolid*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TSolid^ CreateDowncasted(::TopoDS_TSolid* instance);

public:
		/// <summary>
	/// Creates an empty TSolid.
	/// </summary>
TopoDS_TSolid();
	TopoDS_TSolid(Macad::Occt::TopoDS_TSolid^ parameter1);
		/// <summary>
	/// returns SOLID.
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
		/// <summary>
	/// Returns an empty TSolid.
	/// </summary>
Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TSolid

//---------------------------------------------------------------------
//  Class  TopoDS_TCompSolid
//---------------------------------------------------------------------
/// <summary>
/// A set of solids connected by their faces.
/// </summary>
public ref class TopoDS_TCompSolid sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TCompSolid_h
public:
	Include_TopoDS_TCompSolid_h
#endif

public:
	TopoDS_TCompSolid(::TopoDS_TCompSolid* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TCompSolid(::TopoDS_TCompSolid& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TCompSolid* NativeInstance
	{
		::TopoDS_TCompSolid* get()
		{
			return static_cast<::TopoDS_TCompSolid*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TCompSolid^ CreateDowncasted(::TopoDS_TCompSolid* instance);

public:
		/// <summary>
	/// Creates an empty TCompSolid.
	/// </summary>
TopoDS_TCompSolid();
	TopoDS_TCompSolid(Macad::Occt::TopoDS_TCompSolid^ parameter1);
		/// <summary>
	/// returns COMPSOLID
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
		/// <summary>
	/// Returns an empty TCompSolid.
	/// </summary>
Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TCompSolid

//---------------------------------------------------------------------
//  Class  TopoDS_TCompound
//---------------------------------------------------------------------
/// <summary>
/// A TCompound is an all-purpose set of Shapes.
/// </summary>
public ref class TopoDS_TCompound sealed : public Macad::Occt::TopoDS_TShape
{

#ifdef Include_TopoDS_TCompound_h
public:
	Include_TopoDS_TCompound_h
#endif

public:
	TopoDS_TCompound(::TopoDS_TCompound* nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	TopoDS_TCompound(::TopoDS_TCompound& nativeInstance)
		: Macad::Occt::TopoDS_TShape( nativeInstance )
	{}

	property ::TopoDS_TCompound* NativeInstance
	{
		::TopoDS_TCompound* get()
		{
			return static_cast<::TopoDS_TCompound*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_TCompound^ CreateDowncasted(::TopoDS_TCompound* instance);

public:
		/// <summary>
	/// Creates an empty TCompound.
	/// </summary>
TopoDS_TCompound();
	TopoDS_TCompound(Macad::Occt::TopoDS_TCompound^ parameter1);
		/// <summary>
	/// Returns COMPOUND.
	/// </summary>
Macad::Occt::TopAbs_ShapeEnum ShapeType();
		/// <summary>
	/// Returns an empty TCompound.
	/// </summary>
Macad::Occt::TopoDS_TShape^ EmptyCopy();
}; // class TopoDS_TCompound

//---------------------------------------------------------------------
//  Class  TopoDS_Builder
//---------------------------------------------------------------------
/// <summary>
/// A  Builder is used   to  create  Topological  Data
/// Structures.It is the root of the Builder class hierarchy.
/// 
/// There are three groups of methods in the Builder :
/// 
/// The Make methods create Shapes.
/// 
/// The Add method includes a Shape in another Shape.
/// 
/// The Remove  method  removes a  Shape from an other
/// Shape.
/// 
/// The methods in Builder are not static. They can be
/// redefined in inherited builders.
/// 
/// This   Builder does not  provide   methods to Make
/// Vertices,  Edges, Faces,  Shells  or Solids. These
/// methods are  provided  in  the inherited  Builders
/// as they must provide the geometry.
/// 
/// The Add method check for the following rules :
/// 
/// - Any SHAPE can be added in a COMPOUND.
/// 
/// - Only SOLID can be added in a COMPSOLID.
/// 
/// - Only SHELL, EDGE and VERTEX can be added in a SOLID.
/// EDGE and VERTEX as to be INTERNAL or EXTERNAL.
/// 
/// - Only FACE can be added in a SHELL.
/// 
/// - Only WIRE and VERTEX can be added in a FACE.
/// VERTEX as to be INTERNAL or EXTERNAL.
/// 
/// - Only EDGE can be added in a WIRE.
/// 
/// - Only VERTEX can be added in an EDGE.
/// 
/// - Nothing can be added in a VERTEX.
/// </summary>
public ref class TopoDS_Builder : public BaseClass<::TopoDS_Builder>
{

#ifdef Include_TopoDS_Builder_h
public:
	Include_TopoDS_Builder_h
#endif

protected:
	TopoDS_Builder(InitMode init)
		: BaseClass<::TopoDS_Builder>( init )
	{}

public:
	TopoDS_Builder(::TopoDS_Builder* nativeInstance)
		: BaseClass<::TopoDS_Builder>( nativeInstance, true )
	{}

	TopoDS_Builder(::TopoDS_Builder& nativeInstance)
		: BaseClass<::TopoDS_Builder>( &nativeInstance, false )
	{}

	property ::TopoDS_Builder* NativeInstance
	{
		::TopoDS_Builder* get()
		{
			return static_cast<::TopoDS_Builder*>(_NativeInstance);
		}
	}

public:
	TopoDS_Builder();
	TopoDS_Builder(Macad::Occt::TopoDS_Builder^ parameter1);
		/// <summary>
	/// Make an empty Wire.
	/// </summary>
void MakeWire(Macad::Occt::TopoDS_Wire^ W);
		/// <summary>
	/// Make an empty Shell.
	/// </summary>
void MakeShell(Macad::Occt::TopoDS_Shell^ S);
		/// <summary>
	/// Make a Solid covering the whole 3D space.
	/// </summary>
void MakeSolid(Macad::Occt::TopoDS_Solid^ S);
		/// <summary>
	/// Make an empty Composite Solid.
	/// </summary>
void MakeCompSolid(Macad::Occt::TopoDS_CompSolid^ C);
		/// <summary>
	/// Make an empty Compound.
	/// </summary>
void MakeCompound(Macad::Occt::TopoDS_Compound^ C);
		/// <summary>
	/// Add the Shape C in the Shape S.
	/// Exceptions
	/// - TopoDS_FrozenShape if S is not free and cannot be modified.
	/// - TopoDS__UnCompatibleShapes if S and C are not compatible.
	/// </summary>
void Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ C);
		/// <summary>
	/// Remove the Shape C from the Shape S.
	/// Exceptions
	/// TopoDS_FrozenShape if S is frozen and cannot be modified.
	/// </summary>
void Remove(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ C);
}; // class TopoDS_Builder

//---------------------------------------------------------------------
//  Class  TopoDS_Iterator
//---------------------------------------------------------------------
/// <summary>
/// Iterates on the underlying shape underlying a given
/// TopoDS_Shape object, providing access to its
/// component sub-shapes. Each component shape is
/// returned as a TopoDS_Shape with an orientation,
/// and a compound of the original values and the relative values.
/// </summary>
public ref class TopoDS_Iterator sealed : public BaseClass<::TopoDS_Iterator>
{

#ifdef Include_TopoDS_Iterator_h
public:
	Include_TopoDS_Iterator_h
#endif

public:
	TopoDS_Iterator(::TopoDS_Iterator* nativeInstance)
		: BaseClass<::TopoDS_Iterator>( nativeInstance, true )
	{}

	TopoDS_Iterator(::TopoDS_Iterator& nativeInstance)
		: BaseClass<::TopoDS_Iterator>( &nativeInstance, false )
	{}

	property ::TopoDS_Iterator* NativeInstance
	{
		::TopoDS_Iterator* get()
		{
			return static_cast<::TopoDS_Iterator*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Creates an empty Iterator.
	/// </summary>
TopoDS_Iterator();
		/// <summary>
	/// Creates an Iterator on <S> sub-shapes.
	/// Note:
	/// - If cumOri is true, the function composes all
	/// sub-shapes with the orientation of S.
	/// - If cumLoc is true, the function multiplies all
	/// sub-shapes by the location of S, i.e. it applies to
	/// each sub-shape the transformation that is associated with S.
	/// </summary>
TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S, bool cumOri, bool cumLoc);
		/// <summary>
	/// Creates an Iterator on <S> sub-shapes.
	/// Note:
	/// - If cumOri is true, the function composes all
	/// sub-shapes with the orientation of S.
	/// - If cumLoc is true, the function multiplies all
	/// sub-shapes by the location of S, i.e. it applies to
	/// each sub-shape the transformation that is associated with S.
	/// </summary>
TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S, bool cumOri);
		/// <summary>
	/// Creates an Iterator on <S> sub-shapes.
	/// Note:
	/// - If cumOri is true, the function composes all
	/// sub-shapes with the orientation of S.
	/// - If cumLoc is true, the function multiplies all
	/// sub-shapes by the location of S, i.e. it applies to
	/// each sub-shape the transformation that is associated with S.
	/// </summary>
TopoDS_Iterator(Macad::Occt::TopoDS_Shape^ S);
	TopoDS_Iterator(Macad::Occt::TopoDS_Iterator^ parameter1);
		/// <summary>
	/// Initializes this iterator with shape S.
	/// Note:
	/// - If cumOri is true, the function composes all
	/// sub-shapes with the orientation of S.
	/// - If cumLoc is true, the function multiplies all
	/// sub-shapes by the location of S, i.e. it applies to
	/// each sub-shape the transformation that is associated with S.
	/// </summary>
void Initialize(Macad::Occt::TopoDS_Shape^ S, bool cumOri, bool cumLoc);
		/// <summary>
	/// Initializes this iterator with shape S.
	/// Note:
	/// - If cumOri is true, the function composes all
	/// sub-shapes with the orientation of S.
	/// - If cumLoc is true, the function multiplies all
	/// sub-shapes by the location of S, i.e. it applies to
	/// each sub-shape the transformation that is associated with S.
	/// </summary>
void Initialize(Macad::Occt::TopoDS_Shape^ S, bool cumOri);
		/// <summary>
	/// Initializes this iterator with shape S.
	/// Note:
	/// - If cumOri is true, the function composes all
	/// sub-shapes with the orientation of S.
	/// - If cumLoc is true, the function multiplies all
	/// sub-shapes by the location of S, i.e. it applies to
	/// each sub-shape the transformation that is associated with S.
	/// </summary>
void Initialize(Macad::Occt::TopoDS_Shape^ S);
		/// <summary>
	/// Returns true if there is another sub-shape in the
	/// shape which this iterator is scanning.
	/// </summary>
bool More();
		/// <summary>
	/// Moves on to the next sub-shape in the shape which
	/// this iterator is scanning.
	/// Exceptions
	/// Standard_NoMoreObject if there are no more sub-shapes in the shape.
	/// </summary>
void Next();
		/// <summary>
	/// Returns the current sub-shape in the shape which
	/// this iterator is scanning.
	/// Exceptions
	/// Standard_NoSuchObject if there is no current sub-shape.
	/// </summary>
Macad::Occt::TopoDS_Shape^ Value();
}; // class TopoDS_Iterator

//---------------------------------------------------------------------
//  Class  TopoDS
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to cast objects of class
/// TopoDS_Shape to be objects of more specialized
/// sub-classes. Types are verified, thus in the example
/// below, the first two blocks are correct but the third is
/// rejected by the compiler.
/// </summary>
public ref class TopoDS sealed : public BaseClass<::TopoDS>
{

#ifdef Include_TopoDS_h
public:
	Include_TopoDS_h
#endif

public:
	TopoDS(::TopoDS* nativeInstance)
		: BaseClass<::TopoDS>( nativeInstance, true )
	{}

	TopoDS(::TopoDS& nativeInstance)
		: BaseClass<::TopoDS>( &nativeInstance, false )
	{}

	property ::TopoDS* NativeInstance
	{
		::TopoDS* get()
		{
			return static_cast<::TopoDS*>(_NativeInstance);
		}
	}

public:
	TopoDS();
	TopoDS(Macad::Occt::TopoDS^ parameter1);
		/// <summary>
	/// Basic tool to access the data structure.
	/// Casts shape S to the more specialized return type, Vertex.
	/// Exceptions
	/// Standard_TypeMismatch if S cannot be cast to this return type.
	/// </summary>
static Macad::Occt::TopoDS_Vertex^ Vertex(Macad::Occt::TopoDS_Shape^ S);
		/// <summary>
	/// Casts shape S to the more specialized return type, Edge
	/// Exceptions
	/// Standard_TypeMismatch if S cannot be cast to this return type.
	/// </summary>
static Macad::Occt::TopoDS_Edge^ Edge(Macad::Occt::TopoDS_Shape^ S);
		/// <summary>
	/// Casts shape S to the more specialized return type, Wire.
	/// Exceptions
	/// Standard_TypeMismatch if S cannot be cast to this return type.
	/// </summary>
static Macad::Occt::TopoDS_Wire^ Wire(Macad::Occt::TopoDS_Shape^ S);
		/// <summary>
	/// Casts shape S to the more specialized return type, Face.
	/// Exceptions
	/// Standard_TypeMismatch if S cannot be cast to this return type.
	/// </summary>
static Macad::Occt::TopoDS_Face^ Face(Macad::Occt::TopoDS_Shape^ S);
		/// <summary>
	/// Casts shape S to the more specialized return type, Shell.
	/// Exceptions
	/// Standard_TypeMismatch if S cannot be cast to this return type.
	/// </summary>
static Macad::Occt::TopoDS_Shell^ Shell(Macad::Occt::TopoDS_Shape^ S);
		/// <summary>
	/// Casts shape S to the more specialized return type, Solid.
	/// Exceptions
	/// Standard_TypeMismatch if S cannot be cast to this return type.
	/// </summary>
static Macad::Occt::TopoDS_Solid^ Solid(Macad::Occt::TopoDS_Shape^ S);
		/// <summary>
	/// Casts shape S to the more specialized return type, CompSolid.
	/// Exceptions
	/// Standard_TypeMismatch if S cannot be cast to this return type.
	/// </summary>
static Macad::Occt::TopoDS_CompSolid^ CompSolid(Macad::Occt::TopoDS_Shape^ S);
		/// <summary>
	/// Casts shape S to the more specialized return type, Compound.
	/// Exceptions
	/// Standard_TypeMismatch if S cannot be cast to this return type.
	/// </summary>
static Macad::Occt::TopoDS_Compound^ Compound(Macad::Occt::TopoDS_Shape^ S);
}; // class TopoDS

//---------------------------------------------------------------------
//  Class  TopoDS_AlertAttribute
//---------------------------------------------------------------------
/// <summary>
/// Alert attribute object storing TopoDS shape in its field
/// </summary>
public ref class TopoDS_AlertAttribute sealed : public Macad::Occt::Message_AttributeStream
{

#ifdef Include_TopoDS_AlertAttribute_h
public:
	Include_TopoDS_AlertAttribute_h
#endif

public:
	TopoDS_AlertAttribute(::TopoDS_AlertAttribute* nativeInstance)
		: Macad::Occt::Message_AttributeStream( nativeInstance )
	{}

	TopoDS_AlertAttribute(::TopoDS_AlertAttribute& nativeInstance)
		: Macad::Occt::Message_AttributeStream( nativeInstance )
	{}

	property ::TopoDS_AlertAttribute* NativeInstance
	{
		::TopoDS_AlertAttribute* get()
		{
			return static_cast<::TopoDS_AlertAttribute*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_AlertAttribute^ CreateDowncasted(::TopoDS_AlertAttribute* instance);

public:
		/// <summary>
	/// Constructor with shape argument
	/// </summary>
TopoDS_AlertAttribute(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TCollection_AsciiString^ theName);
		/// <summary>
	/// Constructor with shape argument
	/// </summary>
TopoDS_AlertAttribute(Macad::Occt::TopoDS_Shape^ theShape);
		/// <summary>
	/// Returns contained shape
	/// </summary>
Macad::Occt::TopoDS_Shape^ GetShape();
		/// <summary>
	/// Push shape information into messenger
	/// </summary>
static void Send(Macad::Occt::Message_Messenger^ theMessenger, Macad::Occt::TopoDS_Shape^ theShape);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class TopoDS_AlertAttribute

//---------------------------------------------------------------------
//  Class  TopoDS_AlertWithShape
//---------------------------------------------------------------------
/// <summary>
/// Alert object storing TopoDS shape in its field
/// </summary>
public ref class TopoDS_AlertWithShape sealed : public Macad::Occt::Message_Alert
{

#ifdef Include_TopoDS_AlertWithShape_h
public:
	Include_TopoDS_AlertWithShape_h
#endif

public:
	TopoDS_AlertWithShape(::TopoDS_AlertWithShape* nativeInstance)
		: Macad::Occt::Message_Alert( nativeInstance )
	{}

	TopoDS_AlertWithShape(::TopoDS_AlertWithShape& nativeInstance)
		: Macad::Occt::Message_Alert( nativeInstance )
	{}

	property ::TopoDS_AlertWithShape* NativeInstance
	{
		::TopoDS_AlertWithShape* get()
		{
			return static_cast<::TopoDS_AlertWithShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_AlertWithShape^ CreateDowncasted(::TopoDS_AlertWithShape* instance);

public:
		/// <summary>
	/// Constructor with shape argument
	/// </summary>
TopoDS_AlertWithShape(Macad::Occt::TopoDS_Shape^ theShape);
	TopoDS_AlertWithShape(Macad::Occt::TopoDS_AlertWithShape^ parameter1);
		/// <summary>
	/// Returns contained shape
	/// </summary>
Macad::Occt::TopoDS_Shape^ GetShape();
		/// <summary>
	/// Sets the shape
	/// </summary>
void SetShape(Macad::Occt::TopoDS_Shape^ theShape);
		/// <summary>
	/// Returns false.
	/// </summary>
bool SupportsMerge();
		/// <summary>
	/// Returns false.
	/// </summary>
bool Merge(Macad::Occt::Message_Alert^ theTarget);
}; // class TopoDS_AlertWithShape

//---------------------------------------------------------------------
//  Class  TopoDS_FrozenShape
//---------------------------------------------------------------------
public ref class TopoDS_FrozenShape sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_TopoDS_FrozenShape_h
public:
	Include_TopoDS_FrozenShape_h
#endif

public:
	TopoDS_FrozenShape(::TopoDS_FrozenShape* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	TopoDS_FrozenShape(::TopoDS_FrozenShape& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::TopoDS_FrozenShape* NativeInstance
	{
		::TopoDS_FrozenShape* get()
		{
			return static_cast<::TopoDS_FrozenShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_FrozenShape^ CreateDowncasted(::TopoDS_FrozenShape* instance);

public:
	TopoDS_FrozenShape();
	TopoDS_FrozenShape(System::String^ theMessage);
	TopoDS_FrozenShape(System::String^ theMessage, System::String^ theStackTrace);
	TopoDS_FrozenShape(Macad::Occt::TopoDS_FrozenShape^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::TopoDS_FrozenShape^ NewInstance(System::String^ theMessage);
	static Macad::Occt::TopoDS_FrozenShape^ NewInstance();
	static Macad::Occt::TopoDS_FrozenShape^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class TopoDS_FrozenShape

//---------------------------------------------------------------------
//  Class  TopoDS_UnCompatibleShapes
//---------------------------------------------------------------------
public ref class TopoDS_UnCompatibleShapes sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_TopoDS_UnCompatibleShapes_h
public:
	Include_TopoDS_UnCompatibleShapes_h
#endif

public:
	TopoDS_UnCompatibleShapes(::TopoDS_UnCompatibleShapes* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	TopoDS_UnCompatibleShapes(::TopoDS_UnCompatibleShapes& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::TopoDS_UnCompatibleShapes* NativeInstance
	{
		::TopoDS_UnCompatibleShapes* get()
		{
			return static_cast<::TopoDS_UnCompatibleShapes*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_UnCompatibleShapes^ CreateDowncasted(::TopoDS_UnCompatibleShapes* instance);

public:
	TopoDS_UnCompatibleShapes();
	TopoDS_UnCompatibleShapes(System::String^ theMessage);
	TopoDS_UnCompatibleShapes(System::String^ theMessage, System::String^ theStackTrace);
	TopoDS_UnCompatibleShapes(Macad::Occt::TopoDS_UnCompatibleShapes^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::TopoDS_UnCompatibleShapes^ NewInstance(System::String^ theMessage);
	static Macad::Occt::TopoDS_UnCompatibleShapes^ NewInstance();
	static Macad::Occt::TopoDS_UnCompatibleShapes^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class TopoDS_UnCompatibleShapes

//---------------------------------------------------------------------
//  Class  TopoDS_LockedShape
//---------------------------------------------------------------------
public ref class TopoDS_LockedShape sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_TopoDS_LockedShape_h
public:
	Include_TopoDS_LockedShape_h
#endif

public:
	TopoDS_LockedShape(::TopoDS_LockedShape* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	TopoDS_LockedShape(::TopoDS_LockedShape& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::TopoDS_LockedShape* NativeInstance
	{
		::TopoDS_LockedShape* get()
		{
			return static_cast<::TopoDS_LockedShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopoDS_LockedShape^ CreateDowncasted(::TopoDS_LockedShape* instance);

public:
	TopoDS_LockedShape();
	TopoDS_LockedShape(System::String^ theMessage);
	TopoDS_LockedShape(System::String^ theMessage, System::String^ theStackTrace);
	TopoDS_LockedShape(Macad::Occt::TopoDS_LockedShape^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::TopoDS_LockedShape^ NewInstance(System::String^ theMessage);
	static Macad::Occt::TopoDS_LockedShape^ NewInstance();
	static Macad::Occt::TopoDS_LockedShape^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class TopoDS_LockedShape

}; // namespace Occt
}; // namespace Macad
