#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/StatusEffectEvent.hpp>

namespace RED4ext
{
namespace game::events
{
struct RemoveStatusEffect : game::events::StatusEffectEvent
{
    static constexpr const char* NAME = "gameeventsRemoveStatusEffect";
    static constexpr const char* ALIAS = "RemoveStatusEffect";

    bool isFinalRemoval; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(RemoveStatusEffect, 0x68);
} // namespace game::events
using gameeventsRemoveStatusEffect = game::events::RemoveStatusEffect;
using RemoveStatusEffect = game::events::RemoveStatusEffect;
} // namespace RED4ext

// clang-format on
