// Generated wrapper code for package SelectBasics

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  SelectBasics_PickResult
//---------------------------------------------------------------------
/// <summary>
/// This structure provides unified access to the results of Matches() method in all sensitive entities,
/// so that it defines a Depth (distance to the entity along picking ray) and a closest Point on entity.
/// </summary>
public ref class SelectBasics_PickResult sealed : public BaseClass<::SelectBasics_PickResult>
{

#ifdef Include_SelectBasics_PickResult_h
public:
	Include_SelectBasics_PickResult_h
#endif

public:
	SelectBasics_PickResult(::SelectBasics_PickResult* nativeInstance)
		: BaseClass<::SelectBasics_PickResult>( nativeInstance, true )
	{}

	SelectBasics_PickResult(::SelectBasics_PickResult& nativeInstance)
		: BaseClass<::SelectBasics_PickResult>( &nativeInstance, false )
	{}

	property ::SelectBasics_PickResult* NativeInstance
	{
		::SelectBasics_PickResult* get()
		{
			return static_cast<::SelectBasics_PickResult*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Empty constructor defining an invalid result.
	/// </summary>
SelectBasics_PickResult();
		/// <summary>
	/// Constructor with initialization.
	/// </summary>
SelectBasics_PickResult(double theDepth, double theDistToCenter, Macad::Occt::Pnt theObjPickedPnt);
	SelectBasics_PickResult(Macad::Occt::SelectBasics_PickResult^ parameter1);
		/// <summary>
	/// Return closest result between two Pick Results according to Depth value.
	/// </summary>
static Macad::Occt::SelectBasics_PickResult^ Min(Macad::Occt::SelectBasics_PickResult^ thePickResult1, Macad::Occt::SelectBasics_PickResult^ thePickResult2);
		/// <summary>
	/// Return TRUE if result was been defined.
	/// </summary>
bool IsValid();
		/// <summary>
	/// Reset depth value.
	/// </summary>
void Invalidate();
		/// <summary>
	/// Return depth along picking ray.
	/// </summary>
double Depth();
		/// <summary>
	/// Set depth along picking ray.
	/// </summary>
void SetDepth(double theDepth);
		/// <summary>
	/// Return TRUE if Picked Point lying on detected entity was set.
	/// </summary>
bool HasPickedPoint();
		/// <summary>
	/// Return picked point lying on detected entity.
	/// WARNING! Point is defined in local coordinate system and should be translated into World System before usage!
	/// </summary>
Macad::Occt::Pnt PickedPoint();
		/// <summary>
	/// Set picked point.
	/// </summary>
void SetPickedPoint(Macad::Occt::Pnt theObjPickedPnt);
		/// <summary>
	/// Return distance to geometry center (auxiliary value for comparing results).
	/// </summary>
double DistToGeomCenter();
		/// <summary>
	/// Set distance to geometry center.
	/// </summary>
void SetDistToGeomCenter(double theDistToCenter);
	/* Method skipped due to unknown mapping: NCollection_Vec3<float> SurfaceNormal() */
	/* Method skipped due to unknown mapping: void SetSurfaceNormal(NCollection_Vec3<float> theNormal, ) */
		/// <summary>
	/// Set surface normal at picked point.
	/// </summary>
void SetSurfaceNormal(Macad::Occt::Vec theNormal);
}; // class SelectBasics_PickResult

//---------------------------------------------------------------------
//  Class  SelectBasics
//---------------------------------------------------------------------
/// <summary>
/// interface class for dynamic selection
/// </summary>
public ref class SelectBasics sealed : public BaseClass<::SelectBasics>
{

#ifdef Include_SelectBasics_h
public:
	Include_SelectBasics_h
#endif

public:
	SelectBasics(::SelectBasics* nativeInstance)
		: BaseClass<::SelectBasics>( nativeInstance, true )
	{}

	SelectBasics(::SelectBasics& nativeInstance)
		: BaseClass<::SelectBasics>( &nativeInstance, false )
	{}

	property ::SelectBasics* NativeInstance
	{
		::SelectBasics* get()
		{
			return static_cast<::SelectBasics*>(_NativeInstance);
		}
	}

public:
	SelectBasics();
	SelectBasics(Macad::Occt::SelectBasics^ parameter1);
		/// <summary>
	/// Structure to provide all-in-one result of selection of sensitive for "Matches" method of Select3D_SensitiveEntity.
	/// </summary>
static int MaxOwnerPriority();
	static int MinOwnerPriority();
}; // class SelectBasics

//---------------------------------------------------------------------
//  Class  SelectBasics_SelectingVolumeManager
//---------------------------------------------------------------------
/// <summary>
/// This class provides an interface for selecting volume manager,
/// which is responsible for all overlap detection methods and
/// calculation of minimum depth, distance to center of geometry
/// and detected closest point on entity.
/// </summary>
public ref class SelectBasics_SelectingVolumeManager : public BaseClass<::SelectBasics_SelectingVolumeManager>
{

#ifdef Include_SelectBasics_SelectingVolumeManager_h
public:
	Include_SelectBasics_SelectingVolumeManager_h
#endif

public:
	SelectBasics_SelectingVolumeManager(::SelectBasics_SelectingVolumeManager* nativeInstance)
		: BaseClass<::SelectBasics_SelectingVolumeManager>( nativeInstance, true )
	{}

	SelectBasics_SelectingVolumeManager(::SelectBasics_SelectingVolumeManager& nativeInstance)
		: BaseClass<::SelectBasics_SelectingVolumeManager>( &nativeInstance, false )
	{}

	property ::SelectBasics_SelectingVolumeManager* NativeInstance
	{
		::SelectBasics_SelectingVolumeManager* get()
		{
			return static_cast<::SelectBasics_SelectingVolumeManager*>(_NativeInstance);
		}
	}

public:
		/// <summary>
	/// Empty constructor.
	/// </summary>
SelectBasics_SelectingVolumeManager();
	SelectBasics_SelectingVolumeManager(Macad::Occt::SelectBasics_SelectingVolumeManager^ parameter1);
		/// <summary>
	/// Return selection type.
	/// </summary>
int GetActiveSelectionType();
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, SelectBasics_PickResult thePickResult, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, Standard_Boolean theInside, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean OverlapsBox(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, Standard_Boolean theInside, ) */
		/// <summary>
	/// Returns true if selecting volume is overlapped by point thePnt
	/// </summary>
bool OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectBasics_PickResult^ thePickResult);
		/// <summary>
	/// Returns true if selecting volume is overlapped by point thePnt.
	/// Does not perform depth calculation, so this method is defined as
	/// helper function for inclusion test.
	/// </summary>
bool OverlapsPoint(Macad::Occt::Pnt thePnt);
		/// <summary>
	/// Returns true if selecting volume is overlapped by planar convex polygon, which points
	/// are stored in theArrayOfPts, taking into account sensitivity type theSensType
	/// </summary>
bool OverlapsPolygon(Macad::Occt::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult);
		/// <summary>
	/// Returns true if selecting volume is overlapped by line segment with start point at thePt1
	/// and end point at thePt2
	/// </summary>
bool OverlapsSegment(Macad::Occt::Pnt thePt1, Macad::Occt::Pnt thePt2, Macad::Occt::SelectBasics_PickResult^ thePickResult);
		/// <summary>
	/// Returns true if selecting volume is overlapped by triangle with vertices thePt1,
	/// thePt2 and thePt3, taking into account sensitivity type theSensType
	/// </summary>
bool OverlapsTriangle(Macad::Occt::Pnt thePt1, Macad::Occt::Pnt thePt2, Macad::Occt::Pnt thePt3, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult);
		/// <summary>
	/// Returns true if selecting volume is overlapped by sphere with center theCenter
	/// and radius theRadius
	/// </summary>
bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectBasics_PickResult^ thePickResult);
		/// <summary>
	/// Returns true if selecting volume is overlapped by sphere with center theCenter
	/// and radius theRadius
	/// </summary>
bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside);
		/// <summary>
	/// Returns true if selecting volume is overlapped by sphere with center theCenter
	/// and radius theRadius
	/// </summary>
bool OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius);
		/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, Macad::Occt::SelectBasics_PickResult^ thePickResult);
		/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool% theInside);
		/// <summary>
	/// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
	/// and theTopRad, height theHeight and transformation to apply theTrsf.
	/// </summary>
bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf);
		/// <summary>
	/// Calculates distance from 3d projection of user-defined selection point
	/// to the given point theCOG
	/// </summary>
double DistToGeometryCenter(Macad::Occt::Pnt theCOG);
		/// <summary>
	/// Return 3D point corresponding to specified depth within picking ray.
	/// </summary>
Macad::Occt::Pnt DetectedPoint(double theDepth);
		/// <summary>
	/// Returns flag indicating if partial overlapping of entities is allowed or should be rejected.
	/// </summary>
bool IsOverlapAllowed();
		/// <summary>
	/// Valid only for point and rectangular selection.
	/// Returns projection of 2d mouse picked point or projection
	/// of center of 2d rectangle (for point and rectangular selection
	/// correspondingly) onto near view frustum plane
	/// </summary>
Macad::Occt::Pnt GetNearPickedPnt();
		/// <summary>
	/// Valid only for point and rectangular selection.
	/// Returns projection of 2d mouse picked point or projection
	/// of center of 2d rectangle (for point and rectangular selection
	/// correspondingly) onto far view frustum plane
	/// </summary>
Macad::Occt::Pnt GetFarPickedPnt();
		/// <summary>
	/// Valid only for point and rectangular selection.
	/// Returns view ray direction
	/// </summary>
Macad::Occt::Dir GetViewRayDirection();
		/// <summary>
	/// Checks if it is possible to scale current active selecting volume
	/// </summary>
bool IsScalableActiveVolume();
		/// <summary>
	/// Returns mouse coordinates for Point selection mode.
	/// </summary>
	/// <returns>
	/// infinite point in case of unsupport of mouse position for this active selection volume.
	/// </returns>
Macad::Occt::Pnt2d GetMousePosition();
	/* Method skipped due to unknown mapping: void GetPlanes(NCollection_Vector<NCollection_Vec4<double>> thePlaneEquations, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Overlaps(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, SelectBasics_PickResult thePickResult, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Overlaps(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, Standard_Boolean theInside, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Overlaps(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, Standard_Boolean theInside, ) */
	bool Overlaps(Macad::Occt::Pnt thePnt, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool Overlaps(Macad::Occt::Pnt thePnt);
	bool Overlaps(Macad::Occt::TColgp_HArray1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool Overlaps(Macad::Occt::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool Overlaps(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool Overlaps(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::Pnt thePnt3, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult);
}; // class SelectBasics_SelectingVolumeManager

}; // namespace Occt
}; // namespace Macad
