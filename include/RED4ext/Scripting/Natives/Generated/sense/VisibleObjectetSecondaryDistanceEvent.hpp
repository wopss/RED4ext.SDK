#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense { 
struct VisibleObjectetSecondaryDistanceEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibleObjectetSecondaryDistanceEvent";
    static constexpr const char* ALIAS = "VisibleObjectetSecondaryDistanceEvent";

    float distance; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(VisibleObjectetSecondaryDistanceEvent, 0x48);
} // namespace sense
using VisibleObjectetSecondaryDistanceEvent = sense::VisibleObjectetSecondaryDistanceEvent;
} // namespace RED4ext
