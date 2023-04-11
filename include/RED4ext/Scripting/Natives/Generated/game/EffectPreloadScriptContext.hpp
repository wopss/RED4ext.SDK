#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectPreloadScriptContext
{
    static constexpr const char* NAME = "gameEffectPreloadScriptContext";
    static constexpr const char* ALIAS = "EffectPreloadScriptContext";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectPreloadScriptContext, 0x8);
} // namespace game
using gameEffectPreloadScriptContext = game::EffectPreloadScriptContext;
using EffectPreloadScriptContext = game::EffectPreloadScriptContext;
} // namespace RED4ext

// clang-format on
