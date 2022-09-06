#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeParameter.hpp>

namespace RED4ext
{
struct LibTreeParameterList
{
    static constexpr const char* NAME = "LibTreeParameterList";
    static constexpr const char* ALIAS = NAME;

    DynArray<LibTreeParameter> parameters; // 00
};
RED4EXT_ASSERT_SIZE(LibTreeParameterList, 0x10);
} // namespace RED4ext

// clang-format on
