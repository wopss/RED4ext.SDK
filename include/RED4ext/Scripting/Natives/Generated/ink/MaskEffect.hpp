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

    float angle; // 50
    float opacity; // 54
    bool invert; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(MaskEffect, 0x60);
} // namespace ink
using inkMaskEffect = ink::MaskEffect;
} // namespace RED4ext

// clang-format on
