#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTreeVariable.hpp>

namespace RED4ext
{
struct LibTreeDefTreeVariableCName : LibTreeDefTreeVariable
{
    static constexpr const char* NAME = "LibTreeDefTreeVariableCName";
    static constexpr const char* ALIAS = NAME;

    CName defaultValue; // 40
};
RED4EXT_ASSERT_SIZE(LibTreeDefTreeVariableCName, 0x48);
} // namespace RED4ext

// clang-format on
