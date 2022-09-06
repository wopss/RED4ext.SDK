#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct Sample_Replicated_Serializable : ISerializable
{
    static constexpr const char* NAME = "Sample_Replicated_Serializable";
    static constexpr const char* ALIAS = NAME;

    bool property; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(Sample_Replicated_Serializable, 0x38);
} // namespace RED4ext

// clang-format on
