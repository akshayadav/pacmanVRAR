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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2352;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2061;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t454;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2544;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2545;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t892;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2357;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m17696_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17696(__this, method) (( void (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2__ctor_m17696_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17697_gshared (Dictionary_2_t2352 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17697(__this, ___comparer, method) (( void (*) (Dictionary_2_t2352 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17697_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17699_gshared (Dictionary_2_t2352 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17699(__this, ___capacity, method) (( void (*) (Dictionary_2_t2352 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17699_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17701_gshared (Dictionary_2_t2352 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17701(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2352 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2__ctor_m17701_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17703_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17703(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17703_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17705_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17705(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2352 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17705_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17707_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17707(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2352 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17707_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17709_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17709(__this, ___key, method) (( bool (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17709_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17711_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17711(__this, ___key, method) (( void (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17711_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17713_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17713(__this, method) (( bool (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17715_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17715(__this, method) (( Object_t * (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17715_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17717_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17717(__this, method) (( bool (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17717_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17719_gshared (Dictionary_2_t2352 * __this, KeyValuePair_2_t2354  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17719(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2352 *, KeyValuePair_2_t2354 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17719_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17721_gshared (Dictionary_2_t2352 * __this, KeyValuePair_2_t2354  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17721(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2352 *, KeyValuePair_2_t2354 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17721_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17723_gshared (Dictionary_2_t2352 * __this, KeyValuePair_2U5BU5D_t2544* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17723(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2352 *, KeyValuePair_2U5BU5D_t2544*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17723_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17725_gshared (Dictionary_2_t2352 * __this, KeyValuePair_2_t2354  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17725(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2352 *, KeyValuePair_2_t2354 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17725_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17727_gshared (Dictionary_2_t2352 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17727(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2352 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17727_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17729_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17729(__this, method) (( Object_t * (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17729_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17731_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17731(__this, method) (( Object_t* (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17731_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17733_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17733(__this, method) (( Object_t * (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17735_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17735(__this, method) (( int32_t (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_get_Count_m17735_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m17737_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17737(__this, ___key, method) (( bool (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17737_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17739_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17739(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2352 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m17739_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17741_gshared (Dictionary_2_t2352 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17741(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2352 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17741_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17743_gshared (Dictionary_2_t2352 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17743(__this, ___size, method) (( void (*) (Dictionary_2_t2352 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17743_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17745_gshared (Dictionary_2_t2352 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17745(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2352 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17745_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2354  Dictionary_2_make_pair_m17747_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17747(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2354  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m17747_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m17749_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17749(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m17749_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17751_gshared (Dictionary_2_t2352 * __this, KeyValuePair_2U5BU5D_t2544* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17751(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2352 *, KeyValuePair_2U5BU5D_t2544*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17751_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m17753_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17753(__this, method) (( void (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_Resize_m17753_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17755_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17755(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2352 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m17755_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m17757_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17757(__this, method) (( void (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_Clear_m17757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17759_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17759(__this, ___key, method) (( bool (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17759_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17761_gshared (Dictionary_2_t2352 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17761(__this, ___value, method) (( bool (*) (Dictionary_2_t2352 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m17761_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17763_gshared (Dictionary_2_t2352 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17763(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2352 *, SerializationInfo_t454 *, StreamingContext_t455 , const MethodInfo*))Dictionary_2_GetObjectData_m17763_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17765_gshared (Dictionary_2_t2352 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17765(__this, ___sender, method) (( void (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17765_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17767_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17767(__this, ___key, method) (( bool (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17767_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17769_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17769(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2352 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m17769_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2357 * Dictionary_2_get_Values_m17771_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17771(__this, method) (( ValueCollection_t2357 * (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_get_Values_m17771_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17773_gshared (Dictionary_2_t2352 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17773(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17773_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m17775_gshared (Dictionary_2_t2352 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17775(__this, ___value, method) (( bool (*) (Dictionary_2_t2352 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17775_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17777_gshared (Dictionary_2_t2352 * __this, KeyValuePair_2_t2354  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17777(__this, ___pair, method) (( bool (*) (Dictionary_2_t2352 *, KeyValuePair_2_t2354 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17777_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2359  Dictionary_2_GetEnumerator_m17779_gshared (Dictionary_2_t2352 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17779(__this, method) (( Enumerator_t2359  (*) (Dictionary_2_t2352 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17779_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1100  Dictionary_2_U3CCopyToU3Em__0_m17781_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17781(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1100  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17781_gshared)(__this /* static, unused */, ___key, ___value, method)
