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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t440;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2498;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2486;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2499;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1999;
// System.Int32[]
struct Int32U5BU5D_t67;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2005;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2009;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m13084_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1__ctor_m13084(__this, method) (( void (*) (List_1_t440 *, const MethodInfo*))List_1__ctor_m13084_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13085_gshared (List_1_t440 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13085(__this, ___collection, method) (( void (*) (List_1_t440 *, Object_t*, const MethodInfo*))List_1__ctor_m13085_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13086_gshared (List_1_t440 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13086(__this, ___capacity, method) (( void (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1__ctor_m13086_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m13087_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13087(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13087_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13088_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13088(__this, method) (( Object_t* (*) (List_1_t440 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13089_gshared (List_1_t440 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13089(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t440 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13089_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13090_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13090(__this, method) (( Object_t * (*) (List_1_t440 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13090_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13091_gshared (List_1_t440 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13091(__this, ___item, method) (( int32_t (*) (List_1_t440 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13091_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13092_gshared (List_1_t440 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13092(__this, ___item, method) (( bool (*) (List_1_t440 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13092_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13093_gshared (List_1_t440 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13093(__this, ___item, method) (( int32_t (*) (List_1_t440 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13093_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13094_gshared (List_1_t440 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13094(__this, ___index, ___item, method) (( void (*) (List_1_t440 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13094_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13095_gshared (List_1_t440 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13095(__this, ___item, method) (( void (*) (List_1_t440 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13095_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13096_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13096(__this, method) (( bool (*) (List_1_t440 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13096_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13097_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13097(__this, method) (( bool (*) (List_1_t440 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13097_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13098_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13098(__this, method) (( Object_t * (*) (List_1_t440 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13099_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13099(__this, method) (( bool (*) (List_1_t440 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13100_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13100(__this, method) (( bool (*) (List_1_t440 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13101_gshared (List_1_t440 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13101(__this, ___index, method) (( Object_t * (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13101_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13102_gshared (List_1_t440 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13102(__this, ___index, ___value, method) (( void (*) (List_1_t440 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13102_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m13103_gshared (List_1_t440 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m13103(__this, ___item, method) (( void (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_Add_m13103_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13104_gshared (List_1_t440 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13104(__this, ___newCount, method) (( void (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13104_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13105_gshared (List_1_t440 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13105(__this, ___collection, method) (( void (*) (List_1_t440 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13105_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13106_gshared (List_1_t440 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13106(__this, ___enumerable, method) (( void (*) (List_1_t440 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13106_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3898_gshared (List_1_t440 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3898(__this, ___collection, method) (( void (*) (List_1_t440 *, Object_t*, const MethodInfo*))List_1_AddRange_m3898_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1999 * List_1_AsReadOnly_m13107_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13107(__this, method) (( ReadOnlyCollection_1_t1999 * (*) (List_1_t440 *, const MethodInfo*))List_1_AsReadOnly_m13107_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m13108_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_Clear_m13108(__this, method) (( void (*) (List_1_t440 *, const MethodInfo*))List_1_Clear_m13108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m13109_gshared (List_1_t440 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m13109(__this, ___item, method) (( bool (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_Contains_m13109_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13110_gshared (List_1_t440 * __this, Int32U5BU5D_t67* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13110(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t440 *, Int32U5BU5D_t67*, int32_t, const MethodInfo*))List_1_CopyTo_m13110_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m13111_gshared (List_1_t440 * __this, Predicate_1_t2005 * ___match, const MethodInfo* method);
#define List_1_Find_m13111(__this, ___match, method) (( int32_t (*) (List_1_t440 *, Predicate_1_t2005 *, const MethodInfo*))List_1_Find_m13111_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13112_gshared (Object_t * __this /* static, unused */, Predicate_1_t2005 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13112(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2005 *, const MethodInfo*))List_1_CheckMatch_m13112_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13113_gshared (List_1_t440 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2005 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13113(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t440 *, int32_t, int32_t, Predicate_1_t2005 *, const MethodInfo*))List_1_GetIndex_m13113_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1998  List_1_GetEnumerator_m13114_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13114(__this, method) (( Enumerator_t1998  (*) (List_1_t440 *, const MethodInfo*))List_1_GetEnumerator_m13114_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13115_gshared (List_1_t440 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m13115(__this, ___item, method) (( int32_t (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_IndexOf_m13115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13116_gshared (List_1_t440 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13116(__this, ___start, ___delta, method) (( void (*) (List_1_t440 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13116_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13117_gshared (List_1_t440 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13117(__this, ___index, method) (( void (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13117_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13118_gshared (List_1_t440 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m13118(__this, ___index, ___item, method) (( void (*) (List_1_t440 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m13118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13119_gshared (List_1_t440 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13119(__this, ___collection, method) (( void (*) (List_1_t440 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13119_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m13120_gshared (List_1_t440 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m13120(__this, ___item, method) (( bool (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_Remove_m13120_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13121_gshared (List_1_t440 * __this, Predicate_1_t2005 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13121(__this, ___match, method) (( int32_t (*) (List_1_t440 *, Predicate_1_t2005 *, const MethodInfo*))List_1_RemoveAll_m13121_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13122_gshared (List_1_t440 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13122(__this, ___index, method) (( void (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m13123_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_Reverse_m13123(__this, method) (( void (*) (List_1_t440 *, const MethodInfo*))List_1_Reverse_m13123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m13124_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_Sort_m13124(__this, method) (( void (*) (List_1_t440 *, const MethodInfo*))List_1_Sort_m13124_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13125_gshared (List_1_t440 * __this, Comparison_1_t2009 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13125(__this, ___comparison, method) (( void (*) (List_1_t440 *, Comparison_1_t2009 *, const MethodInfo*))List_1_Sort_m13125_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t67* List_1_ToArray_m13126_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_ToArray_m13126(__this, method) (( Int32U5BU5D_t67* (*) (List_1_t440 *, const MethodInfo*))List_1_ToArray_m13126_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m13127_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13127(__this, method) (( void (*) (List_1_t440 *, const MethodInfo*))List_1_TrimExcess_m13127_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13128_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13128(__this, method) (( int32_t (*) (List_1_t440 *, const MethodInfo*))List_1_get_Capacity_m13128_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13129_gshared (List_1_t440 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13129(__this, ___value, method) (( void (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13129_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m13130_gshared (List_1_t440 * __this, const MethodInfo* method);
#define List_1_get_Count_m13130(__this, method) (( int32_t (*) (List_1_t440 *, const MethodInfo*))List_1_get_Count_m13130_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m13131_gshared (List_1_t440 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13131(__this, ___index, method) (( int32_t (*) (List_1_t440 *, int32_t, const MethodInfo*))List_1_get_Item_m13131_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13132_gshared (List_1_t440 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m13132(__this, ___index, ___value, method) (( void (*) (List_1_t440 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m13132_gshared)(__this, ___index, ___value, method)
