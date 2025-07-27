#pragma once

#include <cstdint>

#include <RED4ext/Hashing/FNV1a.hpp>

// clang-format off
namespace RED4ext::Detail::AddressHashes
{
#pragma region CBaseFunction
constexpr std::uint32_t CBaseFunction_Handlers = 0x5A7D28A9;
constexpr std::uint32_t CBaseFunction_ExecuteScripted = 0xE1F920D6;
constexpr std::uint32_t CBaseFunction_ExecuteNative = 0xE1321AEB;
constexpr std::uint32_t CBaseFunction_InternalExecute = 0x1817231D;
#pragma endregion

#pragma region CBaseRTTIType
constexpr std::uint32_t CBaseRTTIType_sub_80 = 0xE46F169E;
constexpr std::uint32_t CBaseRTTIType_sub_88 = 0x15BE1744;
constexpr std::uint32_t CBaseRTTIType_sub_90 = 0xA45935A1;
constexpr std::uint32_t CBaseRTTIType_sub_98 = 0xAEA91F1D;
constexpr std::uint32_t CBaseRTTIType_sub_A0 = 0x8ED61BC2;
#pragma endregion

#pragma region CBitfield
constexpr std::uint32_t CBitfield_Unserialize = 0xA6981914;
constexpr std::uint32_t CBitfield_ToString = 0x54231404;
constexpr std::uint32_t CBitfield_FromString = 0xA09B15A8;
#pragma endregion

#pragma region CClass
constexpr std::uint32_t CClass_Unserialize = 0xE4AA0CAD;
constexpr std::uint32_t CClass_ToString = 0x65293F06;
constexpr std::uint32_t CClass_sub_80 = 0x11D11B0C;
constexpr std::uint32_t CClass_sub_88 = 0x4BDF1BB2;
constexpr std::uint32_t CClass_sub_90 = 0xA26D374E;
constexpr std::uint32_t CClass_sub_98 = 0x48C020CA;
constexpr std::uint32_t CClass_sub_A0 = 0x15F21D6F;
constexpr std::uint32_t CClass_sub_B0 = 0xA0911974;
constexpr std::uint32_t CClass_sub_C0 = 3523744305UL;
constexpr std::uint32_t CClass_GetMaxAlignment = 0xD14E1230;
constexpr std::uint32_t CClass_sub_D0 = 0x37750EBF;
constexpr std::uint32_t CClass_CreateInstance = 0x5A800F1D;
constexpr std::uint32_t CClass_GetProperty = 0x8F031512;
constexpr std::uint32_t CClass_GetProperties = 1652956141UL;
constexpr std::uint32_t CClass_ClearScriptedData = 0x31F20E93;
constexpr std::uint32_t CClass_InitializeProperties = 2257327441UL;
constexpr std::uint32_t CClass_AssignDefaultValuesToProperties = 0x97DF1590;
#pragma endregion

#pragma region CClassFunction
constexpr std::uint32_t CClassFunction_ctor = 0x602D29F3;
#pragma endregion

#pragma region CClassStaticFunction
constexpr std::uint32_t CClassStaticFunction_ctor = 2920426135UL;
#pragma endregion

#pragma region CEnum
constexpr std::uint32_t CEnum_Unserialize = 0x40D317A6;
constexpr std::uint32_t CEnum_ToString = 0x41A1296;
constexpr std::uint32_t CEnum_FromString = 0x21CA1EC1;
#pragma endregion

#pragma region CGameEngine
constexpr std::uint32_t CGameEngine = 0x97F209D6;
#pragma endregion

#pragma region CGlobalFunction
constexpr std::uint32_t CGlobalFunction_ctor = 0xFA6B24D0;
#pragma endregion

#pragma region CNamePool
constexpr std::uint32_t CNamePool_AddCstr = 0xA00C9B;
constexpr std::uint32_t CNamePool_AddCString = 0xFFD61709;
constexpr std::uint32_t CNamePool_AddPair = 0xD9840BD8;
constexpr std::uint32_t CNamePool_Get = 0x68DF07DC;
#pragma endregion

#pragma region CommandListContext
constexpr std::uint32_t GetFreeCommandList = 1926836641UL;
constexpr std::uint32_t CommandListContext_dtor = 4228123904UL;
constexpr std::uint32_t CommandListContext_AddPendingBarrier = 2814122829UL;
constexpr std::uint32_t CommandListContext_Close = 1163138096UL;
constexpr std::uint32_t CommandListContext_FlushPendingBarriers = 2786924000UL;
#pragma endregion

#pragma region CRTTIRegistrator
constexpr std::uint32_t CRTTIRegistrator_RTTIAsyncId = 0xDDBD19E8;
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr std::uint32_t CRTTIScriptReferenceType_ctor = 0xCB8A115C;
constexpr std::uint32_t CRTTIScriptReferenceType_Set = 0x22EE172F;
#pragma endregion

#pragma region CRTTISystem
constexpr std::uint32_t CRTTISystem_Get = 0x4A610F64;
#pragma endregion

#pragma region CStack
constexpr std::uint32_t CStack_vtbl = 0x349A0EE1;
#pragma endregion

#pragma region CString
constexpr std::uint32_t CString_ctor_str = 0xC81F0AAB;
constexpr std::uint32_t CString_ctor_span = 0x7B210877;
constexpr std::uint32_t CString_copy = 0xE8B40B51;
constexpr std::uint32_t CString_dtor = 0x5405072C;
#pragma endregion

#pragma region DeviceData
constexpr std::uint32_t g_DeviceData = 1239944840UL;
#pragma endregion

#pragma region DynArray
constexpr std::uint32_t DynArray_Realloc = 0x7AA013D2;
#pragma endregion

#pragma region D3D12MA
constexpr std::uint32_t Allocator_CreateResource = 2508272872UL;
#pragma endregion

#pragma region Handle
constexpr std::uint32_t Handle_ctor = 0xBA0C115D;
constexpr std::uint32_t Handle_DecWeakRef = 0x333B1404;
#pragma endregion

#pragma region IRenderProxy
constexpr std::uint32_t IRenderProxy_sub_00 = 302583262UL;
constexpr std::uint32_t IRenderProxy_sub_08 = 3505328647UL;
constexpr std::uint32_t IRenderProxy_sub_18 = 2756580845UL;
constexpr std::uint32_t IRenderProxy_sub_58 = 2462126272UL;
constexpr std::uint32_t IRenderProxy_sub_60 = 3491501770UL;
constexpr std::uint32_t IRenderProxy_sub_78 = 2542474580UL;
constexpr std::uint32_t IRenderProxy_sub_80 = 510274732UL;
constexpr std::uint32_t IRenderProxy_sub_88 = 3724941976UL;
constexpr std::uint32_t IRenderProxy_sub_90 = 1894391003UL;
constexpr std::uint32_t IRenderProxy_sub_98 = 3516862860UL;
constexpr std::uint32_t IRenderProxy_sub_A8 = 4096926792UL;
constexpr std::uint32_t IRenderProxy_sub_B0 = 1468405902UL;
#pragma endregion

#pragma region IScriptable
constexpr std::uint32_t IScriptable_sub_D8 = 0xF8E41DDF;
constexpr std::uint32_t IScriptable_DestructValueHolder = 0x3521331;
#pragma endregion

#pragma region ISerializable
constexpr std::uint32_t ISerializable_sub_30 = 0x6D63649;
constexpr std::uint32_t ISerializable_sub_40 = 0x88B30FF9;
constexpr std::uint32_t ISerializable_sub_78 = 0xA1D93993;
constexpr std::uint32_t ISerializable_sub_A0 = 0xED221B32;
constexpr std::uint32_t ISerializable_sub_C0 = 0x80201C35;
constexpr std::uint32_t ISerializable_Counter = 2630817091;
#pragma endregion

#pragma region JobDispatcher
constexpr std::uint32_t JobDispatcher = 1508445968UL;
constexpr std::uint32_t JobDispatcher_DispatchJob = 2621709954UL;
#pragma endregion

#pragma region JobHandle
constexpr std::uint32_t JobHandle_dtor = 0x9E480A2E;
constexpr std::uint32_t JobHandle_Join = 0x9C9C097C;
#pragma endregion

#pragma region JobInternalHandle
constexpr std::uint32_t JobInternalHandle_Acquire = 0x6EFF1BD2;
#pragma endregion

#pragma region JobQueue
constexpr std::uint32_t JobQueue_ctor_FromGroup = 0xE750D4B;
constexpr std::uint32_t JobQueue_ctor_FromParams = 0x82BD14F8;
constexpr std::uint32_t JobQueue_dtor = 0x5AF4077C;
constexpr std::uint32_t JobQueue_Capture = 0x41D12C4;
constexpr std::uint32_t JobQueue_SyncWait = 3651996672UL;
#pragma endregion

#pragma region Memory
constexpr std::uint32_t Memory_Vault = 0x1B530DEC;
constexpr std::uint32_t Memory_Vault_Alloc = 0x902A14E0;
constexpr std::uint32_t Memory_Vault_AllocAligned = 0x516917DD;
constexpr std::uint32_t Memory_Vault_Realloc = 0x770A17AC;
constexpr std::uint32_t Memory_Vault_ReallocAligned = 0x56961AA9;
constexpr std::uint32_t Memory_Vault_Free = 0x33421332;
constexpr std::uint32_t Memory_Vault_Unk1 = 0x19EC1367;
constexpr std::uint32_t Memory_PoolStorage_OOM = 0xD54F163A;
#pragma endregion

#pragma region OpcodeHandlers
constexpr std::uint32_t OpcodeHandlers = 0x39532858;
#pragma endregion

#pragma region ObjectPackageExtractor
constexpr std::uint32_t ObjectPackageExtractor_Initialize = 2318998714;
constexpr std::uint32_t ObjectPackageExtractor_ExtractSync = 2038372664;
constexpr std::uint32_t ObjectPackageExtractor_ExtractAsync = 3819248393;
#pragma endregion

#pragma region ObjectPackageReader
constexpr std::uint32_t ObjectPackageReader_ctor = 3628731410;
constexpr std::uint32_t ObjectPackageReader_OnReadHeader = 1632836642;
constexpr std::uint32_t ObjectPackageReader_ReadHeader = 1285757088;
#pragma endregion

#pragma region BasePackageReader
constexpr std::uint32_t BasePackageReader_ReadHeader = 3410956665;
#pragma endregion

#pragma region ResourceDepot
constexpr std::uint32_t ResourceDepot = 0x659A0FC7;
#pragma endregion

#pragma region ResourceLoader
constexpr std::uint32_t ResourceLoader = 0x783C1034;
constexpr std::uint32_t ResourceLoader_FindTokenFast = 0xC86F39B7;
constexpr std::uint32_t ResourceLoader_IssueLoadingRequest = 2365013187;
constexpr std::uint32_t ResourceLoader_IssueLoadingRequestByPath = 1250309504;
#pragma endregion

#pragma region ResourceReference
constexpr std::uint32_t ResourceReference_Load = 0xEB0DA9;
constexpr std::uint32_t ResourceReference_Fetch = 0xB69D158E;
constexpr std::uint32_t ResourceReference_Reset = 0x2308246B;
#pragma endregion

#pragma region ResourceToken
constexpr std::uint32_t ResourceToken_dtor = 0x9A5F0A0D;
constexpr std::uint32_t ResourceToken_Fetch = 0x8C0918CA;
constexpr std::uint32_t ResourceToken_OnLoaded = 0xEB4B25AB;
constexpr std::uint32_t ResourceToken_CancelUnk38 = 0xF6E20CE6;
constexpr std::uint32_t ResourceToken_DestructUnk38 = 0x95831FEE;
#pragma endregion

#pragma region TTypedClass
constexpr std::uint32_t TTypedClass_IsEqual = 0x58630EE8;
#pragma endregion

#pragma region TweakDB
constexpr std::uint32_t TweakDB_Get = 0x36800DE4;
constexpr std::uint32_t TweakDB_CreateRecord = 0x3201127A;
#pragma endregion

#pragma region UpdateRegistrar
constexpr std::uint32_t UpdateRegistrar_RegisterGroupUpdate = 0xFD914605;
constexpr std::uint32_t UpdateRegistrar_RegisterBucketUpdate = 0x192F4EA2;
#pragma endregion

#pragma region DeferredDataBuffer
constexpr std::uint32_t DeferredDataBuffer_LoadAsync = 4125893577;
constexpr std::uint32_t DeferredDataBuffer_LoadRefAsync = 1459046115;
#pragma endregion

#pragma region LaunchParameters
constexpr std::uint32_t LaunchParameters = 677908004;
#pragma endregion
}
// clang-format on
