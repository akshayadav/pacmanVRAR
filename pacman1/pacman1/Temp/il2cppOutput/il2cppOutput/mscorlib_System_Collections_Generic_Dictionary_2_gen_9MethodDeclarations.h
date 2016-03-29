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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2059;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2061;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t454;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2508;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2509;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t892;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2065;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13838_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13838(__this, method) (( void (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2__ctor_m13838_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13840_gshared (Dictionary_2_t2059 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13840(__this, ___comparer, method) (( void (*) (Dictionary_2_t2059 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13840_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13841_gshared (Dictionary_2_t2059 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13841(__this, ___capacity, method) (( void (*) (Dictionary_2_t2059 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13841_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13843_gshared (Dictionary_2_t2059 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13843(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2059 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2__ctor_m13843_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13845_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13845(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13845_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13847_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13847(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2059 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13847_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13849_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13849(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2059 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13849_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13851_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13851(__this, ___key, method) (( bool (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13851_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13853_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13853(__this, ___key, method) (( void (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13853_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13855_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13855(__this, method) (( bool (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13855_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13857_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13857(__this, method) (( Object_t * (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13857_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13859_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13859(__this, method) (( bool (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13859_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13861_gshared (Dictionary_2_t2059 * __this, KeyValuePair_2_t2062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13861(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2059 *, KeyValuePair_2_t2062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13861_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13863_gshared (Dictionary_2_t2059 * __this, KeyValuePair_2_t2062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13863(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2059 *, KeyValuePair_2_t2062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13863_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13865_gshared (Dictionary_2_t2059 * __this, KeyValuePair_2U5BU5D_t2508* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13865(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2059 *, KeyValuePair_2U5BU5D_t2508*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13865_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13867_gshared (Dictionary_2_t2059 * __this, KeyValuePair_2_t2062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13867(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2059 *, KeyValuePair_2_t2062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13867_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13869_gshared (Dictionary_2_t2059 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13869(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2059 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13869_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13871_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13871(__this, method) (( Object_t * (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13871_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13873_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13873(__this, method) (( Object_t* (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13873_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13875_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13875(__this, method) (( Object_t * (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13875_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13877_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13877(__this, method) (( int32_t (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_get_Count_m13877_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13879_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13879(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13879_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13881_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13881(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2059 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13881_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13883_gshared (Dictionary_2_t2059 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13883(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2059 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13883_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13885_gshared (Dictionary_2_t2059 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13885(__this, ___size, method) (( void (*) (Dictionary_2_t2059 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13885_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13887_gshared (Dictionary_2_t2059 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13887(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2059 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13887_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2062  Dictionary_2_make_pair_m13889_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13889(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2062  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13889_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13891_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13891(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13891_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13893_gshared (Dictionary_2_t2059 * __this, KeyValuePair_2U5BU5D_t2508* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13893(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2059 *, KeyValuePair_2U5BU5D_t2508*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13893_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13895_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13895(__this, method) (( void (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_Resize_m13895_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13897_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13897(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2059 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m13897_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13899_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13899(__this, method) (( void (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_Clear_m13899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13901_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13901(__this, ___key, method) (( bool (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13901_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13903_gshared (Dictionary_2_t2059 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13903(__this, ___value, method) (( bool (*) (Dictionary_2_t2059 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13903_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13905_gshared (Dictionary_2_t2059 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13905(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2059 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2_GetObjectData_m13905_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13907_gshared (Dictionary_2_t2059 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13907(__this, ___sender, method) (( void (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13907_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13909_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13909(__this, ___key, method) (( bool (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13909_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13911_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13911(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2059 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13911_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2065 * Dictionary_2_get_Values_m13913_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13913(__this, method) (( ValueCollection_t2065 * (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_get_Values_m13913_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13915_gshared (Dictionary_2_t2059 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13915(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13915_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13917_gshared (Dictionary_2_t2059 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13917(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2059 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13917_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13919_gshared (Dictionary_2_t2059 * __this, KeyValuePair_2_t2062  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13919(__this, ___pair, method) (( bool (*) (Dictionary_2_t2059 *, KeyValuePair_2_t2062 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13919_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2067  Dictionary_2_GetEnumerator_m13921_gshared (Dictionary_2_t2059 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13921(__this, method) (( Enumerator_t2067  (*) (Dictionary_2_t2059 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13921_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1100  Dictionary_2_U3CCopyToU3Em__0_m13923_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13923(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1100  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13923_gshared)(__this /* static, unused */, ___key, ___value, method)
