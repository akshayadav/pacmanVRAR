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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2071;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2059;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13994_gshared (ShimEnumerator_t2071 * __this, Dictionary_2_t2059 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13994(__this, ___host, method) (( void (*) (ShimEnumerator_t2071 *, Dictionary_2_t2059 *, const MethodInfo*))ShimEnumerator__ctor_m13994_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13995_gshared (ShimEnumerator_t2071 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13995(__this, method) (( bool (*) (ShimEnumerator_t2071 *, const MethodInfo*))ShimEnumerator_MoveNext_m13995_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1100  ShimEnumerator_get_Entry_m13996_gshared (ShimEnumerator_t2071 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13996(__this, method) (( DictionaryEntry_t1100  (*) (ShimEnumerator_t2071 *, const MethodInfo*))ShimEnumerator_get_Entry_m13996_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13997_gshared (ShimEnumerator_t2071 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13997(__this, method) (( Object_t * (*) (ShimEnumerator_t2071 *, const MethodInfo*))ShimEnumerator_get_Key_m13997_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13998_gshared (ShimEnumerator_t2071 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13998(__this, method) (( Object_t * (*) (ShimEnumerator_t2071 *, const MethodInfo*))ShimEnumerator_get_Value_m13998_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13999_gshared (ShimEnumerator_t2071 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13999(__this, method) (( Object_t * (*) (ShimEnumerator_t2071 *, const MethodInfo*))ShimEnumerator_get_Current_m13999_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m14000_gshared (ShimEnumerator_t2071 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14000(__this, method) (( void (*) (ShimEnumerator_t2071 *, const MethodInfo*))ShimEnumerator_Reset_m14000_gshared)(__this, method)
