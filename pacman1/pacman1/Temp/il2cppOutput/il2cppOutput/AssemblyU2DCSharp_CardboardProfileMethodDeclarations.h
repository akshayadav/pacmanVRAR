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

// CardboardProfile
struct CardboardProfile_t52;
// System.Single[]
struct SingleU5BU5D_t43;
// System.Double[]
struct DoubleU5BU5D_t101;
// System.Double[,]
struct DoubleU5BU2CU5D_t102;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizes.h"
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypes.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"

// System.Void CardboardProfile::.ctor()
extern "C" void CardboardProfile__ctor_m177 (CardboardProfile_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::.cctor()
extern "C" void CardboardProfile__cctor_m178 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile CardboardProfile::Clone()
extern "C" CardboardProfile_t52 * CardboardProfile_Clone_m179 (CardboardProfile_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardProfile::get_VerticalLensOffset()
extern "C" float CardboardProfile_get_VerticalLensOffset_m180 (CardboardProfile_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile CardboardProfile::GetKnownProfile(CardboardProfile/ScreenSizes,CardboardProfile/DeviceTypes)
extern "C" CardboardProfile_t52 * CardboardProfile_GetKnownProfile_m181 (Object_t * __this /* static, unused */, int32_t ___screenSize, int32_t ___deviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::GetLeftEyeVisibleTanAngles(System.Single[])
extern "C" void CardboardProfile_GetLeftEyeVisibleTanAngles_m182 (CardboardProfile_t52 * __this, SingleU5BU5D_t43* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardProfile::GetLeftEyeNoLensTanAngles(System.Single[])
extern "C" void CardboardProfile_GetLeftEyeNoLensTanAngles_m183 (CardboardProfile_t52 * __this, SingleU5BU5D_t43* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardProfile::GetLeftEyeVisibleScreenRect(System.Single[])
extern "C" Rect_t18  CardboardProfile_GetLeftEyeVisibleScreenRect_m184 (CardboardProfile_t52 * __this, SingleU5BU5D_t43* ___undistortedFrustum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardProfile::GetMaxRadius(System.Single[])
extern "C" float CardboardProfile_GetMaxRadius_m185 (Object_t * __this /* static, unused */, SingleU5BU5D_t43* ___tanAngleRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] CardboardProfile::solveLeastSquares(System.Double[,],System.Double[])
extern "C" DoubleU5BU5D_t101* CardboardProfile_solveLeastSquares_m186 (Object_t * __this /* static, unused */, DoubleU5BU2CU5D_t102* ___matA, DoubleU5BU5D_t101* ___vecY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(System.Single,System.Single,System.Single,System.Int32)
extern "C" Distortion_t48  CardboardProfile_ApproximateInverse_m187 (Object_t * __this /* static, unused */, float ___k1, float ___k2, float ___maxRadius, int32_t ___numSamples, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(CardboardProfile/Distortion,System.Single,System.Int32)
extern "C" Distortion_t48  CardboardProfile_ApproximateInverse_m188 (Object_t * __this /* static, unused */, Distortion_t48  ___distort, float ___maxRadius, int32_t ___numSamples, const MethodInfo* method) IL2CPP_METHOD_ATTR;
