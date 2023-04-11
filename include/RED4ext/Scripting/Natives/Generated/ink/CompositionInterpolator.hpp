#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/InterpolationMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/InterpolationType.hpp>

namespace RED4ext
{
namespace ink
{
struct CompositionInterpolator
{
    static constexpr const char* NAME = "inkCompositionInterpolator";
    static constexpr const char* ALIAS = NAME;

    CName parameter; // 00
    float startDelay; // 08
    float duration; // 0C
    ink::anim::InterpolationMode interpolationMode; // 10
    ink::anim::InterpolationType interpolationType; // 11
    uint8_t unk12[0x38 - 0x12]; // 12
};
RED4EXT_ASSERT_SIZE(CompositionInterpolator, 0x38);
} // namespace ink
using inkCompositionInterpolator = ink::CompositionInterpolator;
} // namespace RED4ext

// clang-format on
