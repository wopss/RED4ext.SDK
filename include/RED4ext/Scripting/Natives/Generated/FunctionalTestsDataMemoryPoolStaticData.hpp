#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct FunctionalTestsDataMemoryPoolStaticData : ISerializable
{
    static constexpr const char* NAME = "FunctionalTestsDataMemoryPoolStaticData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    CString poolName; // 38
    int64_t budget; // 58
    int64_t childrenBudget; // 60
    DynArray<CString> children; // 68
    CString parent; // 78
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(FunctionalTestsDataMemoryPoolStaticData, 0xA0);
} // namespace RED4ext

// clang-format on
