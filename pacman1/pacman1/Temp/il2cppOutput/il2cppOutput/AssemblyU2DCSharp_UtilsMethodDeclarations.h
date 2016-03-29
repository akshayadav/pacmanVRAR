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

// System.String
struct String_t;
// System.IO.BinaryReader
struct BinaryReader_t104;
// System.IO.Stream
struct Stream_t80;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "codegen/il2cpp-codegen.h"

// System.String Utils::ReadCustomString(System.IO.BinaryReader)
extern "C" String_t* Utils_ReadCustomString_m392 (Object_t * __this /* static, unused */, BinaryReader_t104 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::CopyToStream(System.IO.Stream,System.IO.Stream,System.Byte[],System.Int32)
extern "C" void Utils_CopyToStream_m393 (Object_t * __this /* static, unused */, Stream_t80 * ___src, Stream_t80 * ___dst, ByteU5BU5D_t73* ___buffer, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
