#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct VisibleObjectetSecondaryDistanceEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibleObjectetSecondaryDistanceEvent";
    static constexpr const char* ALIAS = "VisibleObjectetSecondaryDistanceEvent";

    float distance; // 40
    float extraEvaluationDistance; // 44
};
RED4EXT_ASSERT_SIZE(VisibleObjectetSecondaryDistanceEvent, 0x48);
} // namespace sense
using senseVisibleObjectetSecondaryDistanceEvent = sense::VisibleObjectetSecondaryDistanceEvent;
using VisibleObjectetSecondaryDistanceEvent = sense::VisibleObjectetSecondaryDistanceEvent;
} // namespace RED4ext

// clang-format on
