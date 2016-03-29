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

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t978;
// System.Net.WebRequest
struct WebRequest_t917;
// System.Uri
struct Uri_t28;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m5213 (HttpRequestCreator_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t917 * HttpRequestCreator_Create_m5214 (HttpRequestCreator_t978 * __this, Uri_t28 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
