#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Sample_Replicated_Root_Object.hpp>

namespace RED4ext
{
struct Sample_Customized_Replicated_Root_Object : Sample_Replicated_Root_Object
{
    static constexpr const char* NAME = "Sample_Customized_Replicated_Root_Object";
    static constexpr const char* ALIAS = NAME;

    bool bool2; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(Sample_Customized_Replicated_Root_Object, 0x20);
} // namespace RED4ext

// clang-format on
