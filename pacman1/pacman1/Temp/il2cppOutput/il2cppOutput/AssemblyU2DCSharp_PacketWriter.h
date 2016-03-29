#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryWriter
struct BinaryWriter_t78;
// System.IO.MemoryStream
struct MemoryStream_t72;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_RemoteMessage.h"

// PacketWriter
struct  PacketWriter_t77  : public Object_t
{
	// System.IO.BinaryWriter PacketWriter::writer
	BinaryWriter_t78 * ___writer_0;
	// System.IO.MemoryStream PacketWriter::packet
	MemoryStream_t72 * ___packet_1;
	// RemoteMessage PacketWriter::message
	uint8_t ___message_2;
	// System.Byte[] PacketWriter::buffer
	ByteU5BU5D_t73* ___buffer_3;
};
