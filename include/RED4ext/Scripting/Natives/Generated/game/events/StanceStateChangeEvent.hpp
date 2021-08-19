#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/NPCStanceState.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { 
struct StanceStateChangeEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsStanceStateChangeEvent";
    static constexpr const char* ALIAS = NAME;

    game::data::NPCStanceState state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(StanceStateChangeEvent, 0x48);
} // namespace game::events
} // namespace RED4ext
