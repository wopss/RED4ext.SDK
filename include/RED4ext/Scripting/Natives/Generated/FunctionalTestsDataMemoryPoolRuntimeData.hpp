#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct FunctionalTestsDataMemoryPoolRuntimeData : ISerializable
{
    static constexpr const char* NAME = "FunctionalTestsDataMemoryPoolRuntimeData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    CString poolName; // 38
    int64_t bytesAllocated; // 58
    int64_t allocationCount; // 60
};
RED4EXT_ASSERT_SIZE(FunctionalTestsDataMemoryPoolRuntimeData, 0x68);
} // namespace RED4ext

// clang-format on
