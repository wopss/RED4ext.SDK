#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutionScriptContext
{
    static constexpr const char* NAME = "gameEffectExecutionScriptContext";
    static constexpr const char* ALIAS = "EffectExecutionScriptContext";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectExecutionScriptContext, 0x8);
} // namespace game
using gameEffectExecutionScriptContext = game::EffectExecutionScriptContext;
using EffectExecutionScriptContext = game::EffectExecutionScriptContext;
} // namespace RED4ext

// clang-format on
