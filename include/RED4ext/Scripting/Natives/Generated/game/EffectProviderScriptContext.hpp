#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectProviderScriptContext
{
    static constexpr const char* NAME = "gameEffectProviderScriptContext";
    static constexpr const char* ALIAS = "EffectProviderScriptContext";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectProviderScriptContext, 0x8);
} // namespace game
using gameEffectProviderScriptContext = game::EffectProviderScriptContext;
using EffectProviderScriptContext = game::EffectProviderScriptContext;
} // namespace RED4ext

// clang-format on
