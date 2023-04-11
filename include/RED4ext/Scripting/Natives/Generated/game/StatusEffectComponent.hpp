#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct StatusEffectComponent : game::Component
{
    static constexpr const char* NAME = "gameStatusEffectComponent";
    static constexpr const char* ALIAS = "StatusEffectComponent";

    uint8_t unkA8[0xB0 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(StatusEffectComponent, 0xB0);
} // namespace game
using gameStatusEffectComponent = game::StatusEffectComponent;
using StatusEffectComponent = game::StatusEffectComponent;
} // namespace RED4ext

// clang-format on
