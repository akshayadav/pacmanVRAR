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

// System.Reflection.Binder
struct Binder_t476;
// System.Object[]
struct ObjectU5BU5D_t151;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t485;
// System.Globalization.CultureInfo
struct CultureInfo_t478;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t484;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1796;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8713 (Binder_t476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m8714 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t476 * Binder_get_DefaultBinder_m8715 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m8716 (Object_t * __this /* static, unused */, Binder_t476 * ___binder, ObjectU5BU5D_t151* ___args, ParameterInfoU5BU5D_t485* ___pinfo, CultureInfo_t478 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8717 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t484 * Binder_FindMostDerivedMatch_m8718 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1796* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
