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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2380;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1034;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18022_gshared (ShimEnumerator_t2380 * __this, Dictionary_2_t1034 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18022(__this, ___host, method) (( void (*) (ShimEnumerator_t2380 *, Dictionary_2_t1034 *, const MethodInfo*))ShimEnumerator__ctor_m18022_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18023_gshared (ShimEnumerator_t2380 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18023(__this, method) (( bool (*) (ShimEnumerator_t2380 *, const MethodInfo*))ShimEnumerator_MoveNext_m18023_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1100  ShimEnumerator_get_Entry_m18024_gshared (ShimEnumerator_t2380 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18024(__this, method) (( DictionaryEntry_t1100  (*) (ShimEnumerator_t2380 *, const MethodInfo*))ShimEnumerator_get_Entry_m18024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18025_gshared (ShimEnumerator_t2380 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18025(__this, method) (( Object_t * (*) (ShimEnumerator_t2380 *, const MethodInfo*))ShimEnumerator_get_Key_m18025_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18026_gshared (ShimEnumerator_t2380 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18026(__this, method) (( Object_t * (*) (ShimEnumerator_t2380 *, const MethodInfo*))ShimEnumerator_get_Value_m18026_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18027_gshared (ShimEnumerator_t2380 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18027(__this, method) (( Object_t * (*) (ShimEnumerator_t2380 *, const MethodInfo*))ShimEnumerator_get_Current_m18027_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m18028_gshared (ShimEnumerator_t2380 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18028(__this, method) (( void (*) (ShimEnumerator_t2380 *, const MethodInfo*))ShimEnumerator_Reset_m18028_gshared)(__this, method)
