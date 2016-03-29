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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_109.h"
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18642_gshared (InternalEnumerator_1_t2452 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18642(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2452 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18642_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18643_gshared (InternalEnumerator_1_t2452 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18643(__this, method) (( void (*) (InternalEnumerator_1_t2452 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18643_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18644_gshared (InternalEnumerator_1_t2452 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18644(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2452 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18644_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18645_gshared (InternalEnumerator_1_t2452 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18645(__this, method) (( void (*) (InternalEnumerator_1_t2452 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18645_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18646_gshared (InternalEnumerator_1_t2452 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18646(__this, method) (( bool (*) (InternalEnumerator_1_t2452 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18646_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1126  InternalEnumerator_1_get_Current_m18647_gshared (InternalEnumerator_1_t2452 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18647(__this, method) (( Decimal_t1126  (*) (InternalEnumerator_1_t2452 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18647_gshared)(__this, method)
