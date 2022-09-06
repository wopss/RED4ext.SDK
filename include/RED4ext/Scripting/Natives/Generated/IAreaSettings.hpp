#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct IAreaSettings : ISerializable
{
    static constexpr const char* NAME = "IAreaSettings";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    uint64_t disabledIndexedProperties; // 38
    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IAreaSettings, 0x48);
} // namespace RED4ext

// clang-format on
