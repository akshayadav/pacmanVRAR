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

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t532;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t526;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C" void StandaloneInputModule__ctor_m2553 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
extern "C" int32_t StandaloneInputModule_get_inputMode_m2554 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
extern "C" bool StandaloneInputModule_get_allowActivationOnMobileDevice_m2555 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
extern "C" void StandaloneInputModule_set_allowActivationOnMobileDevice_m2556 (StandaloneInputModule_t532 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_forceModuleActive()
extern "C" bool StandaloneInputModule_get_forceModuleActive_m2557 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_forceModuleActive(System.Boolean)
extern "C" void StandaloneInputModule_set_forceModuleActive_m2558 (StandaloneInputModule_t532 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
extern "C" float StandaloneInputModule_get_inputActionsPerSecond_m2559 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
extern "C" void StandaloneInputModule_set_inputActionsPerSecond_m2560 (StandaloneInputModule_t532 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_repeatDelay()
extern "C" float StandaloneInputModule_get_repeatDelay_m2561 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_repeatDelay(System.Single)
extern "C" void StandaloneInputModule_set_repeatDelay_m2562 (StandaloneInputModule_t532 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
extern "C" String_t* StandaloneInputModule_get_horizontalAxis_m2563 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
extern "C" void StandaloneInputModule_set_horizontalAxis_m2564 (StandaloneInputModule_t532 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
extern "C" String_t* StandaloneInputModule_get_verticalAxis_m2565 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
extern "C" void StandaloneInputModule_set_verticalAxis_m2566 (StandaloneInputModule_t532 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
extern "C" String_t* StandaloneInputModule_get_submitButton_m2567 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
extern "C" void StandaloneInputModule_set_submitButton_m2568 (StandaloneInputModule_t532 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
extern "C" String_t* StandaloneInputModule_get_cancelButton_m2569 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
extern "C" void StandaloneInputModule_set_cancelButton_m2570 (StandaloneInputModule_t532 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C" void StandaloneInputModule_UpdateModule_m2571 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C" bool StandaloneInputModule_IsModuleSupported_m2572 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
extern "C" bool StandaloneInputModule_ShouldActivateModule_m2573 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C" void StandaloneInputModule_ActivateModule_m2574 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
extern "C" void StandaloneInputModule_DeactivateModule_m2575 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
extern "C" void StandaloneInputModule_Process_m2576 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendSubmitEventToSelectedObject_m2577 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
extern "C" Vector2_t15  StandaloneInputModule_GetRawMoveVector_m2578 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendMoveEventToSelectedObject_m2579 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
extern "C" void StandaloneInputModule_ProcessMouseEvent_m2580 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent(System.Int32)
extern "C" void StandaloneInputModule_ProcessMouseEvent_m2581 (StandaloneInputModule_t532 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendUpdateEventToSelectedObject_m2582 (StandaloneInputModule_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C" void StandaloneInputModule_ProcessMousePress_m2583 (StandaloneInputModule_t532 * __this, MouseButtonEventData_t526 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
