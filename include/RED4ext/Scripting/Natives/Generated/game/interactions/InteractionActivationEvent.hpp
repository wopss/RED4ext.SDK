#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/EInteractionEventType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/InteractionBaseEvent.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct InteractionActivationEvent : game::interactions::InteractionBaseEvent
{
    static constexpr const char* NAME = "gameinteractionsInteractionActivationEvent";
    static constexpr const char* ALIAS = "InteractionActivationEvent";

    game::interactions::EInteractionEventType eventType; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(InteractionActivationEvent, 0x70);
} // namespace game::interactions
using gameinteractionsInteractionActivationEvent = game::interactions::InteractionActivationEvent;
using InteractionActivationEvent = game::interactions::InteractionActivationEvent;
} // namespace RED4ext

// clang-format on
