#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Sample_Replicated_Root_Object
{
    static constexpr const char* NAME = "Sample_Replicated_Root_Object";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    bool bool_; // 10 -- bool
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(Sample_Replicated_Root_Object, 0x18);
} // namespace RED4ext

// clang-format on
