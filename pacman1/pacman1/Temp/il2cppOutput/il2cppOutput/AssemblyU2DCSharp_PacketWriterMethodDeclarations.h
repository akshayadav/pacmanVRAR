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

// PacketWriter
struct PacketWriter_t77;
// System.IO.Stream
struct Stream_t80;
// System.Byte[]
struct ByteU5BU5D_t73;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_RemoteMessage.h"

// System.Void PacketWriter::.ctor()
extern "C" void PacketWriter__ctor_m349 (PacketWriter_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::BeginMessage(RemoteMessage)
extern "C" void PacketWriter_BeginMessage_m350 (PacketWriter_t77 * __this, uint8_t ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::EndMessage(System.IO.Stream)
extern "C" void PacketWriter_EndMessage_m351 (PacketWriter_t77 * __this, Stream_t80 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.Boolean)
extern "C" void PacketWriter_Write_m352 (PacketWriter_t77 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.Int32)
extern "C" void PacketWriter_Write_m353 (PacketWriter_t77 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.UInt32)
extern "C" void PacketWriter_Write_m354 (PacketWriter_t77 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.Int64)
extern "C" void PacketWriter_Write_m355 (PacketWriter_t77 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.UInt64)
extern "C" void PacketWriter_Write_m356 (PacketWriter_t77 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.Single)
extern "C" void PacketWriter_Write_m357 (PacketWriter_t77 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.Double)
extern "C" void PacketWriter_Write_m358 (PacketWriter_t77 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.Byte[])
extern "C" void PacketWriter_Write_m359 (PacketWriter_t77 * __this, ByteU5BU5D_t73* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketWriter::Write(System.String)
extern "C" void PacketWriter_Write_m360 (PacketWriter_t77 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
