#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariableEnum : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableEnum";
    static constexpr const char* ALIAS = NAME;

    CName enumClass; // 40
    int64_t defaultValue; // 48
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableEnum, 0x50);
} // namespace RED4ext

// clang-format on
