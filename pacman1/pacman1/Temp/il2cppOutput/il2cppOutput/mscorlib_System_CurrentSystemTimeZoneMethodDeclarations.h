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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1755;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1791;
// System.String[]
struct StringU5BU5D_t119;
// System.Globalization.DaylightTime
struct DaylightTime_t1270;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m11193 (CurrentSystemTimeZone_t1755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m11194 (CurrentSystemTimeZone_t1755 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m11195 (CurrentSystemTimeZone_t1755 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m11196 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1791** ___data, StringU5BU5D_t119** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1270 * CurrentSystemTimeZone_GetDaylightChanges_m11197 (CurrentSystemTimeZone_t1755 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t1011  CurrentSystemTimeZone_GetUtcOffset_m11198 (CurrentSystemTimeZone_t1755 * __this, DateTime_t323  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m11199 (CurrentSystemTimeZone_t1755 * __this, DaylightTime_t1270 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1270 * CurrentSystemTimeZone_GetDaylightTimeFromData_m11200 (CurrentSystemTimeZone_t1755 * __this, Int64U5BU5D_t1791* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
