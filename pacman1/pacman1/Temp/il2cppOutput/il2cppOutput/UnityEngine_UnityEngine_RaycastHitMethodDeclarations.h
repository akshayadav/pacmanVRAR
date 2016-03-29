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

// UnityEngine.Collider
struct Collider_t114;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" void RaycastHit_CalculateRaycastTexCoord_m1540 (Object_t * __this /* static, unused */, Vector2_t15 * ___output, Collider_t114 * ___col, Vector2_t15  ___uv, Vector3_t5  ___point, int32_t ___face, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C" void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m1541 (Object_t * __this /* static, unused */, Vector2_t15 * ___output, Collider_t114 * ___col, Vector2_t15 * ___uv, Vector3_t5 * ___point, int32_t ___face, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t5  RaycastHit_get_point_m1542 (RaycastHit_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t5  RaycastHit_get_normal_m1543 (RaycastHit_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m454 (RaycastHit_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern "C" Vector2_t15  RaycastHit_get_textureCoord_m455 (RaycastHit_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t114 * RaycastHit_get_collider_m1544 (RaycastHit_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
