#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/InterpolationDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/InterpolationMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/InterpolationType.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct Interpolator : IScriptable
{
    static constexpr const char* NAME = "inkanimInterpolator";
    static constexpr const char* ALIAS = "inkAnimInterpolator";

    uint8_t unk40[0x58 - 0x40]; // 40
    bool useRelativeDuration; // 58
    bool isAdditive; // 59
    uint8_t unk5A[0x5C - 0x5A]; // 5A
    float startDelay; // 5C
    float duration; // 60
    ink::anim::InterpolationMode interpolationMode; // 64
    ink::anim::InterpolationType interpolationType; // 65
    ink::anim::InterpolationDirection interpolationDirection; // 66
    uint8_t unk67[0x68 - 0x67]; // 67
};
RED4EXT_ASSERT_SIZE(Interpolator, 0x68);
} // namespace ink::anim
using inkanimInterpolator = ink::anim::Interpolator;
using inkAnimInterpolator = ink::anim::Interpolator;
} // namespace RED4ext

// clang-format on
