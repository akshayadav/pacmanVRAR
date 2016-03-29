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

// System.IO.BinaryWriter
struct BinaryWriter_t78;
// System.IO.Stream
struct Stream_t80;
// System.Text.Encoding
struct Encoding_t147;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C" void BinaryWriter__ctor_m8074 (BinaryWriter_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" void BinaryWriter__ctor_m732 (BinaryWriter_t78 * __this, Stream_t80 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryWriter__ctor_m8075 (BinaryWriter_t78 * __this, Stream_t80 * ___output, Encoding_t147 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C" void BinaryWriter__cctor_m8076 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C" void BinaryWriter_System_IDisposable_Dispose_m8077 (BinaryWriter_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C" void BinaryWriter_Dispose_m8078 (BinaryWriter_t78 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C" void BinaryWriter_Write_m8079 (BinaryWriter_t78 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C" void BinaryWriter_Write_m8080 (BinaryWriter_t78 * __this, ByteU5BU5D_t73* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
extern "C" void BinaryWriter_Write_m8081 (BinaryWriter_t78 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C" void BinaryWriter_Write_m8082 (BinaryWriter_t78 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int64)
extern "C" void BinaryWriter_Write_m8083 (BinaryWriter_t78 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
extern "C" void BinaryWriter_Write_m8084 (BinaryWriter_t78 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt32)
extern "C" void BinaryWriter_Write_m8085 (BinaryWriter_t78 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt64)
extern "C" void BinaryWriter_Write_m8086 (BinaryWriter_t78 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
