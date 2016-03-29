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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2362;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2352;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17846_gshared (ShimEnumerator_t2362 * __this, Dictionary_2_t2352 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17846(__this, ___host, method) (( void (*) (ShimEnumerator_t2362 *, Dictionary_2_t2352 *, const MethodInfo*))ShimEnumerator__ctor_m17846_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17847_gshared (ShimEnumerator_t2362 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17847(__this, method) (( bool (*) (ShimEnumerator_t2362 *, const MethodInfo*))ShimEnumerator_MoveNext_m17847_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1100  ShimEnumerator_get_Entry_m17848_gshared (ShimEnumerator_t2362 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17848(__this, method) (( DictionaryEntry_t1100  (*) (ShimEnumerator_t2362 *, const MethodInfo*))ShimEnumerator_get_Entry_m17848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17849_gshared (ShimEnumerator_t2362 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17849(__this, method) (( Object_t * (*) (ShimEnumerator_t2362 *, const MethodInfo*))ShimEnumerator_get_Key_m17849_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17850_gshared (ShimEnumerator_t2362 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17850(__this, method) (( Object_t * (*) (ShimEnumerator_t2362 *, const MethodInfo*))ShimEnumerator_get_Value_m17850_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17851_gshared (ShimEnumerator_t2362 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17851(__this, method) (( Object_t * (*) (ShimEnumerator_t2362 *, const MethodInfo*))ShimEnumerator_get_Current_m17851_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m17852_gshared (ShimEnumerator_t2362 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m17852(__this, method) (( void (*) (ShimEnumerator_t2362 *, const MethodInfo*))ShimEnumerator_Reset_m17852_gshared)(__this, method)
