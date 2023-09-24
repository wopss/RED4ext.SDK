#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CensorshipFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GlitchEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct CensorshipEffect : ink::GlitchEffect
{
    static constexpr const char* NAME = "inkCensorshipEffect";
    static constexpr const char* ALIAS = NAME;

    CensorshipFlags censorshipFlags; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CensorshipEffect, 0x70);
} // namespace ink
using inkCensorshipEffect = ink::CensorshipEffect;
} // namespace RED4ext

// clang-format on
