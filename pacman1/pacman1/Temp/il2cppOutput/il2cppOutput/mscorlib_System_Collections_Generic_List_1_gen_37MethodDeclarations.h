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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t705;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t167;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1928;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2480;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1855;
// System.Object[]
struct ObjectU5BU5D_t151;
// System.Predicate`1<System.Object>
struct Predicate_1_t1867;
// System.Comparison`1<System.Object>
struct Comparison_1_t1873;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11334_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1__ctor_m11334(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1__ctor_m11334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11336_gshared (List_1_t705 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11336(__this, ___collection, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1__ctor_m11336_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11338_gshared (List_1_t705 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11338(__this, ___capacity, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1__ctor_m11338_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11340_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11340(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11340_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11342_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11342(__this, method) (( Object_t* (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11342_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11344_gshared (List_1_t705 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11344(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t705 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11346_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11346(__this, method) (( Object_t * (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11348_gshared (List_1_t705 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11348(__this, ___item, method) (( int32_t (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11350_gshared (List_1_t705 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11350(__this, ___item, method) (( bool (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11352_gshared (List_1_t705 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11352(__this, ___item, method) (( int32_t (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11354_gshared (List_1_t705 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11354(__this, ___index, ___item, method) (( void (*) (List_1_t705 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11356_gshared (List_1_t705 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11356(__this, ___item, method) (( void (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11356_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11358_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11358(__this, method) (( bool (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11358_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11360_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11360(__this, method) (( bool (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11360_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11362_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11362(__this, method) (( Object_t * (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11362_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11364_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11364(__this, method) (( bool (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11364_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11366_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11366(__this, method) (( bool (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11366_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11368_gshared (List_1_t705 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11368(__this, ___index, method) (( Object_t * (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11368_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11370_gshared (List_1_t705 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11370(__this, ___index, ___value, method) (( void (*) (List_1_t705 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11370_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11372_gshared (List_1_t705 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11372(__this, ___item, method) (( void (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_Add_m11372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11374_gshared (List_1_t705 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11374(__this, ___newCount, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11374_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11376_gshared (List_1_t705 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11376(__this, ___collection, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11376_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11378_gshared (List_1_t705 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11378(__this, ___enumerable, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11378_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11380_gshared (List_1_t705 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11380(__this, ___collection, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1_AddRange_m11380_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1855 * List_1_AsReadOnly_m11382_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11382(__this, method) (( ReadOnlyCollection_1_t1855 * (*) (List_1_t705 *, const MethodInfo*))List_1_AsReadOnly_m11382_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11384_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_Clear_m11384(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1_Clear_m11384_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11386_gshared (List_1_t705 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11386(__this, ___item, method) (( bool (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_Contains_m11386_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11388_gshared (List_1_t705 * __this, ObjectU5BU5D_t151* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11388(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t705 *, ObjectU5BU5D_t151*, int32_t, const MethodInfo*))List_1_CopyTo_m11388_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11390_gshared (List_1_t705 * __this, Predicate_1_t1867 * ___match, const MethodInfo* method);
#define List_1_Find_m11390(__this, ___match, method) (( Object_t * (*) (List_1_t705 *, Predicate_1_t1867 *, const MethodInfo*))List_1_Find_m11390_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11392_gshared (Object_t * __this /* static, unused */, Predicate_1_t1867 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11392(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1867 *, const MethodInfo*))List_1_CheckMatch_m11392_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11394_gshared (List_1_t705 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1867 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11394(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t705 *, int32_t, int32_t, Predicate_1_t1867 *, const MethodInfo*))List_1_GetIndex_m11394_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1861  List_1_GetEnumerator_m11396_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11396(__this, method) (( Enumerator_t1861  (*) (List_1_t705 *, const MethodInfo*))List_1_GetEnumerator_m11396_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11398_gshared (List_1_t705 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11398(__this, ___item, method) (( int32_t (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11398_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11400_gshared (List_1_t705 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11400(__this, ___start, ___delta, method) (( void (*) (List_1_t705 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11400_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11402_gshared (List_1_t705 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11402(__this, ___index, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11402_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11404_gshared (List_1_t705 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11404(__this, ___index, ___item, method) (( void (*) (List_1_t705 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11404_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11406_gshared (List_1_t705 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11406(__this, ___collection, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11406_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11408_gshared (List_1_t705 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11408(__this, ___item, method) (( bool (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_Remove_m11408_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11410_gshared (List_1_t705 * __this, Predicate_1_t1867 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11410(__this, ___match, method) (( int32_t (*) (List_1_t705 *, Predicate_1_t1867 *, const MethodInfo*))List_1_RemoveAll_m11410_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11412_gshared (List_1_t705 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11412(__this, ___index, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11412_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11414_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_Reverse_m11414(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1_Reverse_m11414_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11416_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_Sort_m11416(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1_Sort_m11416_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11418_gshared (List_1_t705 * __this, Comparison_1_t1873 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11418(__this, ___comparison, method) (( void (*) (List_1_t705 *, Comparison_1_t1873 *, const MethodInfo*))List_1_Sort_m11418_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t151* List_1_ToArray_m11419_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_ToArray_m11419(__this, method) (( ObjectU5BU5D_t151* (*) (List_1_t705 *, const MethodInfo*))List_1_ToArray_m11419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11421_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11421(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1_TrimExcess_m11421_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11423_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11423(__this, method) (( int32_t (*) (List_1_t705 *, const MethodInfo*))List_1_get_Capacity_m11423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11425_gshared (List_1_t705 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11425(__this, ___value, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11425_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11427_gshared (List_1_t705 * __this, const MethodInfo* method);
#define List_1_get_Count_m11427(__this, method) (( int32_t (*) (List_1_t705 *, const MethodInfo*))List_1_get_Count_m11427_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11429_gshared (List_1_t705 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11429(__this, ___index, method) (( Object_t * (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_get_Item_m11429_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11431_gshared (List_1_t705 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11431(__this, ___index, ___value, method) (( void (*) (List_1_t705 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11431_gshared)(__this, ___index, ___value, method)
