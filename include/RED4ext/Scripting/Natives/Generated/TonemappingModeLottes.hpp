#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITonemappingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct TonemappingModeLottes : ITonemappingMode
{
    static constexpr const char* NAME = "TonemappingModeLottes";
    static constexpr const char* ALIAS = NAME;

    float maxInput; // D8
    float contrast; // DC
    float midIn; // E0
    float midOut; // E4
    Vector3 crosstalk; // E8
    Vector3 crosstalkSaturation; // F4
};
RED4EXT_ASSERT_SIZE(TonemappingModeLottes, 0x100);
} // namespace RED4ext

// clang-format on
