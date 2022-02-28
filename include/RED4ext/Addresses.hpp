#pragma once

/*
 * This file is generated. DO NOT modify it!
 *
 * Add new patterns in "patterns.py" file located in "project_root/scripts" and run "find_patterns.py".
 * The new file should be located in "idb_path/Addresses.hpp".
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 1.5.
namespace RED4ext::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_ExecuteScripted = 0x140206EF0 - ImageBase; // 40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_ExecuteNative = 0x140206880 - ImageBase; // 48 89 5C 24 ? 57 48 81 EC ? ? ? ? 48 8B 02, expected: 9, index: 1
constexpr uintptr_t CBaseFunction_InternalExecute = 0x140206900 - ImageBase; // 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_Register = 0x140206240 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0 44 8B 4C 24 58 48 8B DA 41 83 C9 01, expected: 1, index: 0
#pragma endregion

#pragma region CBaseRTTIType
constexpr uintptr_t CBaseRTTIType_sub_80 = 0x1401F9580 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC ? 48 8B D9, expected: 558, index: 16
constexpr uintptr_t CBaseRTTIType_sub_88 = 0x1401F9510 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F9, expected: 25, index: 0
constexpr uintptr_t CBaseRTTIType_sub_90 = 0x1401F9300 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 81 EC ?, expected: 295, index: 1
constexpr uintptr_t CBaseRTTIType_sub_98 = 0x141DEF750 - ImageBase; // 40 53 55 57 48 83 EC 50 48 8B D9, expected: 2, index: 0
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0x1401F92D0 - ImageBase; // 48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA 48 8B D1, expected: 1, index: 0
#pragma endregion

#pragma region CBitfield
constexpr uintptr_t CBitfield_Unserialize = 0x140245080 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 18 56 57 41 55, expected: 2, index: 0
constexpr uintptr_t CBitfield_ToString = 0x1402451F0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 30 0F B6 41 20, expected: 1, index: 0
constexpr uintptr_t CBitfield_FromString = 0x140244D70 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 40, expected: 80, index: 3
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_Unserialize = 0x1401F81F0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 49 8B F9, expected: 2, index: 0
constexpr uintptr_t CClass_ToString = 0x1401F84C0 - ImageBase; // 48 8B C4 55 48 8D 68 ? 48 81 EC ? ? ? ?, expected: 70, index: 1
constexpr uintptr_t CClass_sub_80 = 0x1401F35D0 - ImageBase; // 40 53 55 57 41 55 41 56, expected: 13, index: 0
constexpr uintptr_t CClass_sub_88 = 0x1401F8320 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 18 56 57 41 56, expected: 208, index: 8
constexpr uintptr_t CClass_sub_90 = 0x1401F6CB0 - ImageBase; // 48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00, expected: 3, index: 0
constexpr uintptr_t CClass_sub_98 = 0x1401F8D70 - ImageBase; // 48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00, expected: 3, index: 1
constexpr uintptr_t CClass_sub_A0 = 0x1401F4ED0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 20, expected: 102, index: 0
constexpr uintptr_t CClass_sub_B0 = 0x1401F6E10 - ImageBase; // 48 89 5C 24 ? 55 57 41 57 48 83 EC ?, expected: 10, index: 0
constexpr uintptr_t CClass_sub_C0 = 0x1401F7860 - ImageBase; // 48 83 EC ? 48 89 5C 24 78 48 89 7C 24 60, expected: 1, index: 0
constexpr uintptr_t CClass_GetMaxAlignment = 0x1401EFF50 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 30 F6 41 70 0C 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CClass_sub_D0 = 0x1401F86F0 - ImageBase; // 48 89 4C 24 08 53 56 48 83 EC 58, expected: 1, index: 0
constexpr uintptr_t CClass_AllocInstance = 0x1401F32A0 - ImageBase; // 40 56 41 56 48 83 EC ? 41 0F B6 F0, expected: 1, index: 0
constexpr uintptr_t CClass_GetProperty = 0x1401F3DC0 - ImageBase; // 48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00, expected: 1, index: 0
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x140206240 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0, expected: 3, index: 1
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x1402061E0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0, expected: 3, index: 0
#pragma endregion

#pragma region CEnum
constexpr uintptr_t CEnum_Unserialize = 0x140215800 - ImageBase; // 48 89 5C 24 08 48 89 74 24 18 57 48 83 EC ? 8B 42 ?, expected: 1, index: 0
constexpr uintptr_t CEnum_ToString = 0x140215A30 - ImageBase; // 40 ? 48 83 EC ? 44 0F B6 49 20 33 C0, expected: 1, index: 0
constexpr uintptr_t CEnum_FromString = 0x1402155A0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 8B F9 49 8B D8, expected: 1, index: 0
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x1442387B0 - ImageBase; // 48 89 05 ? ? ? ? ? 8D ? 30 01 00 00, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x140206190 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B D9, expected: 6, index: 0
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x1401A5390 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 30 45 33 C0 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddCString = 0x1409E82A0 - ImageBase; // 48 89 5C 24 08 48 89 74  24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 8B CA E8 ? ? ? ? 48 8B CB 48 8B F8 E8, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddPair = 0x1401A57E0 - ImageBase; // 48 83 EC 38 33 C0 48 89 54 24 20 48 85 D2, expected: 1, index: 0
constexpr uintptr_t CNamePool_Get = 0x1401A5350 - ImageBase; // 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIRegistrator
constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = 0x143E135BC - ImageBase; // B8 01 00 00 00 F0 0F C1 05 ? ? ? ? FF C0 C3, expected: 1, index: 0, offset: 9
constexpr uintptr_t CRTTIRegistrator_Add = 0x1401ABBF0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 20 4C 89 44 24 18 48 89 54 24 10 57 48 83 EC 50 48 8B F1, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0x140212EA0 - ImageBase; // 48 89 5C 24 18 57 48 83 EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 05 , expected: 1, index: 0
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0x140214460 - ImageBase; // 48 89 5C 24 20 57 48 83  EC 20 4C 89 41 18 48 8B, expected: 1, index: 0
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x14024D2B0 - ImageBase; // 40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_ctor = 0x1402453C0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00, expected: 3, index: 1
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_ctor = 0x1401A00F0 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF, expected: 19, index: 0
constexpr uintptr_t CString_copy = 0x1401A0520 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 3B CA, expected: 7, index: 0
constexpr uintptr_t CString_dtor = 0x1401A03D0 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8, expected: 1, index: 0
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x1401A5150 - ImageBase; // 48 89 6C 24 20 57 41 54 41 56 48 83 EC ?, expected: 2, index: 0
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x1401A7120 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 89 11, expected: 20, index: 0
constexpr uintptr_t Handle_DecWeakRef = 0x1401A7390 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 8B 49 08 48 85 C9 74 ? B8 FF FF FF FF, expected: 85, index: 1
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_sub_D8 = 0x1401E03E0 - ImageBase; // 40 53 48 83 EC ? 48 8B 01 49 8B D8, expected: 4, index: 0
constexpr uintptr_t IScriptable_GetValueHolder = 0x1401E0470 - ImageBase; // 40 53 48 83 EC 20 48 83 79 38 00 48 8B D9 75, expected: 2, index: 1
#pragma endregion

#pragma region ISerializable
constexpr uintptr_t ISerializable_sub_30 = 0x1401AB8A0 - ImageBase; // 48 83 EC ? E8 ? ? ? ? 48 85 C0, expected: 31, index: 1
constexpr uintptr_t ISerializable_sub_40 = 0x1401AB8D0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC ? 48 8B F2, expected: 72, index: 0
constexpr uintptr_t ISerializable_sub_78 = 0x1401AB300 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 44 88 4C 24 20 55 41 54, expected: 3, index: 0
constexpr uintptr_t ISerializable_sub_A0 = 0x1401B5960 - ImageBase; // 48 83 EC ? 48 8B 01 FF 50 08, expected: 7, index: 1
constexpr uintptr_t ISerializable_sub_C0 = 0x1401AB740 - ImageBase; // 40 53 48 83 EC ? 48 8B DA E8 ? ? ? ?, expected: 115, index: 1
#pragma endregion

#pragma region Memory
constexpr uintptr_t Memory_Vault_Get = 0x140195950 - ImageBase; // 48 8D 05 ? ? ? ? C3, expected: 1278, index: 0
constexpr uintptr_t Memory_Vault_Alloc = 0x140193A40 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30, expected: 1962, index: 5
constexpr uintptr_t Memory_Vault_AllocAligned = 0x140193B30 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30, expected: 451, index: 0
constexpr uintptr_t Memory_Vault_Realloc = 0x140193F00 - ImageBase; // 48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56, expected: 301, index: 0
constexpr uintptr_t Memory_Vault_ReallocAligned = 0x1401941B0 - ImageBase; // 48 89 5C 24 18 56 57 41 56 48 83 EC 40, expected: 15, index: 0
constexpr uintptr_t Memory_Vault_Free = 0x140193C40 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 20 4C 8B 81 00 C9 00 00, expected: 1, index: 0
constexpr uintptr_t Memory_Vault_Unk1 = 0x140193CD0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 4C 8B 81 00 C9 00 00, expected: 2, index: 0
constexpr uintptr_t Memory_PoolStorage_OOM = 0x140194660 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56, expected: 1327, index: 0
#pragma endregion

#pragma region OpcodeHandlers
constexpr uintptr_t OpcodeHandlers_Get = 0x1401C0B7D - ImageBase; // 4C 8D 15 ? ? ? ? 33 C0 48 C7 44 24 20 00 00 00 00, expected: 13, index: 0
#pragma endregion

#pragma region Streams
constexpr uintptr_t Streams_MemoryStream_ctor = 0x142B94170 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B DA 49 8B E9, expected: 3, index: 1
#pragma endregion

#pragma region TTypedClass
constexpr uintptr_t TTypedClass_IsEqual = 0x1401F34F0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 56 41 57, expected: 423, index: 5
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x140BC8880 - ImageBase; // 48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 75 68, expected: 1, index: 0
constexpr uintptr_t TweakDB_StaticFlatDataBuffer = 0x140F13580 - ImageBase; // 48 89 1D ? ? ? ? 48 C1 E7 04, expected: 1, index: 0
constexpr uintptr_t TweakDB_InitFlatValue_ExceptInt32 = 0x140F10120 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 48 8B DA 48 8B F9 E8 6B FD, expected: 1, index: 0
constexpr uintptr_t TweakDB_FlatInt32ValueVftable = 0x140F0FC89 - ImageBase; // 48 8D 05 ? ? ? ? 48 89 07 8B 03, expected: 13, index: 1
constexpr uintptr_t TweakDB_FlatArrayInt32ValueVftable = 0x140F0FCE1 - ImageBase; // 48 8D 05 ? ? ? ? 48 8D 4C 24 48 48 89 06, expected: 17, index: 0
constexpr uintptr_t TweakDB_CreateRecord = 0x140FAB800 - ImageBase; // 48 89 5C 24 08 ? 89 ? 24 18 57 48 83 EC 30 8B C2, expected: 1, index: 0
#pragma endregion
} // namespace RED4ext::Addresses
