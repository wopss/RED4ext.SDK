#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariableInt32 : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableInt32";
    static constexpr const char* ALIAS = NAME;

    int32_t defaultValue; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableInt32, 0x48);
} // namespace RED4ext

// clang-format on
