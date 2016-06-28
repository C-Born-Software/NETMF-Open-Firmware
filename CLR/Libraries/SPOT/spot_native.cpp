////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "spot.h"
    

static const CLR_RT_MethodHandler method_lookup[] =
{
    Library_spot_native_Microsoft_SPOT_Reflection::GetTypesImplementingInterface___STATIC__SZARRAY_mscorlibSystemType__mscorlibSystemType,
    Library_spot_native_Microsoft_SPOT_Reflection::IsTypeLoaded___STATIC__BOOLEAN__mscorlibSystemType,
    Library_spot_native_Microsoft_SPOT_Reflection::GetTypeHash___STATIC__U4__mscorlibSystemType,
    Library_spot_native_Microsoft_SPOT_Reflection::GetAssemblyHash___STATIC__U4__mscorlibSystemReflectionAssembly,
    Library_spot_native_Microsoft_SPOT_Reflection::GetAssemblies___STATIC__SZARRAY_mscorlibSystemReflectionAssembly,
    Library_spot_native_Microsoft_SPOT_Reflection::GetAssemblyInfo___STATIC__BOOLEAN__SZARRAY_U1__MicrosoftSPOTReflectionAssemblyInfo,
    Library_spot_native_Microsoft_SPOT_Reflection::GetAssemblyMemoryInfo___STATIC__BOOLEAN__mscorlibSystemReflectionAssembly__MicrosoftSPOTReflectionAssemblyMemoryInfo,
    Library_spot_native_Microsoft_SPOT_Reflection::GetTypeFromHash___STATIC__mscorlibSystemType__U4,
    Library_spot_native_Microsoft_SPOT_Reflection::GetAssemblyFromHash___STATIC__mscorlibSystemReflectionAssembly__U4,
    Library_spot_native_Microsoft_SPOT_Reflection::Serialize___STATIC__SZARRAY_U1__OBJECT__mscorlibSystemType,
    Library_spot_native_Microsoft_SPOT_Reflection::Deserialize___STATIC__OBJECT__SZARRAY_U1__mscorlibSystemType,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_native_Microsoft_SPOT_Debug::Print___STATIC__VOID__STRING,
    Library_spot_native_Microsoft_SPOT_Debug::GC___STATIC__U4__BOOLEAN,
    Library_spot_native_Microsoft_SPOT_Debug::EnableGCMessages___STATIC__VOID__BOOLEAN,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_native_Microsoft_SPOT_ExecutionConstraint::Install___STATIC__VOID__I4__I4,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::Dispose___VOID,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::_ctor___VOID__mscorlibSystemThreadingTimerCallback__OBJECT__I4__I4,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::_ctor___VOID__mscorlibSystemThreadingTimerCallback__OBJECT__mscorlibSystemTimeSpan__mscorlibSystemTimeSpan,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::_ctor___VOID__mscorlibSystemThreadingTimerCallback__OBJECT__mscorlibSystemDateTime__mscorlibSystemTimeSpan,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::_ctor___VOID__mscorlibSystemThreadingTimerCallback__OBJECT__MicrosoftSPOTExtendedTimerTimeEvents,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::Change___VOID__I4__I4,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::Change___VOID__mscorlibSystemTimeSpan__mscorlibSystemTimeSpan,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::Change___VOID__mscorlibSystemDateTime__mscorlibSystemTimeSpan,
    Library_spot_native_Microsoft_SPOT_ExtendedTimer::get_LastExpiration___mscorlibSystemTimeSpan,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::_ctor___VOID__OBJECT__mscorlibSystemType__U4__U4,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::get_Selector___mscorlibSystemType,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::get_Id___U4,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::get_Flags___U4,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::get_Priority___I4,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::set_Priority___VOID__I4,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::PushBackIntoRecoverList___VOID,
    NULL,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::Recover___STATIC__MicrosoftSPOTExtendedWeakReference__mscorlibSystemType__U4,
    Library_spot_native_Microsoft_SPOT_ExtendedWeakReference::FlushAll___STATIC__VOID,
    NULL,
    NULL,
    Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo::GetSystemVersion___STATIC__VOID__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4,
    NULL,
    Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo::get_OEMString___STATIC__STRING,
    Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo::get_IsBigEndian___STATIC__BOOLEAN,
    NULL,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::ComputeCRC___STATIC__U4__SZARRAY_U1__I4__I4__U4,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::ExtractValueFromArray___STATIC__U4__SZARRAY_U1__I4__I4,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::InsertValueIntoArray___STATIC__VOID__SZARRAY_U1__I4__I4__U4,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::ExtractRangeFromArray___STATIC__SZARRAY_U1__SZARRAY_U1__I4__I4,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::CombineArrays___STATIC__SZARRAY_U1__SZARRAY_U1__SZARRAY_U1,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::CombineArrays___STATIC__SZARRAY_U1__SZARRAY_U1__I4__I4__SZARRAY_U1__I4__I4,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::SetLocalTime___STATIC__VOID__mscorlibSystemDateTime,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::GetMachineTime___STATIC__mscorlibSystemTimeSpan,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::Piezo___STATIC__VOID__U4__U4,
    Library_spot_native_Microsoft_SPOT_Hardware_Utility::Backlight___STATIC__VOID__BOOLEAN,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_native_Microsoft_SPOT_Math::Cos___STATIC__I4__I4,
    Library_spot_native_Microsoft_SPOT_Math::Sin___STATIC__I4__I4,
    Library_spot_native_Microsoft_SPOT_Messaging_EndPoint::_ctor___VOID__mscorlibSystemType__U4,
    Library_spot_native_Microsoft_SPOT_Messaging_EndPoint::Check___BOOLEAN__mscorlibSystemType__U4__I4,
    Library_spot_native_Microsoft_SPOT_Messaging_EndPoint::GetMessage___MicrosoftSPOTMessagingMessage__I4,
    NULL,
    Library_spot_native_Microsoft_SPOT_Messaging_EndPoint::SendMessageRaw___SZARRAY_U1__mscorlibSystemType__U4__I4__SZARRAY_U1,
    Library_spot_native_Microsoft_SPOT_Messaging_EndPoint::ReplyRaw___VOID__MicrosoftSPOTMessagingMessage__SZARRAY_U1,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_native_Microsoft_SPOT_ResourceUtility::GetObject___STATIC__OBJECT__mscorlibSystemResourcesResourceManager__mscorlibSystemEnum,
    Library_spot_native_Microsoft_SPOT_ResourceUtility::GetObject___STATIC__OBJECT__mscorlibSystemResourcesResourceManager__mscorlibSystemEnum__I4__I4,
    Library_spot_native_Microsoft_SPOT_ResourceUtility::set_CurrentUICultureInternal___STATIC__VOID__mscorlibSystemGlobalizationCultureInfo,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_native_Microsoft_SPOT_WeakDelegate::Combine___STATIC__mscorlibSystemDelegate__mscorlibSystemDelegate__mscorlibSystemDelegate,
    Library_spot_native_Microsoft_SPOT_WeakDelegate::Remove___STATIC__mscorlibSystemDelegate__mscorlibSystemDelegate__mscorlibSystemDelegate,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_native_System_Security_Cryptography_X509Certificates_X509Certificate::ParseCertificate___STATIC__VOID__SZARRAY_U1__STRING__BYREF_STRING__BYREF_STRING__BYREF_mscorlibSystemDateTime__BYREF_mscorlibSystemDateTime,
    Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo__SystemID::get_OEM___STATIC__U1,
    Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo__SystemID::get_Model___STATIC__U1,
    Library_spot_native_Microsoft_SPOT_Hardware_SystemInfo__SystemID::get_SKU___STATIC__U2,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Microsoft_SPOT_Native =
{
    "Microsoft.SPOT.Native", 
    0x4BF34DF8,
    method_lookup
};

