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

// StereoController
struct StereoController_t31;
// CardboardEye[]
struct CardboardEyeU5BU5D_t62;
// CardboardHead
struct CardboardHead_t38;
// UnityEngine.Camera
struct Camera_t30;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// CardboardEye
struct CardboardEye_t33;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void StereoController::.ctor()
extern "C" void StereoController__ctor_m227 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardEye[] StereoController::get_Eyes()
extern "C" CardboardEyeU5BU5D_t62* StereoController_get_Eyes_m228 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::get_Head()
extern "C" CardboardHead_t38 * StereoController_get_Head_m229 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C" void StereoController_InvalidateEyes_m230 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::UpdateStereoValues()
extern "C" void StereoController_UpdateStereoValues_m231 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera StereoController::get_camera()
extern "C" Camera_t30 * StereoController_get_camera_m232 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::set_camera(UnityEngine.Camera)
extern "C" void StereoController_set_camera_m233 (StereoController_t31 * __this, Camera_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C" void StereoController_Awake_m234 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C" void StereoController_AddStereoRig_m235 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern "C" void StereoController_CreateEye_m236 (StereoController_t31 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StereoController::ComputeStereoEyePosition(Cardboard/Eye,System.Single,System.Single)
extern "C" Vector3_t5  StereoController_ComputeStereoEyePosition_m237 (StereoController_t31 * __this, int32_t ___eye, float ___proj11, float ___zScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C" void StereoController_OnEnable_m238 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C" void StereoController_OnDisable_m239 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C" void StereoController_OnPreCull_m240 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C" Object_t * StereoController_EndOfFrame_m241 (StereoController_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__0_m242 (StereoController_t31 * __this, CardboardEye_t33 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C" CardboardHead_t38 * StereoController_U3Cget_HeadU3Em__1_m243 (Object_t * __this /* static, unused */, CardboardEye_t33 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<AddStereoRig>m__2(CardboardEye)
extern "C" bool StereoController_U3CAddStereoRigU3Em__2_m244 (StereoController_t31 * __this, CardboardEye_t33 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
