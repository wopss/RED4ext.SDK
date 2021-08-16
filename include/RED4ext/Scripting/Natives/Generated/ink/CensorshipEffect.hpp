#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CensorshipFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GlitchEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct CensorshipEffect : ink::GlitchEffect
{
    static constexpr const char* NAME = "inkCensorshipEffect";
    static constexpr const char* ALIAS = NAME;

    CensorshipFlags censorshipFlags; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(CensorshipEffect, 0x88);
} // namespace ink
} // namespace RED4ext
