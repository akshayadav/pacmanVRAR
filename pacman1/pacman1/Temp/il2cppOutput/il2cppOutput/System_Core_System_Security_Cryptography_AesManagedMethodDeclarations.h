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

// System.Security.Cryptography.AesManaged
struct AesManaged_t728;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t735;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C" void AesManaged__ctor_m3938 (AesManaged_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C" void AesManaged_GenerateIV_m3939 (AesManaged_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C" void AesManaged_GenerateKey_m3940 (AesManaged_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * AesManaged_CreateDecryptor_m3941 (AesManaged_t728 * __this, ByteU5BU5D_t73* ___rgbKey, ByteU5BU5D_t73* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * AesManaged_CreateEncryptor_m3942 (AesManaged_t728 * __this, ByteU5BU5D_t73* ___rgbKey, ByteU5BU5D_t73* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C" ByteU5BU5D_t73* AesManaged_get_IV_m3943 (AesManaged_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C" void AesManaged_set_IV_m3944 (AesManaged_t728 * __this, ByteU5BU5D_t73* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C" ByteU5BU5D_t73* AesManaged_get_Key_m3945 (AesManaged_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C" void AesManaged_set_Key_m3946 (AesManaged_t728 * __this, ByteU5BU5D_t73* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C" int32_t AesManaged_get_KeySize_m3947 (AesManaged_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C" void AesManaged_set_KeySize_m3948 (AesManaged_t728 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C" Object_t * AesManaged_CreateDecryptor_m3949 (AesManaged_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C" Object_t * AesManaged_CreateEncryptor_m3950 (AesManaged_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C" void AesManaged_Dispose_m3951 (AesManaged_t728 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
