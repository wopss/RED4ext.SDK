#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct StatusEffectTDBPicker
{
    static constexpr const char* NAME = "gameStatusEffectTDBPicker";
    static constexpr const char* ALIAS = "StatusEffectTDBPicker";

    TweakDBID statusEffect; // 00
};
RED4EXT_ASSERT_SIZE(StatusEffectTDBPicker, 0x8);
} // namespace game
using gameStatusEffectTDBPicker = game::StatusEffectTDBPicker;
using StatusEffectTDBPicker = game::StatusEffectTDBPicker;
} // namespace RED4ext

// clang-format on
