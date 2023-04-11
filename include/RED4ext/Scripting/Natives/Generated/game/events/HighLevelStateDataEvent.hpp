#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/NPCHighLevelState.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct HighLevelStateDataEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsHighLevelStateDataEvent";
    static constexpr const char* ALIAS = "gameHighLevelStateDataEvent";

    game::data::NPCHighLevelState currentHighLevelState; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    ent::EntityID currentNPCEntityID; // 48
};
RED4EXT_ASSERT_SIZE(HighLevelStateDataEvent, 0x50);
} // namespace game::events
using gameeventsHighLevelStateDataEvent = game::events::HighLevelStateDataEvent;
using gameHighLevelStateDataEvent = game::events::HighLevelStateDataEvent;
} // namespace RED4ext

// clang-format on
