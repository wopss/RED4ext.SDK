#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game
{
struct EffectGroupFilterScriptContext
{
    static constexpr const char* NAME = "gameEffectGroupFilterScriptContext";
    static constexpr const char* ALIAS = "EffectGroupFilterScriptContext";

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<int32_t> resultIndices; // 08
};
RED4EXT_ASSERT_SIZE(EffectGroupFilterScriptContext, 0x18);
} // namespace game
using gameEffectGroupFilterScriptContext = game::EffectGroupFilterScriptContext;
using EffectGroupFilterScriptContext = game::EffectGroupFilterScriptContext;
} // namespace RED4ext

// clang-format on
