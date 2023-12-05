#pragma once

/*
 * This file is generated. DO NOT modify it!
 *
 * Add new patterns in "patterns.py" file located in "project_root/scripts" and run "find_patterns.py".
 * The new file should be located in "idb_path/Addresses.hpp".
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 2.1.
// clang-format off
namespace RED4ext::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_Handlers = 0x1432B4D30 - ImageBase; // 4C 8D 05 ? ? ? ? 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?, expected: 2, index: 1, offset: 3
constexpr uintptr_t CBaseFunction_ExecuteScripted = 0x14050949C - ImageBase; // 40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_ExecuteNative = 0x141FF21D8 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ?, expected: 67, index: 45
constexpr uintptr_t CBaseFunction_InternalExecute = 0x140183F80 - ImageBase; // 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6, expected: 1, index: 0
#pragma endregion

#pragma region CBaseRTTIType
constexpr uintptr_t CBaseRTTIType_sub_80 = 0x141FF1E68 - ImageBase; // 48 8B C4 48 89 58 ? 57 48 83 EC ? 33 DB 4D 8B C8, expected: 1, index: 0
constexpr uintptr_t CBaseRTTIType_sub_88 = 0x141FF1DC8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 10 57 48 83 EC ? 33 DB, expected: 4, index: 2
constexpr uintptr_t CBaseRTTIType_sub_90 = 0x141FF1CA4 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 41 F7 41 ? ? ? ? ?, expected: 13, index: 1
constexpr uintptr_t CBaseRTTIType_sub_98 = 0x141FF1EF4 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 F7 41 ? ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0x141FF1C8C - ImageBase; // 48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA, expected: 1, index: 0
#pragma endregion

#pragma region CBitfield
constexpr uintptr_t CBitfield_Unserialize = 0x1402C8D6C - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? F6 42 ? 02, expected: 1, index: 0
constexpr uintptr_t CBitfield_ToString = 0x142002818 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 56 57 41 56 48 83 EC ? 48 83 60 ? 00, expected: 5, index: 4
constexpr uintptr_t CBitfield_FromString = 0x142002700 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 70 ? 55 48 8B EC 48 83 EC ? F2 41 0F 10 00, expected: 2, index: 0
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_Unserialize = 0x1401592D4 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 15 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CClass_ToString = 0x1406656CC - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 41 ?, expected: 11, index: 2
constexpr uintptr_t CClass_sub_80 = 0x141FF0764 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? F6 41 70 ?, expected: 1, index: 0
constexpr uintptr_t CClass_sub_88 = 0x141FF06B8 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 02 48 8B F1 48 8B CA, expected: 5, index: 4
constexpr uintptr_t CClass_sub_90 = 0x14139543C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?, expected: 3, index: 1
constexpr uintptr_t CClass_sub_98 = 0x141FF1940 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?, expected: 3, index: 2
constexpr uintptr_t CClass_sub_A0 = 0x141FF0F74 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 56 41 57 48 8B EC 48 83 EC 70 41 F7 40 14 FF FF FF 3F, expected: 1, index: 0
constexpr uintptr_t CClass_sub_B0 = 0x1408F5280 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B 05 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CClass_sub_C0 = 0x140611680 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 83 64 24 ? ?, expected: 58, index: 15
constexpr uintptr_t CClass_GetMaxAlignment = 0x140611604 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 8B 59 ? E8 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CClass_sub_D0 = 0x141FF1610 - ImageBase; // 4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 41 54 41 55 41 56, expected: 33, index: 25
constexpr uintptr_t CClass_CreateInstance = 0x140158C50 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 65 48 8B 04 25 ? ? ? ? 48 8B F1, expected: 4, index: 0
constexpr uintptr_t CClass_GetProperty = 0x140159BD8 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF 48 8B DA, expected: 4, index: 0
constexpr uintptr_t CClass_GetProperties = 0x140611790 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B D9 48 8B FA 48 8B 49 ? 48 85 C9 74, expected: 1, index: 0
constexpr uintptr_t CClass_ClearScriptedData = 0x140612800 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 60 ? 55 41 56 41 57 48 8B EC 48 83 EC ? 80 A1 ? ? ? ? ? 48 8D 99 ? ? ? ? 48 8B F9 48 8B CB E8, expected: 1, index: 0
constexpr uintptr_t CClass_InitializeProperties = 0x140159514 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? F6 41 70 ?, expected: 1, index: 0
constexpr uintptr_t CClass_AssignDefaultValuesToProperties = 0x140158DE8 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? 48 8B F9 48 8B EA, expected: 2, index: 0
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x1409B00E0 - ImageBase; // 40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ?, expected: 2, index: 1
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x14060F5AC - ImageBase; // 40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ?, expected: 2, index: 0
#pragma endregion

#pragma region CEnum
constexpr uintptr_t CEnum_Unserialize = 0x140159FC4 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? F6 42 ? ?, expected: 4, index: 1
constexpr uintptr_t CEnum_ToString = 0x14070A5D4 - ImageBase; // 48 8B C4 53 48 83 EC ? 48 83 60 ? 00 49 8B D8 4C 8D 40 ?, expected: 1, index: 0
constexpr uintptr_t CEnum_FromString = 0x1406E4730 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F2 48 8B F9, expected: 188, index: 40
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x143338A90 - ImageBase; // 48 89 05 ? ? ? ? 48 8B D8 48 8B 10 FF 92 ? ? ? ?, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x1409B0094 - ImageBase; // 48 83 EC ? 4D 8B D1 41 B9 ? ? ? ? E8 ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x1401E70DC - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 89 54 24 ? 48 8B CA, expected: 2, index: 0
constexpr uintptr_t CNamePool_AddCString = 0x1421AC084 - ImageBase; // 48 83 EC ? 48 8B 01 4C 8B D9 48 8D 4C 24 ?, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddPair = 0x1407E9240 - ImageBase; // 48 83 EC ? 4C 8B C1 48 89 54 24 ? 48 8B CA E8 ? ? ? ?, expected: 3, index: 1
constexpr uintptr_t CNamePool_Get = 0x1404C0178 - ImageBase; // 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIRegistrator
constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = 0x143EB490C - ImageBase; // F0 0F C1 05 ? ? ? ? FF C0 48 8D 0D ? ? ? ? 89 05 ? ? ? ? E8 ? ? ? ?, expected: 11821, index: 0, offset: 4
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0x1405034AC - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 8D 05 ? ? ? ? 33 C9 4C 8B C2 48 89 4B 08 48 89 03 , expected: 1, index: 0
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0x140184EA4 - ImageBase; // 48 89 5C 24 20 57 48 83 EC 20 4C 89 41 18 48 8B DA 48 89 51 10 48 8B F9, expected: 1, index: 0
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x1401EBB78 - ImageBase; // 48 83 EC ? 65 48 8B 04 25 ? ? ? ? BA ? ? ? ? 48 8B 08 8B 04 0A 39 05 ? ? ? ? 0F 8F ? ? ? ?, expected: 5, index: 1
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_vtbl = 0x142A9EC10 - ImageBase; // 48 8D 05 ? ? ? ? 48 89 45 ? 48 8D 45 ? 48 89 45 ? 66 0F 7F 45 ?, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_ctor_str = 0x14029786C - ImageBase; // 48 85 D2 74 15 48 83 C8 FF 48 FF C0, expected: 1, index: 0
constexpr uintptr_t CString_ctor_span = 0x1404EF804 - ImageBase; // 40 53 48 83 EC ? 33 C0 48 8B D9 48 89 41 ? 88 01 89 41 ? E8, expected: 3, index: 1
constexpr uintptr_t CString_copy = 0x1401CCB9C - ImageBase; // B8 ? ? ? ? 39 41 ? 73 19 39 42 ?, expected: 1, index: 0
constexpr uintptr_t CString_dtor = 0x140156BD4 - ImageBase; // 40 53 48 83 EC ? 8B 41 ? 48 8B D9 C1 E8 ?, expected: 2, index: 0
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x140161490 - ImageBase; // 48 89 5C 24 ? 44 89 4C 24 ? 55 56 57 41 54 41 55 41 56 41 57, expected: 17, index: 0
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x140157480 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 83 61 ? ?, expected: 1, index: 0
constexpr uintptr_t Handle_DecWeakRef = 0x14015D4A8 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 8B 49 ? 48 85 C9 74 ? 83 C8 FF F0 0F C1 41 04 83 F8 01 74 ? 48 83 C4 ? 5B C3, expected: 1, index: 0
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_sub_D8 = 0x141FEB754 - ImageBase; // 40 53 48 83 EC ? 48 8B 01 49 8B D8 FF 50 08, expected: 1, index: 0
constexpr uintptr_t IScriptable_DestructValueHolder = 0x14015AB40 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 83 79 ? ?, expected: 3, index: 0
#pragma endregion

#pragma region ISerializable
constexpr uintptr_t ISerializable_sub_30 = 0x141FDE42C - ImageBase; // 48 83 EC ? E8 ? ? ? ? 48 85 C0 74 11, expected: 3, index: 2
constexpr uintptr_t ISerializable_sub_40 = 0x14015A234 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? F6 42 ? ?, expected: 1, index: 0
constexpr uintptr_t ISerializable_sub_78 = 0x14064557C - ImageBase; // 48 89 74 24 ? 48 89 7C 24 ? 44 88 4C 24 ? 55 41 56 41 57, expected: 1, index: 0
constexpr uintptr_t ISerializable_sub_A0 = 0x140B3B2E0 - ImageBase; // 48 83 EC ? 48 8B 01 FF 50 08 48 8B C8, expected: 12, index: 1
constexpr uintptr_t ISerializable_sub_C0 = 0x140298E58 - ImageBase; // 40 53 48 83 EC ? 48 8B DA E8 ? ? ? ? 48 85 C0, expected: 17, index: 0
#pragma endregion

#pragma region JobDispatcher
constexpr uintptr_t JobDispatcher = 0x143346580 - ImageBase; // 48 89 05 ? ? ? ? 48 83 C4 ? 5F C3, expected: 6, index: 2, offset: 3
constexpr uintptr_t JobDispatcher_DispatchJob = 0x140163A58 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 44 88 40 ? 57 41 54 41 55, expected: 2, index: 0
#pragma endregion

#pragma region JobHandle
constexpr uintptr_t JobHandle_ctor = 0x1401654E4 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 54 48 83 EC ?, expected: 1, index: 0
constexpr uintptr_t JobHandle_dtor = 0x140164DCC - ImageBase; // 40 53 48 83 EC ? 48 8B 11 48 8B D9 48 85 D2, expected: 6, index: 0
constexpr uintptr_t JobHandle_Join = 0x14016323C - ImageBase; // 48 83 EC ? 48 8B 02 4C 8B C2 8B 40 ?, expected: 1, index: 0
#pragma endregion

#pragma region JobQueue
constexpr uintptr_t JobQueue_ctor_FromGroup = 0x1401653E4 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B 42 ? 48 8B DA 8A 52 ?, expected: 1, index: 0
constexpr uintptr_t JobQueue_ctor_FromParams = 0x140165424 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B D9, expected: 65, index: 0
constexpr uintptr_t JobQueue_dtor = 0x140163164 - ImageBase; // 40 53 48 83 EC ? 80 79 ? ? 48 8B D9 75 05, expected: 1, index: 0
constexpr uintptr_t JobQueue_Capture = 0x1402C55D0 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8B 43 ?, expected: 6, index: 0
constexpr uintptr_t JobQueue_SyncWait = 0x140163C90 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8B EC 48 83 EC ? 48 8D 79 ? 48 8B F1, expected: 1, index: 0
#pragma endregion

#pragma region Memory
constexpr uintptr_t Memory_Vault = 0x143346700 - ImageBase; // C6 04 0A 01 48 8D 0D ? ? ? ? 8B 50 ? 48 8B C1, expected: 2, index: 0, offset: 7
constexpr uintptr_t Memory_Vault_Alloc = 0x140157588 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57 48 83 EC 60 48 B8 00 00 00 00 02 00 00 00, expected: 1, index: 0
constexpr uintptr_t Memory_Vault_AllocAligned = 0x14015CBFC - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57, expected: 1039, index: 14
constexpr uintptr_t Memory_Vault_Realloc = 0x1404DB18C - ImageBase; // 40 53 48 83 EC ? 4D 8B D8 48 8B DA 4C 8B D1, expected: 1, index: 0
constexpr uintptr_t Memory_Vault_ReallocAligned = 0x14016340C - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57, expected: 1039, index: 16
constexpr uintptr_t Memory_Vault_Free = 0x14015D51C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 81 ? ? ? ?, expected: 4, index: 0
constexpr uintptr_t Memory_Vault_Unk1 = 0x141FD9CE8 - ImageBase; // 4C 8B 81 ? ? ? ? 48 8B C2 4C 8B 89 ? ? ? ? 49 2B C0, expected: 3, index: 2
constexpr uintptr_t Memory_PoolStorage_OOM = 0x141FD9AEC - ImageBase; // 48 83 EC ? 48 8B C1 44 89 44 24 ? 4C 8B CA, expected: 1, index: 0
#pragma endregion

#pragma region OpcodeHandlers
constexpr uintptr_t OpcodeHandlers = 0x1432B4D30 - ImageBase; // 4C 8D 05 ? ? ? ? 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?, expected: 2, index: 1, offset: 3
#pragma endregion

#pragma region ResourceDepot
constexpr uintptr_t ResourceDepot = 0x1447F4408 - ImageBase; // 48 89 05 ? ? ? ? 49 8B 5B ? 49 8B 73, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region ResourceLoader
constexpr uintptr_t ResourceLoader = 0x143334D38 - ImageBase; // 48 89 05 ? ? ? ? 48 83 C4 ? 5F C3, expected: 6, index: 3, offset: 3
constexpr uintptr_t ResourceLoader_FindTokenFast = 0x14015E238 - ImageBase; // 48 8B C4 4C 89 40 ? 53 48 83 EC ? 48 8B DA 4C 8D 40 ?, expected: 2, index: 0
constexpr uintptr_t ResourceLoader_LoadAsync = 0x1407BF6D4 - ImageBase; // 48 89 5C 24 ? 55 48 8B EC 48 83 EC ? 83 4D E8 ? 33 C0, expected: 1, index: 0
#pragma endregion

#pragma region ResourceReference
constexpr uintptr_t ResourceReference_Load = 0x140147470 - ImageBase; // 40 53 48 83 EC ? 48 8D 59 ? 4C 8B C1 48 8B 0B, expected: 1, index: 0
constexpr uintptr_t ResourceReference_Fetch = 0x140147444 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 8B 43 ? 48 85 C0, expected: 2, index: 0
constexpr uintptr_t ResourceReference_Reset = 0x14026C334 - ImageBase; // 48 83 EC ? 48 8B 41 ? 48 83 61 ? ? 48 89 44 24 ? 48 8B 01 48 83 21 ?, expected: 29, index: 6
#pragma endregion

#pragma region ResourceToken
constexpr uintptr_t ResourceToken_dtor = 0x1401DA70C - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B D9 E8 ? ? ? ? 84 C0 74 36, expected: 1, index: 0
constexpr uintptr_t ResourceToken_Fetch = 0x140826814 - ImageBase; // 40 53 48 83  EC 50 48 8B D9 E8 ? ? ? ? 84 C0 74 0A 48 8D 43 28, expected: 1, index: 0
constexpr uintptr_t ResourceToken_OnLoaded = 0x140622B98 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B F2 48 8B D9 48 8B D1, expected: 2, index: 0
constexpr uintptr_t ResourceToken_CancelUnk38 = 0x140BEAFB0 - ImageBase; // F6 05 ? ? ? ? ? 75 ? 48 83 79 68 FF 75 ? C3, expected: 1, index: 0
constexpr uintptr_t ResourceToken_DestructUnk38 = 0x1401E65BC - ImageBase; // 40 53 48 83 EC 30 48 8B D9 E8 ? ? ? ? 84 C0 75 ? 48 83 C4 ? 5B C3 48 8B 03 48 85 C0 74 ? 48 83 64 24 ? ? 48 8D 4C 24, expected: 17, index: 1
#pragma endregion

#pragma region TTypedClass
constexpr uintptr_t TTypedClass_IsEqual = 0x140183240 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56, expected: 873, index: 13
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x1401D35C4 - ImageBase; // 48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 74 0C, expected: 1, index: 0
constexpr uintptr_t TweakDB_CreateRecord = 0x1401D50D0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 8B C2, expected: 6, index: 0
#pragma endregion

#pragma region UpdateRegistrar
constexpr uintptr_t UpdateRegistrar_RegisterGroupUpdate = 0x1407FC05C - ImageBase; // 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B1 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9, expected: 1, index: 0
constexpr uintptr_t UpdateRegistrar_RegisterBucketUpdate = 0x1407FBF0C - ImageBase; // 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B9 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9, expected: 1, index: 0
#pragma endregion
} // namespace RED4ext::Addresses
// clang-format on
