#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct MaskEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkMaskEffect";
    static constexpr const char* ALIAS = NAME;

    float angle; // 60
    float opacity; // 64
    bool invert; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(MaskEffect, 0x70);
} // namespace ink
using inkMaskEffect = ink::MaskEffect;
} // namespace RED4ext

// clang-format on
