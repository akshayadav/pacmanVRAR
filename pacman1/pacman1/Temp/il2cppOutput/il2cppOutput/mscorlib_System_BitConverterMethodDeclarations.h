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

// System.Byte[]
struct ByteU5BU5D_t73;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.BitConverter::.cctor()
extern "C" void BitConverter__cctor_m10472 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
extern "C" bool BitConverter_AmILittleEndian_m10473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
extern "C" bool BitConverter_DoubleWordsAreSwapped_m10474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
extern "C" int64_t BitConverter_DoubleToInt64Bits_m10475 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
extern "C" ByteU5BU5D_t73* BitConverter_GetBytes_m10476 (Object_t * __this /* static, unused */, uint8_t* ___ptr, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
extern "C" ByteU5BU5D_t73* BitConverter_GetBytes_m10477 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
extern "C" void BitConverter_PutBytes_m10478 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t73* ___src, int32_t ___start_index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C" int64_t BitConverter_ToInt64_m10479 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
extern "C" String_t* BitConverter_ToString_m4953 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* BitConverter_ToString_m10480 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
