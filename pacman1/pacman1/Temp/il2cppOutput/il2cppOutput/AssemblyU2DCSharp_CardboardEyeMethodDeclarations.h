#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CardboardEye
struct CardboardEye_t33;
// StereoController
struct StereoController_t31;
// CardboardHead
struct CardboardHead_t38;
// UnityEngine.Camera
struct Camera_t30;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void CardboardEye::.ctor()
extern "C" void CardboardEye__ctor_m134 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C" StereoController_t31 * CardboardEye_get_Controller_m135 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C" CardboardHead_t38 * CardboardEye_get_Head_m136 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardEye::get_camera()
extern "C" Camera_t30 * CardboardEye_get_camera_m137 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::set_camera(UnityEngine.Camera)
extern "C" void CardboardEye_set_camera_m138 (CardboardEye_t33 * __this, Camera_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C" void CardboardEye_Awake_m139 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C" void CardboardEye_Start_m140 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&)
extern "C" void CardboardEye_FixProjection_m141 (CardboardEye_t33 * __this, Matrix4x4_t36 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardEye::FixViewport(UnityEngine.Rect)
extern "C" Rect_t18  CardboardEye_FixViewport_m142 (CardboardEye_t33 * __this, Rect_t18  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::UpdateStereoValues()
extern "C" void CardboardEye_UpdateStereoValues_m143 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::SetupStereo()
extern "C" void CardboardEye_SetupStereo_m144 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C" void CardboardEye_OnPreCull_m145 (CardboardEye_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m146 (CardboardEye_t33 * __this, StereoController_t31 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
