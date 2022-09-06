#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariableFloat : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableFloat";
    static constexpr const char* ALIAS = NAME;

    float defaultValue; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableFloat, 0x48);
} // namespace RED4ext

// clang-format on
