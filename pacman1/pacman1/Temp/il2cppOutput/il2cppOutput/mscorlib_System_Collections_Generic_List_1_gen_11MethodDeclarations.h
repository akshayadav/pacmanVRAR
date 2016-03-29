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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t305;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2502;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2503;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2504;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2038;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t448;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2042;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2045;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m13543_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1__ctor_m13543(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1__ctor_m13543_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13544_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13544(__this, ___collection, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1__ctor_m13544_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2320_gshared (List_1_t305 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2320(__this, ___capacity, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1__ctor_m2320_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m13545_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13545(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13545_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13546_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13546(__this, method) (( Object_t* (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13547_gshared (List_1_t305 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13547(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t305 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13547_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13548_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13548(__this, method) (( Object_t * (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13548_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13549_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13549(__this, ___item, method) (( int32_t (*) (List_1_t305 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13549_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13550_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13550(__this, ___item, method) (( bool (*) (List_1_t305 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13550_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13551_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13551(__this, ___item, method) (( int32_t (*) (List_1_t305 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13551_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13552_gshared (List_1_t305 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13552(__this, ___index, ___item, method) (( void (*) (List_1_t305 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13552_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13553_gshared (List_1_t305 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13553(__this, ___item, method) (( void (*) (List_1_t305 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13553_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13554_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13554(__this, method) (( bool (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13554_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13555_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13555(__this, method) (( bool (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13555_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13556_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13556(__this, method) (( Object_t * (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13556_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13557_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13557(__this, method) (( bool (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13558_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13558(__this, method) (( bool (*) (List_1_t305 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13558_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13559_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13559(__this, ___index, method) (( Object_t * (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13560_gshared (List_1_t305 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13560(__this, ___index, ___value, method) (( void (*) (List_1_t305 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13560_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m13561_gshared (List_1_t305 * __this, UICharInfo_t300  ___item, const MethodInfo* method);
#define List_1_Add_m13561(__this, ___item, method) (( void (*) (List_1_t305 *, UICharInfo_t300 , const MethodInfo*))List_1_Add_m13561_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13562_gshared (List_1_t305 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13562(__this, ___newCount, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13562_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13563_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13563(__this, ___collection, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13563_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13564_gshared (List_1_t305 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13564(__this, ___enumerable, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13564_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13565_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13565(__this, ___collection, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1_AddRange_m13565_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2038 * List_1_AsReadOnly_m13566_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13566(__this, method) (( ReadOnlyCollection_1_t2038 * (*) (List_1_t305 *, const MethodInfo*))List_1_AsReadOnly_m13566_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m13567_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_Clear_m13567(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1_Clear_m13567_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m13568_gshared (List_1_t305 * __this, UICharInfo_t300  ___item, const MethodInfo* method);
#define List_1_Contains_m13568(__this, ___item, method) (( bool (*) (List_1_t305 *, UICharInfo_t300 , const MethodInfo*))List_1_Contains_m13568_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13569_gshared (List_1_t305 * __this, UICharInfoU5BU5D_t448* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13569(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t305 *, UICharInfoU5BU5D_t448*, int32_t, const MethodInfo*))List_1_CopyTo_m13569_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t300  List_1_Find_m13570_gshared (List_1_t305 * __this, Predicate_1_t2042 * ___match, const MethodInfo* method);
#define List_1_Find_m13570(__this, ___match, method) (( UICharInfo_t300  (*) (List_1_t305 *, Predicate_1_t2042 *, const MethodInfo*))List_1_Find_m13570_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13571_gshared (Object_t * __this /* static, unused */, Predicate_1_t2042 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13571(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2042 *, const MethodInfo*))List_1_CheckMatch_m13571_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13572_gshared (List_1_t305 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2042 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13572(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t305 *, int32_t, int32_t, Predicate_1_t2042 *, const MethodInfo*))List_1_GetIndex_m13572_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2037  List_1_GetEnumerator_m13573_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13573(__this, method) (( Enumerator_t2037  (*) (List_1_t305 *, const MethodInfo*))List_1_GetEnumerator_m13573_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13574_gshared (List_1_t305 * __this, UICharInfo_t300  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13574(__this, ___item, method) (( int32_t (*) (List_1_t305 *, UICharInfo_t300 , const MethodInfo*))List_1_IndexOf_m13574_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13575_gshared (List_1_t305 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13575(__this, ___start, ___delta, method) (( void (*) (List_1_t305 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13575_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13576_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13576(__this, ___index, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13576_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13577_gshared (List_1_t305 * __this, int32_t ___index, UICharInfo_t300  ___item, const MethodInfo* method);
#define List_1_Insert_m13577(__this, ___index, ___item, method) (( void (*) (List_1_t305 *, int32_t, UICharInfo_t300 , const MethodInfo*))List_1_Insert_m13577_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13578_gshared (List_1_t305 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13578(__this, ___collection, method) (( void (*) (List_1_t305 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13578_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m13579_gshared (List_1_t305 * __this, UICharInfo_t300  ___item, const MethodInfo* method);
#define List_1_Remove_m13579(__this, ___item, method) (( bool (*) (List_1_t305 *, UICharInfo_t300 , const MethodInfo*))List_1_Remove_m13579_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13580_gshared (List_1_t305 * __this, Predicate_1_t2042 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13580(__this, ___match, method) (( int32_t (*) (List_1_t305 *, Predicate_1_t2042 *, const MethodInfo*))List_1_RemoveAll_m13580_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13581_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13581(__this, ___index, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13581_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m13582_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_Reverse_m13582(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1_Reverse_m13582_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m13583_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_Sort_m13583(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1_Sort_m13583_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13584_gshared (List_1_t305 * __this, Comparison_1_t2045 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13584(__this, ___comparison, method) (( void (*) (List_1_t305 *, Comparison_1_t2045 *, const MethodInfo*))List_1_Sort_m13584_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t448* List_1_ToArray_m13585_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_ToArray_m13585(__this, method) (( UICharInfoU5BU5D_t448* (*) (List_1_t305 *, const MethodInfo*))List_1_ToArray_m13585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m13586_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13586(__this, method) (( void (*) (List_1_t305 *, const MethodInfo*))List_1_TrimExcess_m13586_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13587_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13587(__this, method) (( int32_t (*) (List_1_t305 *, const MethodInfo*))List_1_get_Capacity_m13587_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13588_gshared (List_1_t305 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13588(__this, ___value, method) (( void (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13588_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m13589_gshared (List_1_t305 * __this, const MethodInfo* method);
#define List_1_get_Count_m13589(__this, method) (( int32_t (*) (List_1_t305 *, const MethodInfo*))List_1_get_Count_m13589_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t300  List_1_get_Item_m13590_gshared (List_1_t305 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13590(__this, ___index, method) (( UICharInfo_t300  (*) (List_1_t305 *, int32_t, const MethodInfo*))List_1_get_Item_m13590_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13591_gshared (List_1_t305 * __this, int32_t ___index, UICharInfo_t300  ___value, const MethodInfo* method);
#define List_1_set_Item_m13591(__this, ___index, ___value, method) (( void (*) (List_1_t305 *, int32_t, UICharInfo_t300 , const MethodInfo*))List_1_set_Item_m13591_gshared)(__this, ___index, ___value, method)
