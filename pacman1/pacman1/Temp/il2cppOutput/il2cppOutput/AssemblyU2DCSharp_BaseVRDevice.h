﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BaseVRDevice
struct BaseVRDevice_t32;
// MutablePose3D
struct MutablePose3D_t59;
// CardboardProfile
struct CardboardProfile_t52;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// BaseVRDevice
struct  BaseVRDevice_t32  : public Object_t
{
	// MutablePose3D BaseVRDevice::headPose
	MutablePose3D_t59 * ___headPose_1;
	// MutablePose3D BaseVRDevice::leftEyePose
	MutablePose3D_t59 * ___leftEyePose_2;
	// MutablePose3D BaseVRDevice::rightEyePose
	MutablePose3D_t59 * ___rightEyePose_3;
	// UnityEngine.Matrix4x4 BaseVRDevice::leftEyeDistortedProjection
	Matrix4x4_t36  ___leftEyeDistortedProjection_4;
	// UnityEngine.Matrix4x4 BaseVRDevice::rightEyeDistortedProjection
	Matrix4x4_t36  ___rightEyeDistortedProjection_5;
	// UnityEngine.Matrix4x4 BaseVRDevice::leftEyeUndistortedProjection
	Matrix4x4_t36  ___leftEyeUndistortedProjection_6;
	// UnityEngine.Matrix4x4 BaseVRDevice::rightEyeUndistortedProjection
	Matrix4x4_t36  ___rightEyeUndistortedProjection_7;
	// UnityEngine.Rect BaseVRDevice::leftEyeDistortedViewport
	Rect_t18  ___leftEyeDistortedViewport_8;
	// UnityEngine.Rect BaseVRDevice::rightEyeDistortedViewport
	Rect_t18  ___rightEyeDistortedViewport_9;
	// UnityEngine.Rect BaseVRDevice::leftEyeUndistortedViewport
	Rect_t18  ___leftEyeUndistortedViewport_10;
	// UnityEngine.Rect BaseVRDevice::rightEyeUndistortedViewport
	Rect_t18  ___rightEyeUndistortedViewport_11;
	// UnityEngine.Vector2 BaseVRDevice::recommendedTextureSize
	Vector2_t15  ___recommendedTextureSize_12;
	// System.Boolean BaseVRDevice::triggered
	bool ___triggered_13;
	// System.Boolean BaseVRDevice::tilted
	bool ___tilted_14;
	// System.Boolean BaseVRDevice::profileChanged
	bool ___profileChanged_15;
	// System.Boolean BaseVRDevice::backButtonPressed
	bool ___backButtonPressed_16;
	// CardboardProfile BaseVRDevice::<Profile>k__BackingField
	CardboardProfile_t52 * ___U3CProfileU3Ek__BackingField_17;
};
struct BaseVRDevice_t32_StaticFields{
	// BaseVRDevice BaseVRDevice::device
	BaseVRDevice_t32 * ___device_0;
};
