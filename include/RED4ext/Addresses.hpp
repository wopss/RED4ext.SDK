#pragma once

/*
 * This file is generated. DO NOT modify it!
 *
 * Add new patterns in "patterns.py" file located in "project_root/scripts" and run "find_patterns.py".
 * The new file should be located in "idb_path/Addresses.hpp".
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 2.11.
// clang-format off
namespace RED4ext::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_Handlers = 0x143332C50 - ImageBase; // 4C 8D 05 ? ? ? ? 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?, expected: 2, index: 1, offset: 3
constexpr uintptr_t CBaseFunction_ExecuteScripted = 0x1405ACE18 - ImageBase; // 40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_ExecuteNative = 0x142001490 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ?, expected: 67, index: 45
constexpr uintptr_t CBaseFunction_InternalExecute = 0x140503870 - ImageBase; // 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6, expected: 1, index: 0
#pragma endregion

#pragma region CBaseRTTIType
constexpr uintptr_t CBaseRTTIType_sub_80 = 0x142001120 - ImageBase; // 48 8B C4 48 89 58 ? 57 48 83 EC ? 33 DB 4D 8B C8, expected: 1, index: 0
constexpr uintptr_t CBaseRTTIType_sub_88 = 0x142001080 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 10 57 48 83 EC ? 33 DB, expected: 4, index: 2
constexpr uintptr_t CBaseRTTIType_sub_90 = 0x142000F5C - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 41 F7 41 ? ? ? ? ?, expected: 13, index: 1
constexpr uintptr_t CBaseRTTIType_sub_98 = 0x1420011AC - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 F7 41 ? ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0x142000F44 - ImageBase; // 48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA, expected: 1, index: 0
#pragma endregion

#pragma region CBitfield
constexpr uintptr_t CBitfield_Unserialize = 0x1403ACBFC - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? F6 42 ? 02, expected: 1, index: 0
constexpr uintptr_t CBitfield_ToString = 0x142011AD0 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 56 57 41 56 48 83 EC ? 48 83 60 ? 00, expected: 5, index: 4
constexpr uintptr_t CBitfield_FromString = 0x1420119B8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 70 ? 55 48 8B EC 48 83 EC ? F2 41 0F 10 00, expected: 2, index: 0
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_Unserialize = 0x140133AB8 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 15 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CClass_ToString = 0x14080D7B4 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 41 ?, expected: 11, index: 2
constexpr uintptr_t CClass_sub_80 = 0x141FFFA1C - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? F6 41 70 ?, expected: 1, index: 0
constexpr uintptr_t CClass_sub_88 = 0x141FFF970 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 02 48 8B F1 48 8B CA, expected: 5, index: 4
constexpr uintptr_t CClass_sub_90 = 0x1407FE96C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?, expected: 3, index: 1
constexpr uintptr_t CClass_sub_98 = 0x142000BF8 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?, expected: 3, index: 2
constexpr uintptr_t CClass_sub_A0 = 0x14200022C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 56 41 57 48 8B EC 48 83 EC 70 41 F7 40 14 FF FF FF 3F, expected: 1, index: 0
constexpr uintptr_t CClass_sub_B0 = 0x1408E7058 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B 05 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CClass_sub_C0 = 0x1403887F0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 83 64 24 ? ?, expected: 57, index: 6
constexpr uintptr_t CClass_GetMaxAlignment = 0x140388774 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 8B 59 ? E8 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CClass_sub_D0 = 0x1420008C8 - ImageBase; // 4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 41 54 41 55 41 56, expected: 33, index: 25
constexpr uintptr_t CClass_CreateInstance = 0x140133378 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 65 48 8B 04 25 ? ? ? ? 48 8B F1, expected: 4, index: 0
constexpr uintptr_t CClass_GetProperty = 0x1401343C4 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF 48 8B DA, expected: 4, index: 0
constexpr uintptr_t CClass_GetProperties = 0x140388900 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B D9 48 8B FA 48 8B 49 ? 48 85 C9 74, expected: 1, index: 0
constexpr uintptr_t CClass_ClearScriptedData = 0x140389970 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 60 ? 55 41 56 41 57 48 8B EC 48 83 EC ? 80 A1 ? ? ? ? ? 48 8D 99 ? ? ? ? 48 8B F9 48 8B CB E8, expected: 1, index: 0
constexpr uintptr_t CClass_InitializeProperties = 0x140133CF8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? F6 41 70 ?, expected: 1, index: 0
constexpr uintptr_t CClass_AssignDefaultValuesToProperties = 0x140133510 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? 48 8B F9 48 8B EA, expected: 2, index: 0
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x14038661C - ImageBase; // 40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ? ? ? ? ? ? ? 01, expected: 1, index: 0
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x140385900 - ImageBase; // 40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ? ? ? ? ? ? ? 03, expected: 1, index: 0
#pragma endregion

#pragma region CEnum
constexpr uintptr_t CEnum_Unserialize = 0x1401347B4 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? F6 42 ? ?, expected: 4, index: 1
constexpr uintptr_t CEnum_ToString = 0x1408029A8 - ImageBase; // 48 8B C4 53 48 83 EC ? 48 83 60 ? 00 49 8B D8 4C 8D 40 ?, expected: 1, index: 0
constexpr uintptr_t CEnum_FromString = 0x1404F1EF0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F2 48 8B F9, expected: 188, index: 40
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x1433769B8 - ImageBase; // 48 89 05 ? ? ? ? 48 8B D8 48 8B 10 FF 92 ? ? ? ?, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x140385450 - ImageBase; // 48 83 EC ? 4D 8B D1 41 B9 ? ? ? ? E8 ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x1401DEFA4 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 89 54 24 ? 48 8B CA, expected: 2, index: 0
constexpr uintptr_t CNamePool_AddCString = 0x1421BB17C - ImageBase; // 48 83 EC ? 48 8B 01 4C 8B D9 48 8D 4C 24 ?, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddPair = 0x14070C974 - ImageBase; // 48 83 EC ? 4C 8B C1 48 89 54 24 ? 48 8B CA E8 ? ? ? ?, expected: 3, index: 1
constexpr uintptr_t CNamePool_Get = 0x14042E8F8 - ImageBase; // 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIRegistrator
constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = 0x143EF2A0C - ImageBase; // F0 0F C1 05 ? ? ? ? FF C0 48 8D 0D ? ? ? ? 89 05 ? ? ? ? E8 ? ? ? ?, expected: 11821, index: 0, offset: 4
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0x14023A3B0 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 8D 05 ? ? ? ? 33 C9 4C 8B C2 48 89 4B 08 48 89 03 , expected: 1, index: 0
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0x1401529F4 - ImageBase; // 48 89 5C 24 20 57 48 83 EC 20 4C 89 41 18 48 8B DA 48 89 51 10 48 8B F9, expected: 1, index: 0
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x1401E3A9C - ImageBase; // 48 83 EC ? 65 48 8B 04 25 ? ? ? ? BA ? ? ? ? 48 8B 08 8B 04 0A 39 05 ? ? ? ? 0F 8F ? ? ? ?, expected: 5, index: 1
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_vtbl = 0x142A462B0 - ImageBase; // 48 8D 05 ? ? ? ? 48 89 45 ? 48 8D 45 ? 48 89 45 ? 66 0F 7F 45 ?, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_ctor_str = 0x1401D6B08 - ImageBase; // 48 85 D2 74 15 48 83 C8 FF 48 FF C0, expected: 1, index: 0
constexpr uintptr_t CString_ctor_span = 0x140383DBC - ImageBase; // 40 53 48 83 EC ? 33 C0 48 8B D9 48 89 41 ? 88 01 89 41 ? E8, expected: 3, index: 1
constexpr uintptr_t CString_copy = 0x140186BFC - ImageBase; // B8 ? ? ? ? 39 41 ? 73 19 39 42 ?, expected: 1, index: 0
constexpr uintptr_t CString_dtor = 0x140131238 - ImageBase; // 40 53 48 83 EC ? 8B 41 ? 48 8B D9 C1 E8 ?, expected: 2, index: 0
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x14013BB78 - ImageBase; // 48 89 5C 24 ? 44 89 4C 24 ? 55 56 57 41 54 41 55 41 56 41 57, expected: 17, index: 0
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x140131A5C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 83 61 ? ?, expected: 1, index: 0
constexpr uintptr_t Handle_DecWeakRef = 0x140137D78 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 8B 49 ? 48 85 C9 74 ? 83 C8 FF F0 0F C1 41 04 83 F8 01 74 ? 48 83 C4 ? 5B C3, expected: 1, index: 0
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_sub_D8 = 0x141FFAA0C - ImageBase; // 40 53 48 83 EC ? 48 8B 01 49 8B D8 FF 50 08, expected: 1, index: 0
constexpr uintptr_t IScriptable_DestructValueHolder = 0x140135430 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 83 79 ? ?, expected: 3, index: 0
#pragma endregion

#pragma region ISerializable
constexpr uintptr_t ISerializable_sub_30 = 0x141FED6E4 - ImageBase; // 48 83 EC ? E8 ? ? ? ? 48 85 C0 74 11, expected: 3, index: 2
constexpr uintptr_t ISerializable_sub_40 = 0x140134A24 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? F6 42 ? ?, expected: 1, index: 0
constexpr uintptr_t ISerializable_sub_78 = 0x140901BD0 - ImageBase; // 48 89 74 24 ? 48 89 7C 24 ? 44 88 4C 24 ? 55 41 56 41 57, expected: 1, index: 0
constexpr uintptr_t ISerializable_sub_A0 = 0x140B34F18 - ImageBase; // 48 83 EC ? 48 8B 01 FF 50 08 48 8B C8, expected: 12, index: 1
constexpr uintptr_t ISerializable_sub_C0 = 0x1406CBEE4 - ImageBase; // 40 53 48 83 EC ? 48 8B DA E8 ? ? ? ? 48 85 C0, expected: 17, index: 0
#pragma endregion

#pragma region JobDispatcher
constexpr uintptr_t JobDispatcher = 0x1433844E0 - ImageBase; // 48 89 05 ? ? ? ? 48 83 C4 ? 5F C3, expected: 6, index: 4, offset: 3
constexpr uintptr_t JobDispatcher_DispatchJob = 0x14013E140 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 44 88 40 ? 57 41 54 41 55, expected: 2, index: 0
#pragma endregion

#pragma region JobHandle
constexpr uintptr_t JobHandle_ctor = 0x14013FBC4 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 54 48 83 EC ?, expected: 1, index: 0
constexpr uintptr_t JobHandle_dtor = 0x14013F4AC - ImageBase; // 40 53 48 83 EC ? 48 8B 11 48 8B D9 48 85 D2, expected: 6, index: 0
constexpr uintptr_t JobHandle_Join = 0x14013D924 - ImageBase; // 48 83 EC ? 48 8B 02 4C 8B C2 8B 40 ?, expected: 1, index: 0
#pragma endregion

#pragma region JobQueue
constexpr uintptr_t JobQueue_ctor_FromGroup = 0x14013FAC4 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B 42 ? 48 8B DA 8A 52 ?, expected: 1, index: 0
constexpr uintptr_t JobQueue_ctor_FromParams = 0x14013FB04 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B D9, expected: 65, index: 0
constexpr uintptr_t JobQueue_dtor = 0x14013D84C - ImageBase; // 40 53 48 83 EC ? 80 79 ? ? 48 8B D9 75 05, expected: 1, index: 0
constexpr uintptr_t JobQueue_Capture = 0x1403A947C - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8B 43 ?, expected: 6, index: 0
constexpr uintptr_t JobQueue_SyncWait = 0x14013E378 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8B EC 48 83 EC ? 48 8D 79 ? 48 8B F1, expected: 1, index: 0
#pragma endregion

#pragma region Memory
constexpr uintptr_t Memory_Vault = 0x143384640 - ImageBase; // C6 04 0A 01 48 8D 0D ? ? ? ? 8B 50 ? 48 8B C1, expected: 2, index: 0, offset: 7
constexpr uintptr_t Memory_Vault_Alloc = 0x140131B64 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57 48 83 EC 60 48 B8 00 00 00 00 02 00 00 00, expected: 1, index: 0
constexpr uintptr_t Memory_Vault_AllocAligned = 0x1401374CC - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57, expected: 1041, index: 8
constexpr uintptr_t Memory_Vault_Realloc = 0x14058CA7C - ImageBase; // 40 53 48 83 EC ? 4D 8B D8 48 8B DA 4C 8B D1, expected: 1, index: 0
constexpr uintptr_t Memory_Vault_ReallocAligned = 0x14013DAF4 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57, expected: 1041, index: 11
constexpr uintptr_t Memory_Vault_Free = 0x140137DEC - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 81 ? ? ? ?, expected: 4, index: 0
constexpr uintptr_t Memory_Vault_Unk1 = 0x141FE8FA0 - ImageBase; // 4C 8B 81 ? ? ? ? 48 8B C2 4C 8B 89 ? ? ? ? 49 2B C0, expected: 3, index: 2
constexpr uintptr_t Memory_PoolStorage_OOM = 0x141FE8DA4 - ImageBase; // 48 83 EC ? 48 8B C1 44 89 44 24 ? 4C 8B CA, expected: 1, index: 0
#pragma endregion

#pragma region OpcodeHandlers
constexpr uintptr_t OpcodeHandlers = 0x1432F2C50 - ImageBase; // 4C 8D 05 ? ? ? ? 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?, expected: 2, index: 0, offset: 3
#pragma endregion

#pragma region ResourceDepot
constexpr uintptr_t ResourceDepot = 0x1448345D8 - ImageBase; // 48 89 05 ? ? ? ? 49 8B 5B ? 49 8B 73, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region ResourceLoader
constexpr uintptr_t ResourceLoader = 0x143372C58 - ImageBase; // 48 89 05 ? ? ? ? 48 83 C4 ? 5F C3, expected: 6, index: 2, offset: 3
constexpr uintptr_t ResourceLoader_FindTokenFast = 0x1401388DC - ImageBase; // 48 8B C4 4C 89 40 ? 53 48 83 EC ? 48 8B DA 4C 8D 40 ?, expected: 2, index: 0
constexpr uintptr_t ResourceLoader_LoadAsync = 0x1401A3204 - ImageBase; // 48 89 5C 24 ? 55 48 8B EC 48 83 EC ? 83 4D E8 ? 33 C0, expected: 1, index: 0
#pragma endregion

#pragma region ResourceReference
constexpr uintptr_t ResourceReference_Load = 0x140121920 - ImageBase; // 40 53 48 83 EC ? 48 8D 59 ? 4C 8B C1 48 8B 0B, expected: 1, index: 0
constexpr uintptr_t ResourceReference_Fetch = 0x1401218F4 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 8B 43 ? 48 85 C0, expected: 2, index: 0
constexpr uintptr_t ResourceReference_Reset = 0x1402D2FA0 - ImageBase; // 48 83 EC ? 48 8B 41 ? 48 83 61 ? ? 48 89 44 24 ? 48 8B 01 48 83 21 ?, expected: 29, index: 6
#pragma endregion

#pragma region ResourceToken
constexpr uintptr_t ResourceToken_dtor = 0x14019A76C - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B D9 E8 ? ? ? ? 84 C0 74 36, expected: 1, index: 0
constexpr uintptr_t ResourceToken_Fetch = 0x1406A41FC - ImageBase; // 40 53 48 83  EC 50 48 8B D9 E8 ? ? ? ? 84 C0 74 0A 48 8D 43 28, expected: 1, index: 0
constexpr uintptr_t ResourceToken_OnLoaded = 0x14077AA6C - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B F2 48 8B D9 48 8B D1, expected: 2, index: 0
constexpr uintptr_t ResourceToken_CancelUnk38 = 0x140C01B78 - ImageBase; // F6 05 ? ? ? ? ? 75 ? 48 83 79 68 FF 75 ? C3, expected: 1, index: 0
constexpr uintptr_t ResourceToken_DestructUnk38 = 0x1401DE484 - ImageBase; // 40 53 48 83 EC 30 48 8B D9 E8 ? ? ? ? 84 C0 75 ? 48 83 C4 ? 5B C3 48 8B 03 48 85 C0 74 ? 48 83 64 24 ? ? 48 8D 4C 24, expected: 17, index: 1
#pragma endregion

#pragma region TTypedClass
constexpr uintptr_t TTypedClass_IsEqual = 0x140502B30 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57 48 83 EC ? 41 8B E9, expected: 1, index: 0
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x14018D634 - ImageBase; // 48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 74 0C, expected: 1, index: 0
constexpr uintptr_t TweakDB_CreateRecord = 0x14018F0D8 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 8B C2, expected: 6, index: 0
#pragma endregion

#pragma region UpdateRegistrar
constexpr uintptr_t UpdateRegistrar_RegisterGroupUpdate = 0x1406DF4B8 - ImageBase; // 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B1 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9, expected: 1, index: 0
constexpr uintptr_t UpdateRegistrar_RegisterBucketUpdate = 0x1406DF368 - ImageBase; // 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B9 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9, expected: 1, index: 0
#pragma endregion
} // namespace RED4ext::Addresses
// clang-format on
