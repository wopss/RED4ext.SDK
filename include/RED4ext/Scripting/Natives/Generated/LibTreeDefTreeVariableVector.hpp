#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariableVector : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableVector";
    static constexpr const char* ALIAS = NAME;

    Vector3 defaultValue; // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableVector, 0x50);
} // namespace RED4ext

// clang-format on
