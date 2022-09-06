#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITonemappingMode.hpp>

namespace RED4ext
{
struct TonemappingModeLinear : ITonemappingMode
{
    static constexpr const char* NAME = "TonemappingModeLinear";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TonemappingModeLinear, 0xD8);
} // namespace RED4ext

// clang-format on
