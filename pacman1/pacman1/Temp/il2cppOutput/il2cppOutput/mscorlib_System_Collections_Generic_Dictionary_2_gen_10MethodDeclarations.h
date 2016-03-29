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
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t454;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2512;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2513;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t892;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2082;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14039_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14039(__this, method) (( void (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2__ctor_m14039_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14041_gshared (Dictionary_2_t2078 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14041(__this, ___comparer, method) (( void (*) (Dictionary_2_t2078 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14041_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14043_gshared (Dictionary_2_t2078 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14043(__this, ___capacity, method) (( void (*) (Dictionary_2_t2078 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14043_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14045_gshared (Dictionary_2_t2078 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14045(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2078 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2__ctor_m14045_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14047_gshared (Dictionary_2_t2078 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14047(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2078 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14047_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14049_gshared (Dictionary_2_t2078 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14049(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2078 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14049_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14051_gshared (Dictionary_2_t2078 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14051(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2078 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14051_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14053_gshared (Dictionary_2_t2078 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14053(__this, ___key, method) (( bool (*) (Dictionary_2_t2078 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14053_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14055_gshared (Dictionary_2_t2078 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14055(__this, ___key, method) (( void (*) (Dictionary_2_t2078 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14055_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14057_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14057(__this, method) (( bool (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14057_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14059_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14059(__this, method) (( Object_t * (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14059_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14061_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14061(__this, method) (( bool (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14063_gshared (Dictionary_2_t2078 * __this, KeyValuePair_2_t2080  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14063(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2078 *, KeyValuePair_2_t2080 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14063_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14065_gshared (Dictionary_2_t2078 * __this, KeyValuePair_2_t2080  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14065(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2078 *, KeyValuePair_2_t2080 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14065_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14067_gshared (Dictionary_2_t2078 * __this, KeyValuePair_2U5BU5D_t2512* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14067(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2078 *, KeyValuePair_2U5BU5D_t2512*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14067_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14069_gshared (Dictionary_2_t2078 * __this, KeyValuePair_2_t2080  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14069(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2078 *, KeyValuePair_2_t2080 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14069_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14071_gshared (Dictionary_2_t2078 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14071(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2078 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14071_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14073_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14073(__this, method) (( Object_t * (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14073_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14075_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14075(__this, method) (( Object_t* (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14075_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14077_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14077(__this, method) (( Object_t * (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14077_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14079_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14079(__this, method) (( int32_t (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_get_Count_m14079_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14081_gshared (Dictionary_2_t2078 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14081(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2078 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m14081_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14083_gshared (Dictionary_2_t2078 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14083(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2078 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14083_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14085_gshared (Dictionary_2_t2078 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14085(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2078 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14085_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14087_gshared (Dictionary_2_t2078 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14087(__this, ___size, method) (( void (*) (Dictionary_2_t2078 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14087_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14089_gshared (Dictionary_2_t2078 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14089(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2078 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14089_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2080  Dictionary_2_make_pair_m14091_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14091(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2080  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14091_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14093_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14093(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14093_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14095_gshared (Dictionary_2_t2078 * __this, KeyValuePair_2U5BU5D_t2512* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14095(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2078 *, KeyValuePair_2U5BU5D_t2512*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14095_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14097_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14097(__this, method) (( void (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_Resize_m14097_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14099_gshared (Dictionary_2_t2078 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14099(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2078 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m14099_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14101_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14101(__this, method) (( void (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_Clear_m14101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14103_gshared (Dictionary_2_t2078 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14103(__this, ___key, method) (( bool (*) (Dictionary_2_t2078 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m14103_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14105_gshared (Dictionary_2_t2078 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14105(__this, ___value, method) (( bool (*) (Dictionary_2_t2078 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14105_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14107_gshared (Dictionary_2_t2078 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14107(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2078 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2_GetObjectData_m14107_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14109_gshared (Dictionary_2_t2078 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14109(__this, ___sender, method) (( void (*) (Dictionary_2_t2078 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14109_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14111_gshared (Dictionary_2_t2078 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14111(__this, ___key, method) (( bool (*) (Dictionary_2_t2078 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m14111_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14113_gshared (Dictionary_2_t2078 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14113(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2078 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14113_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2082 * Dictionary_2_get_Values_m14115_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14115(__this, method) (( ValueCollection_t2082 * (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_get_Values_m14115_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m14117_gshared (Dictionary_2_t2078 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14117(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2078 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14117_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14119_gshared (Dictionary_2_t2078 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14119(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2078 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14119_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14121_gshared (Dictionary_2_t2078 * __this, KeyValuePair_2_t2080  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14121(__this, ___pair, method) (( bool (*) (Dictionary_2_t2078 *, KeyValuePair_2_t2080 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14121_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2084  Dictionary_2_GetEnumerator_m14123_gshared (Dictionary_2_t2078 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14123(__this, method) (( Enumerator_t2084  (*) (Dictionary_2_t2078 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14123_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1100  Dictionary_2_U3CCopyToU3Em__0_m14125_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14125(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1100  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14125_gshared)(__this /* static, unused */, ___key, ___value, method)
