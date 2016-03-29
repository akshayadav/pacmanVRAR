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

// UnityEngine.Gyroscope
struct Gyroscope_t155;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityEngine.Gyroscope::.ctor(System.Int32)
extern "C" void Gyroscope__ctor_m1389 (Gyroscope_t155 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Gyroscope::rotationRate_Internal(System.Int32)
extern "C" Vector3_t5  Gyroscope_rotationRate_Internal_m1390 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Gyroscope::rotationRateUnbiased_Internal(System.Int32)
extern "C" Vector3_t5  Gyroscope_rotationRateUnbiased_Internal_m1391 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Gyroscope::gravity_Internal(System.Int32)
extern "C" Vector3_t5  Gyroscope_gravity_Internal_m1392 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Gyroscope::userAcceleration_Internal(System.Int32)
extern "C" Vector3_t5  Gyroscope_userAcceleration_Internal_m1393 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Gyroscope::attitude_Internal(System.Int32)
extern "C" Quaternion_t58  Gyroscope_attitude_Internal_m1394 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Gyroscope::getEnabled_Internal(System.Int32)
extern "C" bool Gyroscope_getEnabled_Internal_m1395 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::setEnabled_Internal(System.Int32,System.Boolean)
extern "C" void Gyroscope_setEnabled_Internal_m1396 (Object_t * __this /* static, unused */, int32_t ___idx, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Gyroscope::getUpdateInterval_Internal(System.Int32)
extern "C" float Gyroscope_getUpdateInterval_Internal_m1397 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::setUpdateInterval_Internal(System.Int32,System.Single)
extern "C" void Gyroscope_setUpdateInterval_Internal_m1398 (Object_t * __this /* static, unused */, int32_t ___idx, float ___interval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Gyroscope::get_rotationRate()
extern "C" Vector3_t5  Gyroscope_get_rotationRate_m737 (Gyroscope_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Gyroscope::get_rotationRateUnbiased()
extern "C" Vector3_t5  Gyroscope_get_rotationRateUnbiased_m738 (Gyroscope_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Gyroscope::get_gravity()
extern "C" Vector3_t5  Gyroscope_get_gravity_m739 (Gyroscope_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Gyroscope::get_userAcceleration()
extern "C" Vector3_t5  Gyroscope_get_userAcceleration_m740 (Gyroscope_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
extern "C" Quaternion_t58  Gyroscope_get_attitude_m741 (Gyroscope_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Gyroscope::get_enabled()
extern "C" bool Gyroscope_get_enabled_m736 (Gyroscope_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
extern "C" void Gyroscope_set_enabled_m724 (Gyroscope_t155 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Gyroscope::get_updateInterval()
extern "C" float Gyroscope_get_updateInterval_m725 (Gyroscope_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::set_updateInterval(System.Single)
extern "C" void Gyroscope_set_updateInterval_m726 (Gyroscope_t155 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
