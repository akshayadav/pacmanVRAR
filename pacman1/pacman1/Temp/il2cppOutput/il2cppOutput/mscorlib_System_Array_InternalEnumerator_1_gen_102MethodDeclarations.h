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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_102.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18600_gshared (InternalEnumerator_1_t2445 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18600(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2445 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18600_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18601_gshared (InternalEnumerator_1_t2445 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18601(__this, method) (( void (*) (InternalEnumerator_1_t2445 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18601_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_gshared (InternalEnumerator_1_t2445 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2445 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18603_gshared (InternalEnumerator_1_t2445 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18603(__this, method) (( void (*) (InternalEnumerator_1_t2445 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18603_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18604_gshared (InternalEnumerator_1_t2445 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18604(__this, method) (( bool (*) (InternalEnumerator_1_t2445 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18604_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::get_Current()
extern "C" ResourceInfo_t1404  InternalEnumerator_1_get_Current_m18605_gshared (InternalEnumerator_1_t2445 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18605(__this, method) (( ResourceInfo_t1404  (*) (InternalEnumerator_1_t2445 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18605_gshared)(__this, method)
