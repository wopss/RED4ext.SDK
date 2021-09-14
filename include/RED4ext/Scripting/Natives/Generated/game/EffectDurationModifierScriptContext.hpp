#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct EffectDurationModifierScriptContext
{
    static constexpr const char* NAME = "gameEffectDurationModifierScriptContext";
    static constexpr const char* ALIAS = "EffectDurationModifierScriptContext";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectDurationModifierScriptContext, 0x8);
} // namespace game
using EffectDurationModifierScriptContext = game::EffectDurationModifierScriptContext;
} // namespace RED4ext
