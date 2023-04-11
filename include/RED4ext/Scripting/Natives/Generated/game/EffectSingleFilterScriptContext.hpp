#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectSingleFilterScriptContext
{
    static constexpr const char* NAME = "gameEffectSingleFilterScriptContext";
    static constexpr const char* ALIAS = "EffectSingleFilterScriptContext";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectSingleFilterScriptContext, 0x8);
} // namespace game
using gameEffectSingleFilterScriptContext = game::EffectSingleFilterScriptContext;
using EffectSingleFilterScriptContext = game::EffectSingleFilterScriptContext;
} // namespace RED4ext

// clang-format on
