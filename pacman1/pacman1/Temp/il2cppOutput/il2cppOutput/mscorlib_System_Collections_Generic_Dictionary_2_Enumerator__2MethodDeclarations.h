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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2078;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14158_gshared (Enumerator_t2084 * __this, Dictionary_2_t2078 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14158(__this, ___dictionary, method) (( void (*) (Enumerator_t2084 *, Dictionary_2_t2078 *, const MethodInfo*))Enumerator__ctor_m14158_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14159_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14159(__this, method) (( Object_t * (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14159_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14160_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14160(__this, method) (( void (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14160_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1100  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14161_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14161(__this, method) (( DictionaryEntry_t1100  (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14162_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14162(__this, method) (( Object_t * (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14162_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14163_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14163(__this, method) (( Object_t * (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14164_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14164(__this, method) (( bool (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_MoveNext_m14164_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2080  Enumerator_get_Current_m14165_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14165(__this, method) (( KeyValuePair_2_t2080  (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_get_Current_m14165_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m14166_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14166(__this, method) (( int32_t (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_get_CurrentKey_m14166_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14167_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14167(__this, method) (( Object_t * (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_get_CurrentValue_m14167_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m14168_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14168(__this, method) (( void (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_Reset_m14168_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14169_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14169(__this, method) (( void (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_VerifyState_m14169_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14170_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14170(__this, method) (( void (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_VerifyCurrent_m14170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14171_gshared (Enumerator_t2084 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14171(__this, method) (( void (*) (Enumerator_t2084 *, const MethodInfo*))Enumerator_Dispose_m14171_gshared)(__this, method)
