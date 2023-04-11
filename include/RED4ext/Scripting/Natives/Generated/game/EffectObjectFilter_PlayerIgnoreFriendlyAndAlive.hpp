#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectGroupFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_PlayerIgnoreFriendlyAndAlive : game::EffectObjectGroupFilter
{
    static constexpr const char* NAME = "gameEffectObjectFilter_PlayerIgnoreFriendlyAndAlive";
    static constexpr const char* ALIAS = NAME;

    TweakDBID ignoreCharacterRecord; // 40
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_PlayerIgnoreFriendlyAndAlive, 0x48);
} // namespace game
using gameEffectObjectFilter_PlayerIgnoreFriendlyAndAlive = game::EffectObjectFilter_PlayerIgnoreFriendlyAndAlive;
} // namespace RED4ext

// clang-format on
