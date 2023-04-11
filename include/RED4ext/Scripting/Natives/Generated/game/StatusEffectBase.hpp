#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct StatusEffectBase : IScriptable
{
    static constexpr const char* NAME = "gameStatusEffectBase";
    static constexpr const char* ALIAS = "StatusEffectBase";

    TweakDBID statusEffectRecordID; // 40
};
RED4EXT_ASSERT_SIZE(StatusEffectBase, 0x48);
} // namespace game
using gameStatusEffectBase = game::StatusEffectBase;
using StatusEffectBase = game::StatusEffectBase;
} // namespace RED4ext

// clang-format on
