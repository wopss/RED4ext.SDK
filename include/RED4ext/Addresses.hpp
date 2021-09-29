#pragma once

/*
 * This file is generated. DO NOT modify it!
 *
 * Add new patterns in "patterns.py" file located in "project_root/scripts" and run "find_patterns.py".
 * The new file should be located in "idb_path/Addresses.hpp".
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 1.31.
namespace RED4ext::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_Execute = 0x14022EAD0 - ImageBase; // 48 89 5C 24 08 57 48 81 EC 90 01 00 00 F6, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_InternalExecute = 0x14022EEA0 - ImageBase; // 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_Register = 0x14022E330 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0 44 8B 4C 24 58 48 8B DA 41 83 C9 01, expected: 1, index: 0
#pragma endregion

#pragma region CBaseRTTIType
constexpr uintptr_t CBaseRTTIType_sub_80 = 0x140215790 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B D9, expected: 56, index: 0
constexpr uintptr_t CBaseRTTIType_sub_88 = 0x140215720 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F9, expected: 72, index: 0
constexpr uintptr_t CBaseRTTIType_sub_90 = 0x1402154D0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 55 48 8D 6C 24 B1, expected: 5, index: 0
constexpr uintptr_t CBaseRTTIType_sub_98 = 0x140215800 - ImageBase; // 40 53 55 57 48 83 EC 50 48 8B D9, expected: 2, index: 0
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0x1402154A0 - ImageBase; // 48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA 48 8B D1, expected: 1, index: 0
#pragma endregion

#pragma region CBitfield
constexpr uintptr_t CBitfield_Unserialize = 0x14026EA60 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 18 56 57 41 55, expected: 1, index: 0
constexpr uintptr_t CBitfield_ToString = 0x14026EBE0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 20 0F B6 41 20, expected: 1, index: 0
constexpr uintptr_t CBitfield_FromString = 0x14026E730 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 40, expected: 58, index: 1
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_Unserialize = 0x140220880 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 49 8B F9, expected: 2, index: 0
constexpr uintptr_t CClass_ToString = 0x140220B40 - ImageBase; // 48 8B C4 55 48 8D 68 E8 48 81 EC 10 01 00 00, expected: 5, index: 0
constexpr uintptr_t CClass_sub_80 = 0x14021BCC0 - ImageBase; // 40 53 57 41 54 41 56 41 57, expected: 13, index: 0
constexpr uintptr_t CClass_sub_88 = 0x1402209A0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 18 56 57 41 56, expected: 197, index: 7
constexpr uintptr_t CClass_sub_90 = 0x14021F560 - ImageBase; // 48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00, expected: 2, index: 0
constexpr uintptr_t CClass_sub_98 = 0x140221450 - ImageBase; // 48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00, expected: 2, index: 1
constexpr uintptr_t CClass_sub_A0 = 0x14021DA40 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 20, expected: 117, index: 0
constexpr uintptr_t CClass_sub_B0 = 0x14021F6C0 - ImageBase; // 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 54, expected: 250, index: 2
constexpr uintptr_t CClass_sub_C0 = 0x14021FF00 - ImageBase; // 4C 8B DC 41 55 48 83 EC 60 49 89 5B 10, expected: 3, index: 0
constexpr uintptr_t CClass_GetMaxAlignment = 0x140218330 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 30 F6 41 70 0C 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CClass_sub_D0 = 0x140220D70 - ImageBase; // 48 89 4C 24 08 53 56 48 83 EC 58, expected: 1, index: 0
constexpr uintptr_t CClass_AllocInstance = 0x14021BAB0 - ImageBase; // 48 89 6C 24 18 56 48 83 EC 30 41 0F B6 E8, expected: 1, index: 0
constexpr uintptr_t CClass_GetProperty = 0x14021C4E0 - ImageBase; // 48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00, expected: 1, index: 0
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x14022E330 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0, expected: 3, index: 1
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x14022E2D0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0, expected: 3, index: 0
#pragma endregion

#pragma region CEnum
constexpr uintptr_t CEnum_Unserialize = 0x14023CF60 - ImageBase; // 48 89 5C 24 08 48 89 74 24 18 57 48 83 EC 20 48 8B F9, expected: 4, index: 0
constexpr uintptr_t CEnum_ToString = 0x14023D1A0 - ImageBase; // 40 53 48 83 EC 20 44 0F B6 49 20 33 C0, expected: 1, index: 0
constexpr uintptr_t CEnum_FromString = 0x14023CD00 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 8B F9 49 8B D8, expected: 1, index: 0
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x14424CA80 - ImageBase; // 48 89 05 ? ? ? ? ? 8D ? 88 00 00 00 49 8B, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x14022E280 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B D9, expected: 6, index: 0
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x1401CDAF0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 30 45 33 C0 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddCString = 0x140A4B210 - ImageBase; // 48 89 5C 24 08 48 89 74  24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 8B CA E8 ? ? ? ? 48 8B CB 48 8B F8 E8, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddPair = 0x1401CDF40 - ImageBase; // 48 83 EC 38 33 C0 48 89 54 24 20 48 85 D2, expected: 1, index: 0
constexpr uintptr_t CNamePool_Get = 0x1401CDAB0 - ImageBase; // 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIRegistrator
constexpr uintptr_t CRTTIRegistrator_Add = 0x1401D0A40 - ImageBase; // 48 89 5C 24 08 48 89 74 24 20 4C 89 44 24 18 48 89 54 24 10 57 48 83 EC 50 48 8B F1, expected: 1, index: 0
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0x14023A400 - ImageBase; // 48 89 5C 24 18 57 48 83 EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 05 , expected: 1, index: 0
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0x14023B960 - ImageBase; // 48 89 5C 24 20 57 48 83  EC 20 4C 89 41 18 48 8B, expected: 1, index: 0
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x140271F40 - ImageBase; // 40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_ctor = 0x14027A620 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00, expected: 3, index: 1
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_ctor = 0x1401C8A10 - ImageBase; // 40 53 48 83 EC 20 33 C0 C6 01 00, expected: 4, index: 2
constexpr uintptr_t CString_copy = 0x1401C8C80 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 3B CA, expected: 8, index: 0
constexpr uintptr_t CString_dtor = 0x1401C8B20 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8, expected: 1, index: 0
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x1401CD7D0 - ImageBase; // 40 56 57 41 54 41 56 48 83 EC 68, expected: 1, index: 0
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x140222D50 - ImageBase; // 48 89 5C 24 18 48 89 6C 24 20 57 48 83 EC 60 33 ED, expected: 1, index: 0
constexpr uintptr_t Handle_DecWeakRef = 0x1401D2B00 - ImageBase; // 40 53 48 83 EC 30 48 8B D9 48 8B 49 08 48 85 C9 74 43 B8 FF FF FF FF, expected: 1, index: 0
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_GetValueHolder = 0x140206600 - ImageBase; // 40 53 48 83 EC 20 48 83 79 38 00 48 8B D9 75, expected: 2, index: 1
#pragma endregion

#pragma region Memory
constexpr uintptr_t Memory_Vault_Get = 0x1401BD5E0 - ImageBase; // 48 8D 05 ? ? ? ? C3, expected: 1238, index: 4
constexpr uintptr_t Memory_Vault_Alloc = 0x1401BC3E0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 33 C0, expected: 9, index: 0
constexpr uintptr_t Memory_Vault_AllocAligned = 0x1401BC4C0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 33 C0, expected: 3, index: 0
constexpr uintptr_t Memory_Vault_Realloc = 0x1401BC890 - ImageBase; // 48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56, expected: 293, index: 0
constexpr uintptr_t Memory_Vault_ReallocAligned = 0x1401BCB70 - ImageBase; // 48 89 5C 24 18 56 57 41 56 48 83 EC 40, expected: 13, index: 0
constexpr uintptr_t Memory_Vault_Free = 0x1401BC5D0 - ImageBase; // 48 89 5C 24 10 57 48 83 EC 20 4C 8B 81 00 C9 00 00, expected: 1, index: 0
constexpr uintptr_t Memory_Vault_Unk1 = 0x1401BC660 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 4C 8B 81 00 C9 00 00, expected: 2, index: 0
constexpr uintptr_t Memory_PoolStorage_OOM = 0x1401BD060 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56, expected: 1516, index: 0
#pragma endregion

#pragma region OpcodeHandlers
constexpr uintptr_t OpcodeHandlers_Get = 0x1401E572D - ImageBase; // 4C 8D 15 ? ? ? ? 33 C0 48 C7 44 24 20 00 00 00 00, expected: 11, index: 0
#pragma endregion

#pragma region Streams
constexpr uintptr_t Streams_MemoryStream_ctor = 0x142C61D80 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B DA 49 8B E9, expected: 3, index: 1
#pragma endregion

#pragma region TTypedClass
constexpr uintptr_t TTypedClass_IsEqual = 0x14021BBE0 - ImageBase; // 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 56 41 57, expected: 453, index: 7
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x140C42BC0 - ImageBase; // 48 83 EC 48 48 8B 05 ? ? ? ? 48 85 C0 0F 85 8A 00 00 00, expected: 1, index: 0
constexpr uintptr_t TweakDB_StaticFlatDataBuffer = 0x140FBA3AA - ImageBase; // 48 89 1D ? ? ? ? 41 89 BF 30 01 00 00, expected: 1, index: 0
constexpr uintptr_t TweakDB_InitFlatValue_ExceptInt32 = 0x140FB76C0 - ImageBase; // 48 89 5C 24 20 55 41 54 41 55 41 56 41 57 48 83 EC 20 65 48 8B 04 25 58 00 00 00 4C, expected: 4, index: 0
constexpr uintptr_t TweakDB_FlatInt32ValueVftable = 0x140FBA58F - ImageBase; // 48 8D 3D ? ? ? ? 65 48 8B 04 25 58 00 00 00 4C 8B, expected: 1, index: 0
constexpr uintptr_t TweakDB_FlatArrayInt32ValueVftable = 0x140FBA645 - ImageBase; // 48 8D 05 ? ? ? ? 48 89 06 48 8D 55 67, expected: 2, index: 0
constexpr uintptr_t TweakDB_CreateRecord = 0x141055920 - ImageBase; // 48 89 5C 24 08 ? 89 ? 24 18 57 48 83 EC 30 8B C2, expected: 1, index: 0
#pragma endregion
} // namespace RED4ext::Addresses
