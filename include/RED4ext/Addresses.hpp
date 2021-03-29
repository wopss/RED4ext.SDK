#pragma once

/*
 * This file is generated. DO NOT modify it!
 *
 * Add new patterns in "patterns.py" file located in "project_root/scripts" and run "find_patterns.py".
 * The new file should be located in "idb_path/Addresses.hpp".
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 1.2.
namespace RED4ext::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

#pragma region Allocators
constexpr uintptr_t Allocators_RTTI_Get = 0x1401BD7F0 - ImageBase; // 48 83 EC 28 65 48 8B 04 25 58 00 00 00 8B 0D ? ? ? ? BA A0 07 00 00 48 8B 0C C8 8B 04 0A 39 05 ? ? ? ? 7F 0C, expected: 370, index: 2
constexpr uintptr_t Allocators_RTTIFunction_Get = 0x140223EE0 - ImageBase; // 48 83 EC 28 65 48 8B 04 25 58 00 00 00 8B 0D ? ? ? ? BA A0 07 00 00 48 8B 0C C8 8B 04 0A 39 05 ? ? ? ? 7F 0C, expected: 370, index: 14
#pragma endregion

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_Execute = 0x1402237C0 - ImageBase; // 48 89 5C 24 08 57 48 81 EC 90 01 00 00 F6 41 78 01 48 8B DA, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_InternalExecute = 0x140223B80 - ImageBase; // 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6 41 78 01, expected: 1, index: 0
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_AllocInstance = 0x140210F20 - ImageBase; // 48 89 6C 24 18 56 48 83 EC 30 41 0F B6 E8, expected: 1, index: 0
constexpr uintptr_t CClass_GetProperty = 0x140211950 - ImageBase; // 48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00, expected: 1, index: 0
constexpr uintptr_t CClass_GetFunction = 0x1402116E0 - ImageBase; // 4C 8B C9 48 85 C9 74 5E 49 8B 41 48, expected: 1, index: 0
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x140223040 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0, expected: 3, index: 1
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x140222FE0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0, expected: 3, index: 0
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x144100FE8 - ImageBase; // 48 89 05 ? ? ? ? 4D 8D 85 88 00 00 00 49 8B 07 48 8B D7, expected: 1, index: 0, offset: 3
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x140222F90 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 20 49 8B D9, expected: 6, index: 0
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x1401BA1D0 - ImageBase; // 48 89 5C 24 08 57 48 83 EC 30 45 33 C0 48 8B F9, expected: 1, index: 0
constexpr uintptr_t CNamePool_AddCString = 0x1401BA0F0 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 41 56, expected: 496, index: 1
constexpr uintptr_t CNamePool_AddPair = 0x1401BA690 - ImageBase; // 48 83 EC 38 33 C0 48 89 54 24 20 48 85 D2, expected: 1, index: 0
constexpr uintptr_t CNamePool_Get = 0x1401BA0B0 - ImageBase; // 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x140265DB0 - ImageBase; // 40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?, expected: 1, index: 0
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_ctor = 0x14026E270 - ImageBase; // 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00, expected: 3, index: 1
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_ctor = 0x1401B5010 - ImageBase; // 40 53 48 83 EC 20 33 C0 C6 01 00, expected: 4, index: 2
constexpr uintptr_t CString_copy = 0x1401B5280 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 48 3B CA, expected: 8, index: 0
constexpr uintptr_t CString_dtor = 0x1401B5120 - ImageBase; // 40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8, expected: 1, index: 0
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x1401B9DD0 - ImageBase; // 40 56 57 41 54 41 56 48 83 EC 68, expected: 1, index: 0
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x14021C100 - ImageBase; // 48 89 5C 24 18 48 89 6C 24 20 57 48 83 EC 60 33 ED, expected: 1, index: 0
constexpr uintptr_t Handle_DecWeakRef = 0x1401BEFD0 - ImageBase; // 40 53 48 83 EC 30 48 8B D9 48 8B 49 08 48 85 C9 74 43 B8 FF FF FF FF, expected: 1, index: 0
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_GetValueHolder = 0x1401FC620 - ImageBase; // 40 53 48 83 EC 20 48 83 79 38 00, expected: 4, index: 1
#pragma endregion

#pragma region OpcodeHandlers
constexpr uintptr_t OpcodeHandlers_Get = 0x1401D1B59 - ImageBase; // 4C 8D 15 ? ? ? ? 48 89 42 38 49 8B F8 48 8B 02 4C 8D 44 24 20 C7, expected: 5, index: 0
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x140C08220 - ImageBase; // 48 83 EC 48 48 8B 05 ? ? ? ? 48 85 C0 0F 85 8A 00 00 00, expected: 1, index: 0
constexpr uintptr_t TweakDB_StaticFlatDataBuffer = 0x140F60D4A - ImageBase; // 48 89 1D ? ? ? ? 41 89 BF 30 01 00 00, expected: 1, index: 0
constexpr uintptr_t TweakDB_InitFlatValue_ExceptInt32 = 0x140F5E080 - ImageBase; // 48 89 5C 24 20 55 41 54 41 55 41 56 41 57 48 83 EC 20 65 48 8B 04 25 58 00 00 00 4C, expected: 4, index: 0
constexpr uintptr_t TweakDB_FlatInt32ValueVftable = 0x140F60F2F - ImageBase; // 48 8D 3D ? ? ? ? 65 48 8B 04 25 58 00 00 00 4C 8B, expected: 1, index: 0
constexpr uintptr_t TweakDB_FlatArrayInt32ValueVftable = 0x140F60FE5 - ImageBase; // 48 8D 05 ? ? ? ? 48 89 06 48 8D 55 67, expected: 2, index: 0
constexpr uintptr_t TweakDB_CreateRecord = 0x140FF93E0 - ImageBase; // 48 89 5C 24 08 4C 89 44 24 18 57 48 83 EC 30 8B C2, expected: 1, index: 0
#pragma endregion
} // namespace RED4ext::Addresses
