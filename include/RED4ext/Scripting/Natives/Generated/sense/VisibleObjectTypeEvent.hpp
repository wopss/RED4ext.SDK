#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SenseObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct VisibleObjectTypeEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibleObjectTypeEvent";
    static constexpr const char* ALIAS = "VisibleObjectTypeEvent";

    game::data::SenseObjectType type; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(VisibleObjectTypeEvent, 0x48);
} // namespace sense
using senseVisibleObjectTypeEvent = sense::VisibleObjectTypeEvent;
using VisibleObjectTypeEvent = sense::VisibleObjectTypeEvent;
} // namespace RED4ext

// clang-format on
