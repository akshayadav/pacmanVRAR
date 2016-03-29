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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1034;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t454;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2548;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2549;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t892;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2375;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17920_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17920(__this, method) (( void (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2__ctor_m17920_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17921_gshared (Dictionary_2_t1034 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17921(__this, ___comparer, method) (( void (*) (Dictionary_2_t1034 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17921_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17922_gshared (Dictionary_2_t1034 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17922(__this, ___capacity, method) (( void (*) (Dictionary_2_t1034 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17922_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17923_gshared (Dictionary_2_t1034 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17923(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1034 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2__ctor_m17923_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17924_gshared (Dictionary_2_t1034 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17924(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1034 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17924_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17925_gshared (Dictionary_2_t1034 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17925(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1034 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17925_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17926_gshared (Dictionary_2_t1034 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17926(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1034 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17926_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17927_gshared (Dictionary_2_t1034 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17927(__this, ___key, method) (( bool (*) (Dictionary_2_t1034 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17927_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17928_gshared (Dictionary_2_t1034 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17928(__this, ___key, method) (( void (*) (Dictionary_2_t1034 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17928_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17929_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17929(__this, method) (( bool (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17929_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17930_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17930(__this, method) (( Object_t * (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17930_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17931_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17931(__this, method) (( bool (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17931_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17932_gshared (Dictionary_2_t1034 * __this, KeyValuePair_2_t2373  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17932(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1034 *, KeyValuePair_2_t2373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17932_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17933_gshared (Dictionary_2_t1034 * __this, KeyValuePair_2_t2373  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17933(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1034 *, KeyValuePair_2_t2373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17933_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17934_gshared (Dictionary_2_t1034 * __this, KeyValuePair_2U5BU5D_t2548* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17934(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1034 *, KeyValuePair_2U5BU5D_t2548*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17934_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17935_gshared (Dictionary_2_t1034 * __this, KeyValuePair_2_t2373  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17935(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1034 *, KeyValuePair_2_t2373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17935_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17936_gshared (Dictionary_2_t1034 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17936(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1034 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17936_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17937_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17937(__this, method) (( Object_t * (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17937_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17938_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17938(__this, method) (( Object_t* (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17938_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17939_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17939(__this, method) (( Object_t * (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17939_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17940_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17940(__this, method) (( int32_t (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_get_Count_m17940_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17941_gshared (Dictionary_2_t1034 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17941(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1034 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17941_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17942_gshared (Dictionary_2_t1034 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17942(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1034 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m17942_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17943_gshared (Dictionary_2_t1034 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17943(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1034 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17943_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17944_gshared (Dictionary_2_t1034 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17944(__this, ___size, method) (( void (*) (Dictionary_2_t1034 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17944_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17945_gshared (Dictionary_2_t1034 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17945(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1034 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17945_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2373  Dictionary_2_make_pair_m17946_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17946(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2373  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m17946_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17947_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17947(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m17947_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17948_gshared (Dictionary_2_t1034 * __this, KeyValuePair_2U5BU5D_t2548* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17948(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1034 *, KeyValuePair_2U5BU5D_t2548*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17948_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17949_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17949(__this, method) (( void (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_Resize_m17949_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17950_gshared (Dictionary_2_t1034 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17950(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1034 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m17950_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17951_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17951(__this, method) (( void (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_Clear_m17951_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17952_gshared (Dictionary_2_t1034 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17952(__this, ___key, method) (( bool (*) (Dictionary_2_t1034 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17952_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17953_gshared (Dictionary_2_t1034 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17953(__this, ___value, method) (( bool (*) (Dictionary_2_t1034 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m17953_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17954_gshared (Dictionary_2_t1034 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17954(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1034 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2_GetObjectData_m17954_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17955_gshared (Dictionary_2_t1034 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17955(__this, ___sender, method) (( void (*) (Dictionary_2_t1034 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17955_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17956_gshared (Dictionary_2_t1034 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17956(__this, ___key, method) (( bool (*) (Dictionary_2_t1034 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17956_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17957_gshared (Dictionary_2_t1034 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17957(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1034 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17957_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2375 * Dictionary_2_get_Values_m17958_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17958(__this, method) (( ValueCollection_t2375 * (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_get_Values_m17958_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17959_gshared (Dictionary_2_t1034 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17959(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1034 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17959_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17960_gshared (Dictionary_2_t1034 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17960(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1034 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17960_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17961_gshared (Dictionary_2_t1034 * __this, KeyValuePair_2_t2373  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17961(__this, ___pair, method) (( bool (*) (Dictionary_2_t1034 *, KeyValuePair_2_t2373 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17961_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2377  Dictionary_2_GetEnumerator_m17962_gshared (Dictionary_2_t1034 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17962(__this, method) (( Enumerator_t2377  (*) (Dictionary_2_t1034 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17962_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1100  Dictionary_2_U3CCopyToU3Em__0_m17963_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17963(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1100  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17963_gshared)(__this /* static, unused */, ___key, ___value, method)
