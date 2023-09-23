#pragma once

/*
 * This file is generated. DO NOT modify it!
 *
 * Add new patterns in "patterns.py" file located in "project_root/scripts" and run "find_patterns.py".
 * The new file should be located in "idb_path/Addresses.hpp".
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 2.0.
// clang-format off
namespace RED4ext::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_Handlers = 0x1432ACCB0 - ImageBase; // 4C 8D 05 ? ? ? ? 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?, expected: 2, index: 1, offset: 3
constexpr uintptr_t CBaseFunction_ExecuteScripted = 0x14027EB94 - ImageBase; // 40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_ExecuteNative = 0x141FAF4EC - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ?, expected: 66, index: 44
constexpr uintptr_t CBaseFunction_InternalExecute = 0x140218D40 - ImageBase; // 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6, expected: 1, index: 0
#pragma endregion

#pragma region CBaseRTTIType
constexpr uintptr_t CBaseRTTIType_sub_80 = 0x141FAF17C - ImageBase; // 48 8B C4 48 89 58 ? 57 48 83 EC ? 33 DB 4D 8B C8, expected: 1, index: 0
constexpr uintptr_t CBaseRTTIType_sub_88 = 0x141FAF0DC - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 10 57 48 83 EC ? 33 DB, expected: 4, index: 2
constexpr uintptr_t CBaseRTTIType_sub_90 = 0x141FAEFB8 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 41 F7 41 ? ? ? ? ?, expected: 13, index: 1
constexpr uintptr_t CBaseRTTIType_sub_98 = 0x141FAF208 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 F7 41 ? ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0x141FAEFA0 - ImageBase; // 48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA, expected: 1, index: 0
#pragma endregion

#pragma region CBitfield
constexpr uintptr_t CBitfield_Unserialize = 0x140182ABC - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? F6 42 ? 02, expected: 1, index: 0
constexpr uintptr_t CBitfield_ToString = 0x141FBFB2C - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 56 57 41 56 48 83 EC ? 48 83 60 ? 00, expected: 5, index: 4
constexpr uintptr_t CBitfield_FromString = 0x141FBFA14 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 70 ? 55 48 8B EC 48 83 EC ? F2 41 0F 10 00, expected: 2, index: 0
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_Unserialize = 0x14014CBD4 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 15 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CClass_ToString = 0x1409A0070 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ?, expected: 341, index: 104
constexpr uintptr_t CClass_sub_80 = 0x141FADA78 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ?, expected: 985, index: 513
constexpr uintptr_t CClass_sub_88 = 0x141FAD9CC - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 02, expected: 65, index: 34
constexpr uintptr_t CClass_sub_90 = 0x140931F84 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?, expected: 3, index: 1
constexpr uintptr_t CClass_sub_98 = 0x141FAEC54 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?, expected: 3, index: 2
constexpr uintptr_t CClass_sub_A0 = 0x141FAE288 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 56 41 57 48 8B EC, expected: 537, index: 354
constexpr uintptr_t CClass_sub_B0 = 0x1404EFE08 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B 05 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CClass_sub_C0 = 0x1405FFCC0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 83 64 24 ? ?, expected: 58, index: 11
constexpr uintptr_t CClass_GetMaxAlignment = 0x1405FFC44 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 8B 59 ?, expected: 125, index: 18
constexpr uintptr_t CClass_sub_D0 = 0x141FAE924 - ImageBase; // 4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 41 54 41 55 41 56, expected: 34, index: 26
constexpr uintptr_t CClass_CreateInstance = 0x14014C550 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 65 48 8B 04 25 ? ? ? ?, expected: 422, index: 7
constexpr uintptr_t CClass_GetProperty = 0x14014D4D8 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF 48 8B DA, expected: 4, index: 0
constexpr uintptr_t CClass_GetProperties = 0x1405FFDD0 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B D9, expected: 30, index: 6
constexpr uintptr_t CClass_InitializeProperties = 0x14014CE14 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? F6 41 70 ?, expected: 1, index: 0
constexpr uintptr_t CClass_AssignDefaultValuesToProperties = 0x14014C6E8 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? 48 8B F9 48 8B EA, expected: 2, index: 0
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x140ADCBD8 - ImageBase; // 40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ?, expected: 2, index: 1
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x140ADCB6C - ImageBase; // 40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ?, expected: 2, index: 0
#pragma endregion

#pragma region CEnum
constexpr uintptr_t CEnum_Unserialize = 0x14014D8C4 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? F6 42 ? ?, expected: 4, index: 1
constexpr uintptr_t CEnum_ToString = 0x1405C612C - ImageBase; // 48 8B C4 53 48 83 EC ? 48 83 60 ? 00 49 8B D8 4C 8D 40 ?, expected: 1, index: 0
constexpr uintptr_t CEnum_FromString = 0x1406BFD84 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F2 48 8B F9, expected: 188, index: 40
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x1432F09F0 - ImageBase; // 48 89 05 ? ? ? ? 48 8B D8 48 8B 10 FF 92 ? ? ? ?, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x140ADCB20 - ImageBase; // 48 83 EC ? 4D 8B D1 41 B9 ? ? ? ? E8 ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x14029F480 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 89 54 24 ? 48 8B CA, expected: 2, index: 0
constexpr uintptr_t CNamePool_AddCString = 0x142169A18 - ImageBase; // 48 83 EC ? 48 8B 01 4C 8B D9 48 8D 4C 24 ?, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddPair = 0x140A01824 - ImageBase; // 48 83 EC ? 4C 8B C1 48 89 54 24 ? 48 8B CA E8 ? ? ? ?, expected: 3, index: 1
constexpr uintptr_t CNamePool_Get = 0x140415718 - ImageBase; // 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIRegistrator
constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = 0x143DA970C - ImageBase; // F0 0F C1 05 ? ? ? ? FF C0 48 8D 0D ? ? ? ? 89 05 ? ? ? ? E8 ? ? ? ?, expected: 11822, index: 0, offset: 4
constexpr uintptr_t CRTTIRegistrator_Add = 0x140B95DFC - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 4C 89 40 ? 48 89 50 ? 57, expected: 40, index: 7
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0x140277EDC - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 8D 05 ? ? ? ? 33 C9 4C 8B C2 48 89 4B 08 48 89 03 , expected: 1, index: 0
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0x140219C64 - ImageBase; // 48 89 5C 24 20 57 48 83 EC 20 4C 89 41 18 48 8B DA 48 89 51 10 48 8B F9, expected: 1, index: 0
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x1402A3F08 - ImageBase; // 48 83 EC ? 65 48 8B 04 25 ? ? ? ? BA ? ? ? ? 48 8B 08 8B 04 0A 39 05 ? ? ? ? 0F 8F ? ? ? ?, expected: 5, index: 1
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_vtbl = 0x142A16CA8 - ImageBase; // 48 8D 05 ? ? ? ? 48 89 45 ? 48 8D 45 ? 48 89 45 ? 66 0F 7F 45 ?, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_ctor_str = 0x140297550 - ImageBase; // 48 85 D2 74 15 48 83 C8 FF 48 FF C0, expected: 1, index: 0
constexpr uintptr_t CString_ctor_span = 0x14099FFDC - ImageBase; // 40 53 48 83 EC ? 33 C0 48 8B D9 48 89 41 ?, expected: 6, index: 3
constexpr uintptr_t CString_copy = 0x14011D99C - ImageBase; // B8 ? ? ? ? 39 41 ? 73 19 39 42 ?, expected: 1, index: 0
constexpr uintptr_t CString_dtor = 0x14014A5F4 - ImageBase; // 40 53 48 83 EC ? 8B 41 ? 48 8B D9 C1 E8 ?, expected: 2, index: 0
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x140154DA0 - ImageBase; // 48 89 5C 24 ? 44 89 4C 24 ? 55 56 57 41 54 41 55 41 56 41 57, expected: 18, index: 0
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x14014AEA0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 83 61 ? ?, expected: 1, index: 0
constexpr uintptr_t Handle_DecWeakRef = 0x140150DA8 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 8B 49 ? 48 85 C9, expected: 123, index: 9
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_sub_D8 = 0x141FA8A68 - ImageBase; // 40 53 48 83 EC ? 48 8B 01 49 8B D8 FF 50 08, expected: 1, index: 0
constexpr uintptr_t IScriptable_DestructValueHolder = 0x14014E440 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 83 79 ? ?, expected: 3, index: 0
#pragma endregion

#pragma region ISerializable
constexpr uintptr_t ISerializable_sub_30 = 0x141F9B730 - ImageBase; // 48 83 EC ? E8 ? ? ? ? 48 85 C0 74 11, expected: 3, index: 2
constexpr uintptr_t ISerializable_sub_40 = 0x14014DB34 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? F6 42 ? ?, expected: 1, index: 0
constexpr uintptr_t ISerializable_sub_78 = 0x140756358 - ImageBase; // 48 89 74 24 ? 48 89 7C 24 ? 44 88 4C 24 ? 55 41 56 41 57, expected: 1, index: 0
constexpr uintptr_t ISerializable_sub_A0 = 0x1409F3728 - ImageBase; // 48 83 EC ? 48 8B 01 FF 50 08 48 8B C8, expected: 12, index: 1
constexpr uintptr_t ISerializable_sub_C0 = 0x140390FBC - ImageBase; // 40 53 48 83 EC ? 48 8B DA E8 ? ? ? ? 48 85 C0, expected: 17, index: 0
#pragma endregion

#pragma region JobHandle
constexpr uintptr_t JobHandle_ctor = 0x140158DEC - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 54 48 83 EC ?, expected: 1, index: 0
constexpr uintptr_t JobHandle_dtor = 0x1401587D4 - ImageBase; // 40 53 48 83 EC ? 48 8B 11 48 8B D9 48 85 D2, expected: 6, index: 0
constexpr uintptr_t JobHandle_Join = 0x140156B4C - ImageBase; // 48 83 EC ? 48 8B 02 4C 8B C2 8B 40 ?, expected: 1, index: 0
#pragma endregion

#pragma region JobInternals
constexpr uintptr_t JobInternals_DispatchJob = 0x140157368 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 44 88 40 ? 57 41 54, expected: 2, index: 0
#pragma endregion

#pragma region JobQueue
constexpr uintptr_t JobQueue_ctor_FromGroup = 0x140158CEC - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B 42 ? 48 8B DA, expected: 23, index: 0
constexpr uintptr_t JobQueue_ctor_FromParams = 0x140158D2C - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B D9, expected: 65, index: 0
constexpr uintptr_t JobQueue_dtor = 0x140156A74 - ImageBase; // 40 53 48 83 EC ? 80 79 ? ? 48 8B D9 75 05, expected: 1, index: 0
constexpr uintptr_t JobQueue_Capture = 0x14017F294 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8B 43 ?, expected: 6, index: 0
constexpr uintptr_t JobQueue_SyncWait = 0x1401574EC - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8B EC 48 83 EC ? 48 8D 79 ? 48 8B F1, expected: 1, index: 0
#pragma endregion

#pragma region Memory
constexpr uintptr_t Memory_Vault = 0x1432FE540 - ImageBase; // C6 04 0A 01 48 8D 0D ? ? ? ? 8B 50 ? 48 8B C1, expected: 2, index: 0, offset: 7
constexpr uintptr_t Memory_Vault_Alloc = 0x14014AFA8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57, expected: 892, index: 5
constexpr uintptr_t Memory_Vault_AllocAligned = 0x1401504FC - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57, expected: 1038, index: 8
constexpr uintptr_t Memory_Vault_Realloc = 0x14068E988 - ImageBase; // 40 53 48 83 EC ? 4D 8B D8 48 8B DA 4C 8B D1, expected: 1, index: 0
constexpr uintptr_t Memory_Vault_ReallocAligned = 0x140156D1C - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57, expected: 1038, index: 10
constexpr uintptr_t Memory_Vault_Free = 0x140150E1C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 81 ? ? ? ?, expected: 4, index: 0
constexpr uintptr_t Memory_Vault_Unk1 = 0x141F96F8C - ImageBase; // 4C 8B 81 ? ? ? ? 48 8B C2 4C 8B 89 ? ? ? ? 49 2B C0, expected: 3, index: 2
constexpr uintptr_t Memory_PoolStorage_OOM = 0x141F96D90 - ImageBase; // 48 83 EC ? 48 8B C1 44 89 44 24 ? 4C 8B CA, expected: 1, index: 0
#pragma endregion

#pragma region ResourceDepot
constexpr uintptr_t ResourceDepot = 0x1446DE478 - ImageBase; // 48 89 05 ? ? ? ? 49 8B 5B ? 49 8B 73 ?, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region ResourceLoader
constexpr uintptr_t ResourceLoader = 0x1432ECCB8 - ImageBase; // 48 89 05 ? ? ? ? 48 83 C4 ? 5F C3, expected: 6, index: 0, offset: 3
constexpr uintptr_t ResourceLoader_FindTokenFast = 0x140151B4C - ImageBase; // 48 8B C4 4C 89 40 ? 53 48 83 EC ? 48 8B DA 4C 8D 40 ?, expected: 2, index: 0
constexpr uintptr_t ResourceLoader_LoadAsync = 0x14066F464 - ImageBase; // 48 89 5C 24 ? 55 48 8B EC 48 83 EC ? 83 4D E8 ? 33 C0, expected: 1, index: 0
#pragma endregion

#pragma region ResourceReference
constexpr uintptr_t ResourceReference_Load = 0x14013AEC4 - ImageBase; // 40 53 48 83 EC ? 48 8D 59 ? 4C 8B C1 48 8B 0B, expected: 1, index: 0
constexpr uintptr_t ResourceReference_Fetch = 0x14013AE98 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 8B 43 ? 48 85 C0, expected: 2, index: 0
constexpr uintptr_t ResourceReference_Reset = 0x1402C30E4 - ImageBase; // 48 83 EC ? 48 8B 41 ? 48 83 61 ? ? 48 89 44 24 ? 48 8B 01 48 83 21 ?, expected: 27, index: 5
#pragma endregion

#pragma region ResourceToken
constexpr uintptr_t ResourceToken_dtor = 0x140290C30 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B D9 E8 ? ? ? ? 84 C0 74 36, expected: 1, index: 0
constexpr uintptr_t ResourceToken_Fetch = 0x14084A3D4 - ImageBase; // 40 53 48 83  EC 50 48 8B D9 E8 ? ? ? ? 84 C0 74 0A 48 8D 43 28, expected: 1, index: 0
constexpr uintptr_t ResourceToken_OnLoaded = 0x14061AA34 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B F2 48 8B D9 48 8B D1, expected: 2, index: 0
constexpr uintptr_t ResourceToken_CancelUnk38 = 0x140C10B7C - ImageBase; // F6 05 5D ? ? ? ? 75 07 48 83 79 68 FF 75 01 C3, expected: 1, index: 0
constexpr uintptr_t ResourceToken_DestructUnk38 = 0x140290E6C - ImageBase; // 40 53 48 83 EC 30 48 8B D9 E8 ? ? ? ? 84 C0 75 ? 48 83 C4 30 5B C3, expected: 194, index: 27
#pragma endregion

#pragma region TTypedClass
constexpr uintptr_t TTypedClass_IsEqual = 0x140218000 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56, expected: 892, index: 27
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x140124624 - ImageBase; // 48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 74 0C, expected: 1, index: 0
#error Could not find pattern "", expected: 1, index: 0
#error Could not find pattern "", expected: 51, index: 13
constexpr uintptr_t TweakDB_FlatInt32ValueVftable = 0x141039432 - ImageBase; // 48 8D 05 ? ? ? ? 48 83 C2 07 4C 8D 4C 24 ? 48 83 E2 ? 4C 8D 44 24 50, expected: 9, index: 5
constexpr uintptr_t TweakDB_FlatArrayInt32ValueVftable = 0x1421CE864 - ImageBase; // 48 8D 05 ? ? ? ? 48 8B D3 48 89 07 E8 ? ? ? ?, expected: 29, index: 16
constexpr uintptr_t TweakDB_CreateRecord = 0x14028C938 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 8B C2, expected: 6, index: 0
#pragma endregion

#pragma region UpdateRegistrar
constexpr uintptr_t UpdateRegistrar_RegisterGroupUpdate = 0x1407B2E50 - ImageBase; // 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B1 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9, expected: 1, index: 0
constexpr uintptr_t UpdateRegistrar_RegisterBucketUpdate = 0x1407B21F8 - ImageBase; // 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B9 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9, expected: 1, index: 0
#pragma endregion
} // namespace RED4ext::Addresses
// clang-format on
