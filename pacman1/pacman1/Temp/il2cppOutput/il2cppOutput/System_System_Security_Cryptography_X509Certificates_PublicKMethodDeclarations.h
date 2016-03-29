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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t991;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t781;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t992;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t871;
// System.Security.Cryptography.Oid
struct Oid_t993;
// System.Byte[]
struct ByteU5BU5D_t73;
// System.Security.Cryptography.DSA
struct DSA_t782;
// System.Security.Cryptography.RSA
struct RSA_t775;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5336 (PublicKey_t991 * __this, X509Certificate_t781 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t992 * PublicKey_get_EncodedKeyValue_m5337 (PublicKey_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t992 * PublicKey_get_EncodedParameters_m5338 (PublicKey_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t871 * PublicKey_get_Key_m5339 (PublicKey_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t993 * PublicKey_get_Oid_m5340 (PublicKey_t991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t73* PublicKey_GetUnsignedBigInteger_m5341 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t782 * PublicKey_DecodeDSA_m5342 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___rawPublicKey, ByteU5BU5D_t73* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t775 * PublicKey_DecodeRSA_m5343 (Object_t * __this /* static, unused */, ByteU5BU5D_t73* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
