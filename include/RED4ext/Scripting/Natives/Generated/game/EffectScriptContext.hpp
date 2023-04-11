#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectScriptContext
{
    static constexpr const char* NAME = "gameEffectScriptContext";
    static constexpr const char* ALIAS = "EffectScriptContext";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectScriptContext, 0x8);
} // namespace game
using gameEffectScriptContext = game::EffectScriptContext;
using EffectScriptContext = game::EffectScriptContext;
} // namespace RED4ext

// clang-format on
