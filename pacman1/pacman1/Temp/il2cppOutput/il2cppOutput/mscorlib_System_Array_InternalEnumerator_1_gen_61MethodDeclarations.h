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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61.h"
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17683_gshared (InternalEnumerator_1_t2349 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17683(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2349 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17683_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17684_gshared (InternalEnumerator_1_t2349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17684(__this, method) (( void (*) (InternalEnumerator_1_t2349 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17684_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17685_gshared (InternalEnumerator_1_t2349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17685(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2349 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17685_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17686_gshared (InternalEnumerator_1_t2349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17686(__this, method) (( void (*) (InternalEnumerator_1_t2349 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17686_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17687_gshared (InternalEnumerator_1_t2349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17687(__this, method) (( bool (*) (InternalEnumerator_1_t2349 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17687_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t2348  InternalEnumerator_1_get_Current_m17688_gshared (InternalEnumerator_1_t2349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17688(__this, method) (( ArraySegment_1_t2348  (*) (InternalEnumerator_1_t2349 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17688_gshared)(__this, method)
