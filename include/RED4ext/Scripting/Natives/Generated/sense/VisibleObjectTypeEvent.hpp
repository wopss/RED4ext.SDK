#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SenseObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense { 
struct VisibleObjectTypeEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibleObjectTypeEvent";
    static constexpr const char* ALIAS = NAME;

    game::data::SenseObjectType type; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(VisibleObjectTypeEvent, 0x48);
} // namespace sense
} // namespace RED4ext
