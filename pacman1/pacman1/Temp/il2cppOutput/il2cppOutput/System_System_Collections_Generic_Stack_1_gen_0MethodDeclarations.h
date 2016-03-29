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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1903;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1928;
// System.Collections.IEnumerator
struct IEnumerator_t96;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m11872_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1__ctor_m11872(__this, method) (( void (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1__ctor_m11872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m11873_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m11873(__this, method) (( bool (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m11873_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m11874_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m11874(__this, method) (( Object_t * (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m11874_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m11875_gshared (Stack_1_t1903 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m11875(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t1903 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m11875_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11876_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11876(__this, method) (( Object_t* (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11876_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m11877_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m11877(__this, method) (( Object_t * (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m11877_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m11878_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1_Peek_m11878(__this, method) (( Object_t * (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1_Peek_m11878_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m11879_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1_Pop_m11879(__this, method) (( Object_t * (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1_Pop_m11879_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m11880_gshared (Stack_1_t1903 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m11880(__this, ___t, method) (( void (*) (Stack_1_t1903 *, Object_t *, const MethodInfo*))Stack_1_Push_m11880_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m11881_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m11881(__this, method) (( int32_t (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1_get_Count_m11881_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1905  Stack_1_GetEnumerator_m11882_gshared (Stack_1_t1903 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m11882(__this, method) (( Enumerator_t1905  (*) (Stack_1_t1903 *, const MethodInfo*))Stack_1_GetEnumerator_m11882_gshared)(__this, method)
