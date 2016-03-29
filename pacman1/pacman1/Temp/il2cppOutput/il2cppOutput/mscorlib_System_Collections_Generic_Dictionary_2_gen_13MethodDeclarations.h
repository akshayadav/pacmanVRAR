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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2061;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t454;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2519;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2520;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t892;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2131;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m14664_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14664(__this, method) (( void (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2__ctor_m14664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14666_gshared (Dictionary_2_t2126 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14666(__this, ___comparer, method) (( void (*) (Dictionary_2_t2126 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14666_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14668_gshared (Dictionary_2_t2126 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14668(__this, ___capacity, method) (( void (*) (Dictionary_2_t2126 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14668_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14670_gshared (Dictionary_2_t2126 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14670(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2126 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2__ctor_m14670_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14672_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14672(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14672_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14674_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14674(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14674_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14676_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14676(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14676_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14678_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14678(__this, ___key, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14678_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14680_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14680(__this, ___key, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14680_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14682_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14682(__this, method) (( bool (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14684_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14684(__this, method) (( Object_t * (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14684_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14686_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14686(__this, method) (( bool (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14688_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2_t2128  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14688(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2126 *, KeyValuePair_2_t2128 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14688_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14690_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2_t2128  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14690(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2126 *, KeyValuePair_2_t2128 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14690_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14692_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2U5BU5D_t2519* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14692(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2126 *, KeyValuePair_2U5BU5D_t2519*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14692_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14694_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2_t2128  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14694(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2126 *, KeyValuePair_2_t2128 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14694_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14696_gshared (Dictionary_2_t2126 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14696(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2126 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14696_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14698_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14698(__this, method) (( Object_t * (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14698_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14700_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14700(__this, method) (( Object_t* (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14700_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14702_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14702(__this, method) (( Object_t * (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14702_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14704_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14704(__this, method) (( int32_t (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_get_Count_m14704_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14706_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14706(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14706_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14708_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14708(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14708_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14710_gshared (Dictionary_2_t2126 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14710(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2126 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14710_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14712_gshared (Dictionary_2_t2126 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14712(__this, ___size, method) (( void (*) (Dictionary_2_t2126 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14712_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14714_gshared (Dictionary_2_t2126 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14714(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2126 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14714_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2128  Dictionary_2_make_pair_m14716_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14716(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2128  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14716_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14718_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14718(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14718_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14720_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2U5BU5D_t2519* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14720(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2126 *, KeyValuePair_2U5BU5D_t2519*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14720_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m14722_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14722(__this, method) (( void (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_Resize_m14722_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14724_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14724(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14724_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m14726_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14726(__this, method) (( void (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_Clear_m14726_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14728_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14728(__this, ___key, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14728_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14730_gshared (Dictionary_2_t2126 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14730(__this, ___value, method) (( bool (*) (Dictionary_2_t2126 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14730_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14732_gshared (Dictionary_2_t2126 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14732(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2126 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2_GetObjectData_m14732_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14734_gshared (Dictionary_2_t2126 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14734(__this, ___sender, method) (( void (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14734_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14736_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14736(__this, ___key, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14736_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14738_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14738(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2126 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14738_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2131 * Dictionary_2_get_Values_m14740_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14740(__this, method) (( ValueCollection_t2131 * (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_get_Values_m14740_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14742_gshared (Dictionary_2_t2126 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14742(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14742_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14744_gshared (Dictionary_2_t2126 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14744(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2126 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14744_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14746_gshared (Dictionary_2_t2126 * __this, KeyValuePair_2_t2128  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14746(__this, ___pair, method) (( bool (*) (Dictionary_2_t2126 *, KeyValuePair_2_t2128 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14746_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2133  Dictionary_2_GetEnumerator_m14748_gshared (Dictionary_2_t2126 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14748(__this, method) (( Enumerator_t2133  (*) (Dictionary_2_t2126 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14748_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1100  Dictionary_2_U3CCopyToU3Em__0_m14750_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14750(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1100  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14750_gshared)(__this /* static, unused */, ___key, ___value, method)
