﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t1232;
// System.Collections.ArrayList
struct ArrayList_t755;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1101;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t96;
// System.Collections.IComparer
struct IComparer_t934;
// System.Object[]
struct ObjectU5BU5D_t151;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void SynchronizedArrayListWrapper__ctor_m7534 (SynchronizedArrayListWrapper_t1232 * __this, ArrayList_t755 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * SynchronizedArrayListWrapper_get_Item_m7535 (SynchronizedArrayListWrapper_t1232 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_set_Item_m7536 (SynchronizedArrayListWrapper_t1232 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
extern "C" int32_t SynchronizedArrayListWrapper_get_Count_m7537 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Capacity()
extern "C" int32_t SynchronizedArrayListWrapper_get_Capacity_m7538 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Capacity(System.Int32)
extern "C" void SynchronizedArrayListWrapper_set_Capacity_m7539 (SynchronizedArrayListWrapper_t1232 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
extern "C" bool SynchronizedArrayListWrapper_get_IsFixedSize_m7540 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
extern "C" bool SynchronizedArrayListWrapper_get_IsReadOnly_m7541 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
extern "C" bool SynchronizedArrayListWrapper_get_IsSynchronized_m7542 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
extern "C" Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m7543 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_Add_m7544 (SynchronizedArrayListWrapper_t1232 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
extern "C" void SynchronizedArrayListWrapper_Clear_m7545 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
extern "C" bool SynchronizedArrayListWrapper_Contains_m7546 (SynchronizedArrayListWrapper_t1232 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m7547 (SynchronizedArrayListWrapper_t1232 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m7548 (SynchronizedArrayListWrapper_t1232 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m7549 (SynchronizedArrayListWrapper_t1232 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_Insert_m7550 (SynchronizedArrayListWrapper_t1232 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_InsertRange_m7551 (SynchronizedArrayListWrapper_t1232 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
extern "C" void SynchronizedArrayListWrapper_Remove_m7552 (SynchronizedArrayListWrapper_t1232 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
extern "C" void SynchronizedArrayListWrapper_RemoveAt_m7553 (SynchronizedArrayListWrapper_t1232 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m7554 (SynchronizedArrayListWrapper_t1232 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m7555 (SynchronizedArrayListWrapper_t1232 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m7556 (SynchronizedArrayListWrapper_t1232 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
extern "C" Object_t * SynchronizedArrayListWrapper_GetEnumerator_m7557 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_AddRange_m7558 (SynchronizedArrayListWrapper_t1232 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
extern "C" Object_t * SynchronizedArrayListWrapper_Clone_m7559 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
extern "C" void SynchronizedArrayListWrapper_Sort_m7560 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void SynchronizedArrayListWrapper_Sort_m7561 (SynchronizedArrayListWrapper_t1232 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t151* SynchronizedArrayListWrapper_ToArray_m7562 (SynchronizedArrayListWrapper_t1232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * SynchronizedArrayListWrapper_ToArray_m7563 (SynchronizedArrayListWrapper_t1232 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
