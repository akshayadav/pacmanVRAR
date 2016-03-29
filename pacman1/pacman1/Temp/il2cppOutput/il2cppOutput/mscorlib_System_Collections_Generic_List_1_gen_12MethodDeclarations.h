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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t306;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2505;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2506;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t702;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2048;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t449;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2052;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2055;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m13693_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1__ctor_m13693(__this, method) (( void (*) (List_1_t306 *, const MethodInfo*))List_1__ctor_m13693_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13694_gshared (List_1_t306 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13694(__this, ___collection, method) (( void (*) (List_1_t306 *, Object_t*, const MethodInfo*))List_1__ctor_m13694_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2321_gshared (List_1_t306 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2321(__this, ___capacity, method) (( void (*) (List_1_t306 *, int32_t, const MethodInfo*))List_1__ctor_m2321_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m13695_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13695(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13695_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13696_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13696(__this, method) (( Object_t* (*) (List_1_t306 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13696_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13697_gshared (List_1_t306 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13697(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t306 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13697_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13698_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13698(__this, method) (( Object_t * (*) (List_1_t306 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13698_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13699_gshared (List_1_t306 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13699(__this, ___item, method) (( int32_t (*) (List_1_t306 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13699_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13700_gshared (List_1_t306 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13700(__this, ___item, method) (( bool (*) (List_1_t306 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13700_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13701_gshared (List_1_t306 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13701(__this, ___item, method) (( int32_t (*) (List_1_t306 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13701_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13702_gshared (List_1_t306 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13702(__this, ___index, ___item, method) (( void (*) (List_1_t306 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13702_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13703_gshared (List_1_t306 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13703(__this, ___item, method) (( void (*) (List_1_t306 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13703_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13704_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13704(__this, method) (( bool (*) (List_1_t306 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13704_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13705_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13705(__this, method) (( bool (*) (List_1_t306 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13705_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13706_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13706(__this, method) (( Object_t * (*) (List_1_t306 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13706_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13707_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13707(__this, method) (( bool (*) (List_1_t306 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13708_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13708(__this, method) (( bool (*) (List_1_t306 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13708_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13709_gshared (List_1_t306 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13709(__this, ___index, method) (( Object_t * (*) (List_1_t306 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13709_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13710_gshared (List_1_t306 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13710(__this, ___index, ___value, method) (( void (*) (List_1_t306 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13710_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m13711_gshared (List_1_t306 * __this, UILineInfo_t301  ___item, const MethodInfo* method);
#define List_1_Add_m13711(__this, ___item, method) (( void (*) (List_1_t306 *, UILineInfo_t301 , const MethodInfo*))List_1_Add_m13711_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13712_gshared (List_1_t306 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13712(__this, ___newCount, method) (( void (*) (List_1_t306 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13712_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13713_gshared (List_1_t306 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13713(__this, ___collection, method) (( void (*) (List_1_t306 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13713_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13714_gshared (List_1_t306 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13714(__this, ___enumerable, method) (( void (*) (List_1_t306 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13714_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13715_gshared (List_1_t306 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13715(__this, ___collection, method) (( void (*) (List_1_t306 *, Object_t*, const MethodInfo*))List_1_AddRange_m13715_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2048 * List_1_AsReadOnly_m13716_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13716(__this, method) (( ReadOnlyCollection_1_t2048 * (*) (List_1_t306 *, const MethodInfo*))List_1_AsReadOnly_m13716_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m13717_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_Clear_m13717(__this, method) (( void (*) (List_1_t306 *, const MethodInfo*))List_1_Clear_m13717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m13718_gshared (List_1_t306 * __this, UILineInfo_t301  ___item, const MethodInfo* method);
#define List_1_Contains_m13718(__this, ___item, method) (( bool (*) (List_1_t306 *, UILineInfo_t301 , const MethodInfo*))List_1_Contains_m13718_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13719_gshared (List_1_t306 * __this, UILineInfoU5BU5D_t449* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13719(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t306 *, UILineInfoU5BU5D_t449*, int32_t, const MethodInfo*))List_1_CopyTo_m13719_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t301  List_1_Find_m13720_gshared (List_1_t306 * __this, Predicate_1_t2052 * ___match, const MethodInfo* method);
#define List_1_Find_m13720(__this, ___match, method) (( UILineInfo_t301  (*) (List_1_t306 *, Predicate_1_t2052 *, const MethodInfo*))List_1_Find_m13720_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13721_gshared (Object_t * __this /* static, unused */, Predicate_1_t2052 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13721(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2052 *, const MethodInfo*))List_1_CheckMatch_m13721_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13722_gshared (List_1_t306 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2052 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13722(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t306 *, int32_t, int32_t, Predicate_1_t2052 *, const MethodInfo*))List_1_GetIndex_m13722_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2047  List_1_GetEnumerator_m13723_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13723(__this, method) (( Enumerator_t2047  (*) (List_1_t306 *, const MethodInfo*))List_1_GetEnumerator_m13723_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13724_gshared (List_1_t306 * __this, UILineInfo_t301  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13724(__this, ___item, method) (( int32_t (*) (List_1_t306 *, UILineInfo_t301 , const MethodInfo*))List_1_IndexOf_m13724_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13725_gshared (List_1_t306 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13725(__this, ___start, ___delta, method) (( void (*) (List_1_t306 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13725_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13726_gshared (List_1_t306 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13726(__this, ___index, method) (( void (*) (List_1_t306 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13726_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13727_gshared (List_1_t306 * __this, int32_t ___index, UILineInfo_t301  ___item, const MethodInfo* method);
#define List_1_Insert_m13727(__this, ___index, ___item, method) (( void (*) (List_1_t306 *, int32_t, UILineInfo_t301 , const MethodInfo*))List_1_Insert_m13727_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13728_gshared (List_1_t306 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13728(__this, ___collection, method) (( void (*) (List_1_t306 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13728_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m13729_gshared (List_1_t306 * __this, UILineInfo_t301  ___item, const MethodInfo* method);
#define List_1_Remove_m13729(__this, ___item, method) (( bool (*) (List_1_t306 *, UILineInfo_t301 , const MethodInfo*))List_1_Remove_m13729_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13730_gshared (List_1_t306 * __this, Predicate_1_t2052 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13730(__this, ___match, method) (( int32_t (*) (List_1_t306 *, Predicate_1_t2052 *, const MethodInfo*))List_1_RemoveAll_m13730_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13731_gshared (List_1_t306 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13731(__this, ___index, method) (( void (*) (List_1_t306 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13731_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m13732_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_Reverse_m13732(__this, method) (( void (*) (List_1_t306 *, const MethodInfo*))List_1_Reverse_m13732_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m13733_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_Sort_m13733(__this, method) (( void (*) (List_1_t306 *, const MethodInfo*))List_1_Sort_m13733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13734_gshared (List_1_t306 * __this, Comparison_1_t2055 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13734(__this, ___comparison, method) (( void (*) (List_1_t306 *, Comparison_1_t2055 *, const MethodInfo*))List_1_Sort_m13734_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t449* List_1_ToArray_m13735_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_ToArray_m13735(__this, method) (( UILineInfoU5BU5D_t449* (*) (List_1_t306 *, const MethodInfo*))List_1_ToArray_m13735_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m13736_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13736(__this, method) (( void (*) (List_1_t306 *, const MethodInfo*))List_1_TrimExcess_m13736_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13737_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13737(__this, method) (( int32_t (*) (List_1_t306 *, const MethodInfo*))List_1_get_Capacity_m13737_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13738_gshared (List_1_t306 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13738(__this, ___value, method) (( void (*) (List_1_t306 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13738_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m13739_gshared (List_1_t306 * __this, const MethodInfo* method);
#define List_1_get_Count_m13739(__this, method) (( int32_t (*) (List_1_t306 *, const MethodInfo*))List_1_get_Count_m13739_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t301  List_1_get_Item_m13740_gshared (List_1_t306 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13740(__this, ___index, method) (( UILineInfo_t301  (*) (List_1_t306 *, int32_t, const MethodInfo*))List_1_get_Item_m13740_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13741_gshared (List_1_t306 * __this, int32_t ___index, UILineInfo_t301  ___value, const MethodInfo* method);
#define List_1_set_Item_m13741(__this, ___index, ___value, method) (( void (*) (List_1_t306 *, int32_t, UILineInfo_t301 , const MethodInfo*))List_1_set_Item_m13741_gshared)(__this, ___index, ___value, method)
