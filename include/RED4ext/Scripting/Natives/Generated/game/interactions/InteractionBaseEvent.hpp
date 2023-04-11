#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/LayerData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::interactions
{
struct InteractionBaseEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsInteractionBaseEvent";
    static constexpr const char* ALIAS = "InteractionBaseEvent";

    WeakHandle<game::Object> hotspot; // 40
    WeakHandle<game::Object> activator; // 50
    game::interactions::LayerData layerData; // 60
};
RED4EXT_ASSERT_SIZE(InteractionBaseEvent, 0x68);
} // namespace game::interactions
using gameinteractionsInteractionBaseEvent = game::interactions::InteractionBaseEvent;
using InteractionBaseEvent = game::interactions::InteractionBaseEvent;
} // namespace RED4ext

// clang-format on
