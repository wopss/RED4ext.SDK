#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/EInteractionEventType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/LayerData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::interactions { 
struct InteractionEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsInteractionEvent";
    static constexpr const char* ALIAS = "InteractionEvent";

    WeakHandle<game::Object> hotspot; // 40
    WeakHandle<game::Object> activator; // 50
    game::interactions::LayerData layerData; // 60
    game::interactions::EInteractionEventType eventType; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(InteractionEvent, 0x70);
} // namespace game::interactions
using InteractionEvent = game::interactions::InteractionEvent;
} // namespace RED4ext
