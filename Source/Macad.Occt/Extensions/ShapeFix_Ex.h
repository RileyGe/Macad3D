﻿#define Include_ShapeFix_Wire_h \
	void SetModifyTopologyMode(bool value) { NativeInstance->ModifyTopologyMode() = value; } \
	void SetModifyGeometryMode(bool value) { NativeInstance->ModifyGeometryMode() = value; } \
	void SetModifyRemoveLoopMode(int value) { NativeInstance->ModifyRemoveLoopMode() = value; } \
	void SetClosedWireMode(bool value) { NativeInstance->ClosedWireMode() = value; } \
	void SetPreferencePCurveMode(bool value) { NativeInstance->PreferencePCurveMode() = value; } \
	void SetFixGapsByRangesMode(bool value) { NativeInstance->FixGapsByRangesMode() = value; } \
	void SetFixReorderMode(int value) { NativeInstance->FixReorderMode() = value; } \
	void SetFixSmallMode(int value) { NativeInstance->FixSmallMode() = value; } \
	void SetFixConnectedMode(int value) { NativeInstance->FixConnectedMode() = value; } \
	void SetFixEdgeCurvesMode(int value) { NativeInstance->FixEdgeCurvesMode() = value; } \
	void SetFixDegeneratedMode(int value) { NativeInstance->FixDegeneratedMode() = value; } \
	void SetFixSelfIntersectionMode(int value) { NativeInstance->FixSelfIntersectionMode() = value; } \
	void SetFixLackingMode(int value) { NativeInstance->FixLackingMode() = value; } \
	void SetFixGaps3dMode(int value) { NativeInstance->FixGaps3dMode() = value; } \
	void SetFixGaps2dMode(int value) { NativeInstance->FixGaps2dMode() = value; } \
	void SetFixReversed2dMode(int value) { NativeInstance->FixReversed2dMode() = value; } \
	void SetFixRemovePCurveMode(int value) { NativeInstance->FixRemovePCurveMode() = value; } \
	void SetFixAddPCurveMode(int value) { NativeInstance->FixAddPCurveMode() = value; } \
	void SetFixRemoveCurve3dMode(int value) { NativeInstance->FixRemoveCurve3dMode() = value; } \
	void SetFixAddCurve3dMode(int value) { NativeInstance->FixAddCurve3dMode() = value; } \
	void SetFixSeamMode(int value) { NativeInstance->FixSeamMode() = value; } \
	void SetFixShiftedMode(int value) { NativeInstance->FixShiftedMode() = value; } \
	void SetFixSameParameterMode(int value) { NativeInstance->FixSameParameterMode() = value; } \
	void SetFixVertexToleranceMode(int value) { NativeInstance->FixVertexToleranceMode() = value; } \
	void SetFixNotchedEdgesMode(int value) { NativeInstance->FixNotchedEdgesMode() = value; } \
	void SetFixSelfIntersectingEdgeMode(int value) { NativeInstance->FixSelfIntersectingEdgeMode() = value; } \
	void SetFixIntersectingEdgesMode(int value) { NativeInstance->FixIntersectingEdgesMode() = value; } \
	void SetFixNonAdjacentIntersectingEdgesMode (int value) { NativeInstance->FixNonAdjacentIntersectingEdgesMode() = value; } \
	void SetFixTailMode(int value) { NativeInstance->FixTailMode() = value; } 
