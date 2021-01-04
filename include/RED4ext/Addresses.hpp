#pragma once

#include <cstdint>

// Addresses for Cyberpunk 2077 1.06
namespace RED4ext::Addresses
{
// 48 89 5C 24 08 57 48 81 EC 90 01 00 00 F6 41 78 01 48 8B DA, expected: 1, index: 0
constexpr uintptr_t CBaseFunction_Execute = 0x1402249F0 - 0x140000000;

// 48 89 6C 24 18 56 48 83 EC 30 41 0F B6 E8, expected: 1, index: 0
constexpr uintptr_t CClass_AllocInstance = 0x140212590 - 0x140000000;

// 48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00, expected: 1, index: 0
constexpr uintptr_t CClass_GetProperty = 0x140212FC0 - 0x140000000;

// 4C 8B C9 48 85 C9 74 5E 49 8B 41 48, expected: 1, index: 0
constexpr uintptr_t CClass_GetFunction = 0x140212D50 - 0x140000000;

// 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8, expected: 1, index: 0
constexpr uintptr_t CNamePool_Get = 0x1401BC060 - 0x140000000;

// 40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?, expected: 1, index: 0
constexpr uintptr_t CRTTISystem_Get = 0x140267450 - 0x140000000;

// 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00, expected: 3, index: 1
constexpr uintptr_t CStack_ctor = 0x14026F8A0 - 0x140000000;

// 40 53 48 83 EC 20 33 C0 C6 01 00, expected: 4, index: 2
constexpr uintptr_t CString_ctor = 0x1401B6FC0 - 0x140000000;

// 40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8, expected: 1, index: 0
constexpr uintptr_t CString_dtor = 0x1401B70D0 - 0x140000000;

// 40 53 48 83 EC 20 48 8B D9 48 3B CA, expected: 8, index: 0
constexpr uintptr_t CString_copy = 0x1401B7230 - 0x140000000;

// 40 53 48 83 EC 20 48 83 79 38 00, expected: 4, index: 1
constexpr uintptr_t IScriptable_GetValueHolder = 0x1401FDDA0 - 0x140000000;

// 48 89 05 ? ? ? ? 49 8D 9D 88 00 00 00 49 8B 07 4C 8B C3, expected: 1, offset: found_address + 3
constexpr uintptr_t CGameEngine = 0x1440287E8 - 0x140000000;
} // namespace RED4ext::Addresses
