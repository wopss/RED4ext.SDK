#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITonemappingMode.hpp>

namespace RED4ext
{
struct TonemappingModeLottesACES : ITonemappingMode
{
    static constexpr const char* NAME = "TonemappingModeLottesACES";
    static constexpr const char* ALIAS = NAME;

    float maxInput; // D8
    float contrast; // DC
    float midIn; // E0
    float midOut; // E4
};
RED4EXT_ASSERT_SIZE(TonemappingModeLottesACES, 0xE8);
} // namespace RED4ext

// clang-format on
