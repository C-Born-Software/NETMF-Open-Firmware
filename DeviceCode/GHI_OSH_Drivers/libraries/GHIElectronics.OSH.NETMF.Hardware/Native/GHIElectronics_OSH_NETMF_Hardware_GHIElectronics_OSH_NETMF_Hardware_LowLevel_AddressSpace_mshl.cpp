//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "GHIElectronics_OSH_NETMF_Hardware.h"
#include "GHIElectronics_OSH_NETMF_Hardware_GHIElectronics_OSH_NETMF_Hardware_LowLevel_AddressSpace.h"

using namespace GHIElectronics::OSH::NETMF::Hardware::LowLevel;


HRESULT Library_GHIElectronics_OSH_NETMF_Hardware_GHIElectronics_OSH_NETMF_Hardware_LowLevel_AddressSpace::Write___STATIC__VOID__U4__SZARRAY_U1__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        CLR_RT_TypedArray_UINT8 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ARRAY( stack, 1, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param3 ) );

        AddressSpace::Write( param0, param1, param2, param3, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_GHIElectronics_OSH_NETMF_Hardware_GHIElectronics_OSH_NETMF_Hardware_LowLevel_AddressSpace::Read___STATIC__VOID__U4__SZARRAY_U1__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        CLR_RT_TypedArray_UINT8 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ARRAY( stack, 1, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param3 ) );

        AddressSpace::Read( param0, param1, param2, param3, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}
