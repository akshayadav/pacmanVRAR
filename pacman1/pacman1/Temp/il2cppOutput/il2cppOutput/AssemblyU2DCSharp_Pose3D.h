﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// Pose3D
struct  Pose3D_t57  : public Object_t
{
	// UnityEngine.Vector3 Pose3D::<Position>k__BackingField
	Vector3_t5  ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion Pose3D::<Orientation>k__BackingField
	Quaternion_t58  ___U3COrientationU3Ek__BackingField_2;
	// UnityEngine.Matrix4x4 Pose3D::<Matrix>k__BackingField
	Matrix4x4_t36  ___U3CMatrixU3Ek__BackingField_3;
};
struct Pose3D_t57_StaticFields{
	// UnityEngine.Matrix4x4 Pose3D::flipZ
	Matrix4x4_t36  ___flipZ_0;
};
