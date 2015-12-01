//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _LIB_H_
#define _LIB_H_

#include <TinyCLR_Interop.h>
struct Library_Lib_GHI_IO_ControllerAreaNetwork
{
    static const int FIELD_STATIC__instanceList = 0;
    static const int FIELD_STATIC__instanceListLock = 1;
    static const int FIELD_STATIC__cerbTimings = 2;
    static const int FIELD_STATIC__emxTimings = 3;
    static const int FIELD_STATIC__g80Timings = 4;
    static const int FIELD_STATIC__g120Timings = 5;
    static const int FIELD_STATIC__g400Timings = 6;

    static const int FIELD__disposed = 1;
    static const int FIELD__enabled = 2;
    static const int FIELD__channel = 3;
    static const int FIELD__receiveBufferSize = 4;
    static const int FIELD__baudRateRegister = 5;
    static const int FIELD__timings = 6;
    static const int FIELD__MessageAvailable = 7;
    static const int FIELD__ErrorReceived = 8;

    TINYCLR_NATIVE_DECLARE(NativeSetExplicitFilters___VOID__SZARRAY_U4);
    TINYCLR_NATIVE_DECLARE(NativeSetGroupFilters___VOID__SZARRAY_U4__SZARRAY_U4);
    TINYCLR_NATIVE_DECLARE(NativeEnable___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeDisable___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeReset___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeReceiveErrorCount___I4);
    TINYCLR_NATIVE_DECLARE(NativeTransmitErrorCount___I4);
    TINYCLR_NATIVE_DECLARE(NativeReceivedMessageCount___I4);
    TINYCLR_NATIVE_DECLARE(NativeTransmittedMessagesSent___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeTransmissionAllowed___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeReadMessages___I4__SZARRAY_GHIIOControllerAreaNetworkMessage__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeSendMessages___I4__SZARRAY_GHIIOControllerAreaNetworkMessage__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeDiscardIncomingMessages___VOID);
    TINYCLR_NATIVE_DECLARE(NativeSourceClock___STATIC__I4);
    TINYCLR_NATIVE_DECLARE(NativeCalculateRegisterValue___STATIC__U4__I4__I4__I4__I4__I4__BOOLEAN);

    //--//

};

struct Library_Lib_GHI_Processor_Display
{
    static const int FIELD_STATIC__width = 7;
    static const int FIELD_STATIC__height = 8;
    static const int FIELD_STATIC__outputEnableIsFixed = 9;
    static const int FIELD_STATIC__outputEnablePolarity = 10;
    static const int FIELD_STATIC__pixelPolarity = 11;
    static const int FIELD_STATIC__pixelClockRateKHz = 12;
    static const int FIELD_STATIC__horizontalSyncPolarity = 13;
    static const int FIELD_STATIC__horizontalSyncPulseWidth = 14;
    static const int FIELD_STATIC__horizontalBackPorch = 15;
    static const int FIELD_STATIC__horizontalFrontPorch = 16;
    static const int FIELD_STATIC__verticalSyncPolarity = 17;
    static const int FIELD_STATIC__verticalSyncPulseWidth = 18;
    static const int FIELD_STATIC__verticalBackPorch = 19;
    static const int FIELD_STATIC__verticalFrontPorch = 20;
    static const int FIELD_STATIC__bootupMessages = 21;
    static const int FIELD_STATIC__rotation = 22;
    static const int FIELD_STATIC__spiModule = 23;
    static const int FIELD_STATIC__chipSelectPin = 24;
    static const int FIELD_STATIC__controlPin = 25;
    static const int FIELD_STATIC__backlightPin = 26;
    static const int FIELD_STATIC__resetPin = 27;
    static const int FIELD_STATIC__bitmapFormat = 28;
    static const int FIELD_STATIC__type = 29;

    TINYCLR_NATIVE_DECLARE(NativeGetLcdConfiguration___STATIC__VOID__BYREF_BOOLEAN__BYREF_U1__BYREF_U4__BYREF_U4__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U1__BYREF_U4);
    TINYCLR_NATIVE_DECLARE(NativeSetLcdConfiguration___STATIC__BOOLEAN__BOOLEAN__U1__U4__U4__BOOLEAN__BOOLEAN__BOOLEAN__BOOLEAN__BOOLEAN__U1__U1__U1__U1__U1__U1__U4);
    TINYCLR_NATIVE_DECLARE(NativeSetSpiConfiguration___STATIC__BOOLEAN__I4__I4__I4__I4__I4__I4__I4__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeSetTouchPins___STATIC__BOOLEAN__U4__U4__U4__U4__U4__U4);

    //--//

};

struct Library_Lib_GHI_Processor_RuntimeLoadableProcedures
{
    static const int FIELD_STATIC__NativeEvent = 30;


    //--//

};

struct Library_Lib_GHI_Processor_RuntimeLoadableProcedures__ElfImage
{
    static const int FIELD__address = 1;
    static const int FIELD__size = 2;
    static const int FIELD__regionCount = 3;
    static const int FIELD__imageData = 4;

    TINYCLR_NATIVE_DECLARE(NativeZeroRegion___VOID__U4__U4);
    TINYCLR_NATIVE_DECLARE(NativeLoadElf___VOID__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeFindSymbolAddress___U4__SZARRAY_U1__STRING__GHIProcessorRuntimeLoadableProceduresElfImageSymbolType);

    //--//

};

struct Library_Lib_GHI_IO_ControllerAreaNetwork__ErrorReceivedEventArgs
{
    static const int FIELD__error = 1;


    //--//

};

struct Library_Lib_GHI_Utilities_InternalEvent
{
    static const int FIELD_STATIC__dispatcher = 31;
    static const int FIELD_STATIC__ControllerAreaNetworkActivity = 32;
    static const int FIELD_STATIC__RuntimeLoadableProceduresEvent = 33;
    static const int FIELD_STATIC__UsbDeviceConnected = 34;
    static const int FIELD_STATIC__UsbDeviceConnectionFailed = 35;
    static const int FIELD_STATIC__UsbDeviceDisconnected = 36;


    //--//

};

struct Library_Lib_GHI_Processor_InFieldUpdate
{
    static const int FIELD_STATIC__initialized = 37;
    static const int FIELD_STATIC__initializedType = 38;

    TINYCLR_NATIVE_DECLARE(NativeInitialize___STATIC__BOOLEAN__GHIProcessorInFieldUpdateTypes);
    TINYCLR_NATIVE_DECLARE(NativeLoad___STATIC__BOOLEAN__GHIProcessorInFieldUpdateTypes__SZARRAY_U1__I4);
    TINYCLR_NATIVE_DECLARE(NativeFlashAndReset___STATIC__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeAbort___STATIC__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeCalculateCRC16___STATIC__U2__GHIProcessorInFieldUpdateTypes);

    //--//

};

struct Library_Lib_GHI_Utilities_Bitmaps
{
    TINYCLR_NATIVE_DECLARE(NativeConvert___STATIC__VOID__MicrosoftSPOTGraphicsMicrosoftSPOTBitmap__SZARRAY_U1__GHIUtilitiesBitmapsFormat);
    TINYCLR_NATIVE_DECLARE(NativeConvertToFile___STATIC__VOID__MicrosoftSPOTGraphicsMicrosoftSPOTBitmap__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeGetBuffer___STATIC__VOID__MicrosoftSPOTGraphicsMicrosoftSPOTBitmap__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeSetBuffer___STATIC__VOID__MicrosoftSPOTGraphicsMicrosoftSPOTBitmap__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeGetBuffer___STATIC__VOID__MicrosoftSPOTGraphicsMicrosoftSPOTBitmap__SZARRAY_U2);
    TINYCLR_NATIVE_DECLARE(NativeSetBuffer___STATIC__VOID__MicrosoftSPOTGraphicsMicrosoftSPOTBitmap__SZARRAY_U2);

    //--//

};

struct Library_Lib_GHI_IO_Audio
{
    TINYCLR_NATIVE_DECLARE(NativePlayPCM___STATIC__VOID__U1__SZARRAY_U1__I4__I4__I4);

    //--//

};

struct Library_Lib_GHI_IO_PulseFeedback
{
    static const int FIELD__disposed = 1;
    static const int FIELD__timeout = 2;
    static const int FIELD__pulseLength = 3;
    static const int FIELD__pulseState = 4;
    static const int FIELD__echoState = 5;
    static const int FIELD__pulsePin = 6;
    static const int FIELD__echoPin = 7;
    static const int FIELD__mode = 8;
    static const int FIELD__resistorMode = 9;

    TINYCLR_NATIVE_DECLARE(NativeReadDrainTime___I8);
    TINYCLR_NATIVE_DECLARE(NativeReadEcho___I8__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeFinalize___VOID);

    //--//

};

struct Library_Lib_GHI_IO_SignalCapture
{
    static const int FIELD__timeout = 1;
    static const int FIELD__disposed = 2;
    static const int FIELD__port = 3;

    TINYCLR_NATIVE_DECLARE(NativeRead___STATIC__I4__U4__BYREF_BOOLEAN__SZARRAY_U4__I4__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeRead___STATIC__I4__U4__BOOLEAN__SZARRAY_U4__I4__I4__I4);

    //--//

};

struct Library_Lib_GHI_IO_SignalGenerator
{
    static const int FIELD__pin = 1;
    static const int FIELD__disposed = 2;
    static const int FIELD__nativePointer = 3;

    TINYCLR_NATIVE_DECLARE(NativeConstructor___BOOLEAN__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeDispose___VOID);
    TINYCLR_NATIVE_DECLARE(NativeIsActive___BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeSet___VOID__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeSet___BOOLEAN__BOOLEAN__SZARRAY_U4__I4__I4__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeSet___VOID__BOOLEAN__SZARRAY_U4__I4__I4__U4__BOOLEAN__U4);

    //--//

};

struct Library_Lib_GHI_IO_SoftwareI2CBus
{
    static const int FIELD__emptyBuffer = 1;
    static const int FIELD__disposed = 2;
    static const int FIELD__clockPin = 3;
    static const int FIELD__dataPin = 4;

    TINYCLR_NATIVE_DECLARE(NativeWriteRead___STATIC__BOOLEAN__I4__I4__U1__SZARRAY_U1__I4__I4__SZARRAY_U1__I4__I4__BYREF_I4__BYREF_I4);

    //--//

};

struct Library_Lib_GHI_IO_Storage_SDCard
{
    static const int FIELD__id = 1;
    static const int FIELD__disposed = 2;
    static const int FIELD__mounted = 3;

    TINYCLR_NATIVE_DECLARE(NativeConstructor___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeFinalize___VOID);
    TINYCLR_NATIVE_DECLARE(NativeMount___VOID__I4);
    TINYCLR_NATIVE_DECLARE(NativeUnmount___VOID);

    //--//

};

struct Library_Lib_GHI_Processor_AddressSpace
{
    TINYCLR_NATIVE_DECLARE(NativeWrite___STATIC__VOID__U4__SZARRAY_U1__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeRead___STATIC__VOID__U4__SZARRAY_U1__I4__I4);

    //--//

};

struct Library_Lib_GHI_Processor_Configuration
{
    static const int FIELD_STATIC__size = 39;
    static const int FIELD_STATIC__address = 40;

    TINYCLR_NATIVE_DECLARE(NativeGetParameters___STATIC__VOID__BYREF_U4__BYREF_U4);
    TINYCLR_NATIVE_DECLARE(NativeRead___STATIC__BOOLEAN__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeWrite___STATIC__BOOLEAN__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeGetEntrySize___STATIC__I4__STRING);
    TINYCLR_NATIVE_DECLARE(NativeReadEntry___STATIC__BOOLEAN__STRING__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeWriteEntry___STATIC__BOOLEAN__STRING__SZARRAY_U1);

    //--//

};

struct Library_Lib_GHI_Processor_DebugInterface
{
    static const int FIELD_STATIC__interfaceType = 41;
    static const int FIELD_STATIC__comPortNumber = 42;
    static const int FIELD_STATIC__useInTinyBooter = 43;

    TINYCLR_NATIVE_DECLARE(NativeLoad___STATIC__VOID__BYREF_I4__BYREF_I4__BYREF_BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeSave___STATIC__BOOLEAN__I4__I4__BOOLEAN);

    //--//

};

struct Library_Lib_GHI_Processor_ManufacturerUse
{
    TINYCLR_NATIVE_DECLARE(NativeConfigure___STATIC__VOID__U4__SZARRAY_U1);

    //--//

};

struct Library_Lib_GHI_Processor_RealTimeClock
{
    static const int FIELD_STATIC__alarm = 44;

    TINYCLR_NATIVE_DECLARE(NativeSetTime___STATIC__VOID__I4__I4__I4__I4__I4__I4__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeGetTime___STATIC__VOID__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4__BYREF_I4);
    TINYCLR_NATIVE_DECLARE(NativeSetAlarm___STATIC__VOID__I4__I4__I4__I4__I4__I4__I4__I4);

    //--//

};

struct Library_Lib_GHI_Processor_Register
{
    static const int FIELD__address = 1;

    TINYCLR_NATIVE_DECLARE(NativeWrite___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeRead___U4);
    TINYCLR_NATIVE_DECLARE(NativeSetBits___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeClearBits___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeToggleBits___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeIsValid___STATIC__BOOLEAN__U4);

    //--//

};

struct Library_Lib_GHI_Processor_StartupLogo
{
    static const int FIELD_STATIC__width = 45;
    static const int FIELD_STATIC__height = 46;
    static const int FIELD_STATIC__x = 47;
    static const int FIELD_STATIC__y = 48;
    static const int FIELD_STATIC__enabled = 49;
    static const int FIELD_STATIC__image = 50;

    TINYCLR_NATIVE_DECLARE(NativeSupportedWidth___STATIC__I4);
    TINYCLR_NATIVE_DECLARE(NativeSupportedHeight___STATIC__I4);
    TINYCLR_NATIVE_DECLARE(NativeGetEnabled___STATIC__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeGetBitmap___STATIC__VOID__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeGetCoords___STATIC__VOID__BYREF_I4__BYREF_I4);
    TINYCLR_NATIVE_DECLARE(NativeSave___STATIC__BOOLEAN__SZARRAY_U1__I4__I4__BOOLEAN);

    //--//

};

struct Library_Lib_GHI_Processor_Watchdog
{
    static const int FIELD_STATIC__lastResetCause = 51;
    static const int FIELD_STATIC__maxTimeout = 52;
    static const int FIELD_STATIC__timeout = 53;
    static const int FIELD_STATIC__enabled = 54;

    TINYCLR_NATIVE_DECLARE(NativeLastResetCause___STATIC__U1);
    TINYCLR_NATIVE_DECLARE(NativeGetMaxTimeout___STATIC__U4);
    TINYCLR_NATIVE_DECLARE(NativeEnable___STATIC__VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeDisable___STATIC__VOID);
    TINYCLR_NATIVE_DECLARE(NativeResetCounter___STATIC__VOID);

    //--//

};

struct Library_Lib_GHI_Utilities_Arrays
{
    TINYCLR_NATIVE_DECLARE(NativeContains___STATIC__I4__SZARRAY_U1__I4__I4__SZARRAY_U1__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeCompare___STATIC__I4__SZARRAY_U1__I4__I4__SZARRAY_U1__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeInsertString___STATIC__VOID__SZARRAY_U1__I4__STRING__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeInsertFloat___STATIC__VOID__SZARRAY_U1__I4__R4);
    TINYCLR_NATIVE_DECLARE(NativeInsertInt32___STATIC__VOID__SZARRAY_U1__I4__I4);
    TINYCLR_NATIVE_DECLARE(NativeExtractFloat___STATIC__R4__SZARRAY_U1__I4);
    TINYCLR_NATIVE_DECLARE(NativeExtractInt32___STATIC__I4__SZARRAY_U1__I4);
    TINYCLR_NATIVE_DECLARE(NativeSplitToArray___STATIC__I4__SZARRAY_U1__I4__CHAR__SZARRAY_R4);

    //--//

};

struct Library_Lib_GHI_Utilities_Crc
{
    TINYCLR_NATIVE_DECLARE(NativeCrc16___STATIC__U2__SZARRAY_U1__I4__I4__U2);
    TINYCLR_NATIVE_DECLARE(NativeCrc32___STATIC__U4__SZARRAY_U1__I4__I4__U4);

    //--//

};

struct Library_Lib_GHI_Utilities_Xtea
{
    static const int FIELD__key = 1;

    TINYCLR_NATIVE_DECLARE(NativeEncrypt___VOID__SZARRAY_U1__I4__I4__SZARRAY_U1__I4);
    TINYCLR_NATIVE_DECLARE(NativeDecrypt___VOID__SZARRAY_U1__I4__I4__SZARRAY_U1__I4);

    //--//

};

struct Library_Lib_GHI_IO_SoftwareI2CBus__I2CDevice
{
    static const int FIELD__bus = 1;
    static const int FIELD__address = 2;


    //--//

};

struct Library_Lib_GHI_Utilities_InternalEvent__InternalEventEventArgs
{
    static const int FIELD__eventId = 1;
    static const int FIELD__data = 2;


    //--//

};

struct Library_Lib_GHI_Processor_RuntimeLoadableProcedures__Memory
{
    static const int FIELD_STATIC__baseAddress = 55;
    static const int FIELD_STATIC__size = 56;

    TINYCLR_NATIVE_DECLARE(NativeGetRlpInfo___STATIC__VOID__BYREF_U4__BYREF_U4);

    //--//

};

struct Library_Lib_GHI_IO_ControllerAreaNetwork__Message
{
    static const int FIELD__data = 1;
    static const int FIELD__arbitrationId = 2;
    static const int FIELD__length = 3;
    static const int FIELD__isRTR = 4;
    static const int FIELD__isEID = 5;
    static const int FIELD__timeStamp = 6;


    //--//

};

struct Library_Lib_GHI_IO_ControllerAreaNetwork__MessageAvailableEventArgs
{
    static const int FIELD__available = 1;


    //--//

};

struct Library_Lib_GHI_Processor_RuntimeLoadableProcedures__NativeEventEventArgs
{
    static const int FIELD__data = 1;


    //--//

};

struct Library_Lib_GHI_Processor_RuntimeLoadableProcedures__NativeFunction
{
    static const int FIELD__disposed = 1;
    static const int FIELD__address = 2;
    static const int FIELD__sizeSet = 3;
    static const int FIELD__argumentCount = 4;
    static const int FIELD__nativeParameterPool = 5;
    static const int FIELD__nativeParameterList = 6;
    static const int FIELD__nativeIndex = 7;

    TINYCLR_NATIVE_DECLARE(NativeDispose___VOID);
    TINYCLR_NATIVE_DECLARE(NativeInvoke___I4);
    TINYCLR_NATIVE_DECLARE(NativeSetSize___VOID__I4);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__U1);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__I1);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__U2);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__I2);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__U4);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__I4);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__U8);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__I8);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__R4);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__R8);
    TINYCLR_NATIVE_DECLARE(NativeAddArgumentBool___VOID__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_I1);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_U2);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_I2);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_U4);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_I4);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_U8);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_I8);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_R4);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__SZARRAY_R8);
    TINYCLR_NATIVE_DECLARE(NativeAddArgumentBool___VOID__SZARRAY_BOOLEAN);
    TINYCLR_NATIVE_DECLARE(NativeAddArgument___VOID__MicrosoftSPOTGraphicsMicrosoftSPOTBitmap);

    //--//

};

struct Library_Lib_GHI_IO_ControllerAreaNetwork__Timings
{
    static const int FIELD__propagation = 1;
    static const int FIELD__phase1 = 2;
    static const int FIELD__phase2 = 3;
    static const int FIELD__brp = 4;
    static const int FIELD__synchronizationJumpWidth = 5;
    static const int FIELD__useMultiBitSampling = 6;


    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_GHI_Hardware;

#endif  //_LIB_H_
