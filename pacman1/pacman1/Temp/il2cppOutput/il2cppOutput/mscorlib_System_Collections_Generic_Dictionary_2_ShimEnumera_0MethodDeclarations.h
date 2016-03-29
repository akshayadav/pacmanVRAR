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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2087;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2078;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14184_gshared (ShimEnumerator_t2087 * __this, Dictionary_2_t2078 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14184(__this, ___host, method) (( void (*) (ShimEnumerator_t2087 *, Dictionary_2_t2078 *, const MethodInfo*))ShimEnumerator__ctor_m14184_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14185_gshared (ShimEnumerator_t2087 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14185(__this, method) (( bool (*) (ShimEnumerator_t2087 *, const MethodInfo*))ShimEnumerator_MoveNext_m14185_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1100  ShimEnumerator_get_Entry_m14186_gshared (ShimEnumerator_t2087 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14186(__this, method) (( DictionaryEntry_t1100  (*) (ShimEnumerator_t2087 *, const MethodInfo*))ShimEnumerator_get_Entry_m14186_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14187_gshared (ShimEnumerator_t2087 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14187(__this, method) (( Object_t * (*) (ShimEnumerator_t2087 *, const MethodInfo*))ShimEnumerator_get_Key_m14187_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14188_gshared (ShimEnumerator_t2087 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14188(__this, method) (( Object_t * (*) (ShimEnumerator_t2087 *, const MethodInfo*))ShimEnumerator_get_Value_m14188_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14189_gshared (ShimEnumerator_t2087 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14189(__this, method) (( Object_t * (*) (ShimEnumerator_t2087 *, const MethodInfo*))ShimEnumerator_get_Current_m14189_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m14190_gshared (ShimEnumerator_t2087 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14190(__this, method) (( void (*) (ShimEnumerator_t2087 *, const MethodInfo*))ShimEnumerator_Reset_m14190_gshared)(__this, method)
