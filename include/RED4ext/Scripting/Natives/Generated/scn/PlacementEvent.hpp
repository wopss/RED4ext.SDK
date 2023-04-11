#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct PlacementEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnPlacementEvent";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    scn::Marker targetWaypoint; // 60
};
RED4EXT_ASSERT_SIZE(PlacementEvent, 0xC0);
} // namespace scn
using scnPlacementEvent = scn::PlacementEvent;
} // namespace RED4ext

// clang-format on
