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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2126;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14789_gshared (Enumerator_t2133 * __this, Dictionary_2_t2126 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14789(__this, ___dictionary, method) (( void (*) (Enumerator_t2133 *, Dictionary_2_t2126 *, const MethodInfo*))Enumerator__ctor_m14789_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14790_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14790(__this, method) (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14790_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14791_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14791(__this, method) (( void (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14791_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1100  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14792_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14792(__this, method) (( DictionaryEntry_t1100  (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14792_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14793_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14793(__this, method) (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14793_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14794_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14794(__this, method) (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14794_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14795_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14795(__this, method) (( bool (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_MoveNext_m14795_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2128  Enumerator_get_Current_m14796_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14796(__this, method) (( KeyValuePair_2_t2128  (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_get_Current_m14796_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14797_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14797(__this, method) (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_get_CurrentKey_m14797_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m14798_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14798(__this, method) (( int32_t (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_get_CurrentValue_m14798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m14799_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14799(__this, method) (( void (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_Reset_m14799_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m14800_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14800(__this, method) (( void (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_VerifyState_m14800_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14801_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14801(__this, method) (( void (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_VerifyCurrent_m14801_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m14802_gshared (Enumerator_t2133 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14802(__this, method) (( void (*) (Enumerator_t2133 *, const MethodInfo*))Enumerator_Dispose_m14802_gshared)(__this, method)
