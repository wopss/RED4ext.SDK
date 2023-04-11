#pragma once

/*
 * This file is generated. DO NOT modify it!
 *
 * Add new patterns in "patterns.py" file located in "project_root/scripts" and run "find_patterns.py".
 * The new file should be located in "idb_path/Addresses.hpp".
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 1.62.
// clang-format off
namespace RED4ext::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_ExecuteScripted = 0x140215940 - ImageBase; // 40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_ExecuteNative = 0x1402152D0 - ImageBase; // 48 89 5C 24 ? 57 48 81 EC ? ? ? ? 48 8B 02, expected: 10, index: 1
constexpr uintptr_t CBaseFunction_InternalExecute = 0x140215350 - ImageBase; // 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_Register = 0x140214C90 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0 44 8B 4C 24 58 48 8B DA 41 83 C9 01, expected: 1, index: 0
#pragma endregion

#pragma region CBaseRTTIType
constexpr uintptr_t CBaseRTTIType_sub_80 = 0x140202020 - ImageBase; // 40 53 55 57 41 55 41 56 48 83 EC 20 8B 41 70, expected: 1, index: 0
constexpr uintptr_t CBaseRTTIType_sub_88 = 0x140207F60 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F9, expected: 25, index: 0
constexpr uintptr_t CBaseRTTIType_sub_90 = 0x140207D50 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 81 EC ?, expected: 297, index: 1
constexpr uintptr_t CBaseRTTIType_sub_98 = 0x141E2F260 - ImageBase; // 40 53 55 57 48 83 EC 50 48 8B D9, expected: 2, index: 0
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0x140207D20 - ImageBase; // 48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA 48 8B D1, expected: 1, index: 0
#pragma endregion

#pragma region CBitfield
constexpr uintptr_t CBitfield_Unserialize = 0x140253540 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 18 56 57 41 55, expected: 2, index: 0
constexpr uintptr_t CBitfield_ToString = 0x1402536B0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 30 0F B6 41 20, expected: 1, index: 0
constexpr uintptr_t CBitfield_FromString = 0x140253230 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 40, expected: 77, index: 3
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_Unserialize = 0x140206C40 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 49 8B F9, expected: 2, index: 0
constexpr uintptr_t CClass_ToString = 0x140206F10 - ImageBase; // 48 8B C4 55 48 8D 68 ? 48 81 EC ? ? ? ?, expected: 69, index: 1
constexpr uintptr_t CClass_sub_80 = 0x140202020 - ImageBase; // 40 53 55 57 41 55 41 56, expected: 15, index: 0
constexpr uintptr_t CClass_sub_88 = 0x140206D70 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 18 56 57 41 56, expected: 208, index: 8
constexpr uintptr_t CClass_sub_90 = 0x140205700 - ImageBase; // 48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00, expected: 3, index: 0
constexpr uintptr_t CClass_sub_98 = 0x1402077C0 - ImageBase; // 48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00, expected: 3, index: 1
constexpr uintptr_t CClass_sub_A0 = 0x140203920 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 20, expected: 104, index: 0
constexpr uintptr_t CClass_sub_B0 = 0x140205860 - ImageBase; // 48 89 5C 24 ? 55 57 41 57 48 83 EC ?, expected: 10, index: 0
constexpr uintptr_t CClass_sub_C0 = 0x1402062B0 - ImageBase; // 48 83 EC ? 48 89 5C 24 78 48 89 7C 24 60, expected: 1, index: 0
constexpr uintptr_t CClass_GetMaxAlignment = 0x1401FE9A0 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 30 F6 41 70 0C 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CClass_sub_D0 = 0x140207140 - ImageBase; // 48 89 4C 24 08 53 56 48 83 EC 58, expected: 1, index: 0
constexpr uintptr_t CClass_CreateInstance = 0x140201CF0 - ImageBase; // 40 56 41 56 48 83 EC ? 41 0F B6 F0, expected: 1, index: 0
constexpr uintptr_t CClass_GetProperty = 0x140202810 - ImageBase; // 48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00, expected: 1, index: 0
constexpr uintptr_t CClass_GetProperties = 0x140202C90 - ImageBase; // 48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 30 4C 8B F1 48 8B FA, expected: 1, index: 0
constexpr uintptr_t CClass_ClearScriptedData = 0x1401FED60 - ImageBase; // 48 89 5C 24 18 56 57 41 57 48 83 EC 40 80 A1 C9 02 00 00 EF, expected: 1, index: 0
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x140214C90 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0, expected: 3, index: 1
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x140214C30 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0, expected: 3, index: 0
#pragma endregion

#pragma region CEnum
constexpr uintptr_t CEnum_Unserialize = 0x140223CC0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 18 57 48 83 EC ? 8B 42 ?, expected: 1, index: 0
constexpr uintptr_t CEnum_ToString = 0x140223EF0 - ImageBase; // 40 ? 48 83 EC ? 44 0F B6 49 20 33 C0, expected: 1, index: 0
constexpr uintptr_t CEnum_FromString = 0x140223A60 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 8B F9 49 8B D8, expected: 1, index: 0
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x144338220 - ImageBase; // 48 89 05 ? ? ? ? ? 8D ? 30 01 00 00, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x140214BE0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B D9, expected: 6, index: 0
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x1401B3C60 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 30 45 33 C0 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddCString = 0x140A01270 - ImageBase; // 48 89 5C 24 08 48 89 74  24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 8B CA E8 ? ? ? ? 48 8B CB 48 8B F8 E8, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddPair = 0x1401B40B0 - ImageBase; // 48 83 EC 38 33 C0 48 89 54 24 20 48 85 D2, expected: 1, index: 0
constexpr uintptr_t CNamePool_Get = 0x1401B3C20 - ImageBase; // 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIRegistrator
constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = 0x143ECD7A4 - ImageBase; // B8 01 00 00 00 F0 0F C1 05 ? ? ? ? FF C0 C3, expected: 1, index: 0, offset: 9
constexpr uintptr_t CRTTIRegistrator_Add = 0x1401BA4C0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 20 4C 89 44 24 18 48 89 54 24 10 57 48 83 EC 50 48 8B F1, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0x140221360 - ImageBase; // 48 89 5C 24 18 57 48 83 EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 05 , expected: 1, index: 0
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0x140222920 - ImageBase; // 48 89 5C 24 20 57 48 83  EC 20 4C 89 41 18 48 8B, expected: 1, index: 0
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x14025B770 - ImageBase; // 40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_ctor = 0x140253880 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00, expected: 3, index: 1
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_ctor = 0x1401AE850 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF, expected: 20, index: 0
constexpr uintptr_t CString_copy = 0x1401AEC80 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 3B CA, expected: 7, index: 0
constexpr uintptr_t CString_dtor = 0x1401AEB30 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8, expected: 1, index: 0
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x1401B3A20 - ImageBase; // 48 89 6C 24 20 57 41 54 41 56 48 83 EC ?, expected: 2, index: 0
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x1401B59F0 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 89 11, expected: 20, index: 0
constexpr uintptr_t Handle_DecWeakRef = 0x1401B5C60 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 8B 49 08 48 85 C9 74 ? B8 FF FF FF FF, expected: 85, index: 1
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_sub_D8 = 0x1401EEC90 - ImageBase; // 40 53 48 83 EC ? 48 8B 01 49 8B D8, expected: 4, index: 0
constexpr uintptr_t IScriptable_GetValueHolder = 0x1401EED20 - ImageBase; // 40 53 48 83 EC 20 48 83 79 38 00 48 8B D9 75, expected: 2, index: 1
constexpr uintptr_t IScriptable_DestructValueHolder = 0x1401EF5C0 - ImageBase; // 40 56 48 83 EC 30 48 83 79 38 00 48 8B F1 0F 84, expected: 1, index: 0
#pragma endregion

#pragma region ISerializable
constexpr uintptr_t ISerializable_sub_30 = 0x1401BA170 - ImageBase; // 48 83 EC ? E8 ? ? ? ? 48 85 C0, expected: 32, index: 1
constexpr uintptr_t ISerializable_sub_40 = 0x1401BA1A0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC ? 48 8B F2, expected: 72, index: 0
constexpr uintptr_t ISerializable_sub_78 = 0x1401B9BD0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 44 88 4C 24 20 55 41 54, expected: 3, index: 0
constexpr uintptr_t ISerializable_sub_A0 = 0x1401C4230 - ImageBase; // 48 83 EC ? 48 8B 01 FF 50 08, expected: 7, index: 1
constexpr uintptr_t ISerializable_sub_C0 = 0x1401BA010 - ImageBase; // 40 53 48 83 EC ? 48 8B DA E8 ? ? ? ?, expected: 115, index: 1
#pragma endregion

#pragma region JobHandle
constexpr uintptr_t JobHandle_ctor = 0x142C483B0 - ImageBase; // 40 53 48 83 EC 20 0F B7 02 48 8B D9 48 8B 0D ? ? ? ? 4D 8B C8 66 89 44 24 30 4C 8D 44 24 30, expected: 1, index: 0
constexpr uintptr_t JobHandle_dtor = 0x142C483F0 - ImageBase; // 40 53 48 83 EC 20 48 8B 11 48 8B D9 48 85 D2 74 13 48 8B 0D ? ? ? ? E8 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t JobHandle_Join = 0x142C48420 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 40 48 8B FA 48 8B D9 48 8B 12 48 8B 0D ? ? ? ? E8 ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region JobInternals
constexpr uintptr_t JobInternals_SetLocalThreadParam = 0x142C49ED0 - ImageBase; // 8B 15 ? ? ? ? 65 48 8B 04 25 58 00 00 00 41 B8 ? ? ? ? 48 8B 04 D0 41 88 0C 00 C3, expected: 4, index: 2
constexpr uintptr_t JobInternals_DispatchJob = 0x142C49D20 - ImageBase; // 4D 8B 08 4C 8B 02 48 8B D1 48 8B 0D ? ? ? ? E9 ? ? ? ?, expected: 2, index: 0
#pragma endregion

#pragma region JobQueue
constexpr uintptr_t JobQueue_ctor_FromGroup = 0x142C49EF0 - ImageBase; // 48 89 5C 24 10 48 89 6C 24 18 56 57 41 54 41 56 41 57 48 83 EC 20 0F B7 7A 30 4C 8B F1, expected: 1, index: 0
constexpr uintptr_t JobQueue_ctor_FromParams = 0x142C49FD0 - ImageBase; // 48 89 5C 24 10 48 89 6C 24 18 56 57 41 56 48 83 EC 20 48 8D 05 ? ? ? ? 49 8B D8 48 89 01, expected: 1, index: 0
constexpr uintptr_t JobQueue_dtor = 0x142C4A090 - ImageBase; // 40 53 48 83 EC 20 80 79 30 00 48 8B D9 75 ? E8 ? ? ? ? 48 8D 4B 18 E8 ? ? ? ? 48 8D 4B 10, expected: 1, index: 0
constexpr uintptr_t JobQueue_Capture = 0x142C4A140 - ImageBase; // 48 89 5C 24 18 57 48 83  EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 53 10 48 8B CF E8, expected: 1, index: 0
constexpr uintptr_t JobQueue_SyncWait = 0x142C4A0C0 - ImageBase; // 48 89 5C 24 18 57 48 83 EC 20 48 8B D9 48 83 C1 18 E8 ? ? ? ? 84 C0 75 ? 48 8D 4B 10, expected: 1, index: 0
#pragma endregion

#pragma region Memory
constexpr uintptr_t Memory_Vault_Get = 0x1401A40B0 - ImageBase; // 48 8D 05 ? ? ? ? C3, expected: 1372, index: 0
constexpr uintptr_t Memory_Vault_Alloc = 0x1401A21A0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30, expected: 1986, index: 5
constexpr uintptr_t Memory_Vault_AllocAligned = 0x1401A2290 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30, expected: 454, index: 0
constexpr uintptr_t Memory_Vault_Realloc = 0x1401A2660 - ImageBase; // 48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56, expected: 298, index: 0
constexpr uintptr_t Memory_Vault_ReallocAligned = 0x1401A2910 - ImageBase; // 48 89 5C 24 18 56 57 41 56 48 83 EC 40, expected: 16, index: 0
constexpr uintptr_t Memory_Vault_Free = 0x1401A23A0 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 20 4C 8B 81 00 C9 00 00, expected: 1, index: 0
constexpr uintptr_t Memory_Vault_Unk1 = 0x1401A2430 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 4C 8B 81 00 C9 00 00, expected: 2, index: 0
constexpr uintptr_t Memory_PoolStorage_OOM = 0x1401A2DC0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56, expected: 1339, index: 0
#pragma endregion

#pragma region OpcodeHandlers
constexpr uintptr_t OpcodeHandlers_Get = 0x1401CF41D - ImageBase; // 4C 8D 15 ? ? ? ? 33 C0 48 C7 44 24 20 00 00 00 00, expected: 14, index: 0
#pragma endregion

#pragma region ResourceDepot
constexpr uintptr_t ResourceDepot = 0x143F5DC68 - ImageBase; // 48 89 0D ? ? ? ? C3, expected: 26, index: 2, offset: 3
#pragma endregion

#pragma region ResourceLoader
constexpr uintptr_t ResourceLoader = 0x143ECD7D0 - ImageBase; // 48 8B 87 ? ? ? ? 48 8B 5C 24 ? 48 89 05 ? ? ? ? 48 83 C4 20 5F C3, expected: 1, index: 0, offset: 15
constexpr uintptr_t ResourceLoader_FindToken = 0x14020BC60 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B F1 49 8B D8 48 83 C1 40 48 8B EA E8, expected: 1, index: 0
constexpr uintptr_t ResourceLoader_LoadAsync = 0x14020C530 - ImageBase; // 4C 8B DC 49 89 5B 10 49 89 6B 18 49 89 73 20 57 48 83 EC 50 48 8B 69 48 33 C0 49 C7 43 D8 00 00 00 00, expected: 1, index: 0
#pragma endregion

#pragma region ResourceReference
constexpr uintptr_t ResourceReference_Load = 0x140255FC0 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 30 48 8D 59 08 48 8B F9 48 8B 0B 48 85 C9, expected: 1, index: 0
constexpr uintptr_t ResourceReference_Fetch = 0x140256070 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 E8 ? ? ? ? 48 8B 4B 08 48 85 C9 74 0A, expected: 1, index: 0
constexpr uintptr_t ResourceReference_Reset = 0x140255F50 - ImageBase; // 48 83 EC 38 45 33 C0 4C 89 01 48 8B 51 10 48 8B 41 08 48 89 54 24 28 4C 89 41 10 48 89 44 24 20, expected: 1, index: 0
#pragma endregion

#pragma region ResourceToken
constexpr uintptr_t ResourceToken_dtor = 0x140254560 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 20 8B 41 58 48 8B D9 85 C0 74, expected: 1, index: 0
constexpr uintptr_t ResourceToken_Fetch = 0x140255980 - ImageBase; // 40 53 48 83 EC 40 8B 41 58 48 8B D9 0F 29 74 24 30 0F 29 7C 24 20 85 C0 74 0A, expected: 1, index: 0
constexpr uintptr_t ResourceToken_OnLoaded = 0x140255070 - ImageBase; // 40 55 53 56 57 41 56 48 8D 6C 24 C9 48 81 EC F0 00 00 00 48 8B 41 08 0F 57 C0 49 8B F8 4C 8B F2, expected: 1, index: 0
constexpr uintptr_t ResourceToken_CancelUnk38 = 0x142BFAFC0 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 B9 08 00 00 00 E8, expected: 1, index: 0
constexpr uintptr_t ResourceToken_DestructUnk38 = 0x1401BF5F0 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 8B 49 08 48 85 C9 74 ? B8 FF FF FF FF F0 0F C1 01 83 F8 01 75, expected: 73, index: 1
#pragma endregion

#pragma region Streams
constexpr uintptr_t Streams_MemoryStream_ctor = 0x142C272D0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B DA 49 8B E9, expected: 3, index: 1
#pragma endregion

#pragma region TTypedClass
constexpr uintptr_t TTypedClass_IsEqual = 0x140201F40 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 56 41 57, expected: 425, index: 5
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x140BE4E90 - ImageBase; // 48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 75 68, expected: 1, index: 0
constexpr uintptr_t TweakDB_StaticFlatDataBuffer = 0x140F526FF - ImageBase; // 48 89 1D ? ? ? ? 48 C1 E7 04, expected: 1, index: 0
constexpr uintptr_t TweakDB_InitFlatValue_ExceptInt32 = 0x140F4F010 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 18 48 89 74 24 20 57 41 56 41 57, expected: 51, index: 13
constexpr uintptr_t TweakDB_FlatInt32ValueVftable = 0x140F528D1 - ImageBase; // 48 8D ? ? ? ? ? 0F 1F 84 00 00 00 00 00 48 8B 4D E7, expected: 1, index: 0
constexpr uintptr_t TweakDB_FlatArrayInt32ValueVftable = 0x140F52957 - ImageBase; // 48 8D 05 ? ? ? ? 48 8D ? ? 48 89 06, expected: 49, index: 10
constexpr uintptr_t TweakDB_CreateRecord = 0x140FD3110 - ImageBase; // 48 89 5C 24 08 ? 89 ? 24 18 57 48 83 EC 30 8B C2, expected: 1, index: 0
#pragma endregion

#pragma region UpdateRegistrar
constexpr uintptr_t UpdateRegistrar_RegisterGroupUpdate = 0x140A90FA0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 81 EC C0 00 00 00 48 8B BC 24 00 01 00 00, expected: 1, index: 0
constexpr uintptr_t UpdateRegistrar_RegisterBucketUpdate = 0x140A90E70 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 81 EC C0 00 00 00 48 8B BC 24 08 01 00 00, expected: 1, index: 0
#pragma endregion
} // namespace RED4ext::Addresses
// clang-format on
