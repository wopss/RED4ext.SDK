#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct WalkToEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnWalkToEvent";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    CName targetWaypointTag; // 60
    bool usePathfinding; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(WalkToEvent, 0x70);
} // namespace scn
using scnWalkToEvent = scn::WalkToEvent;
} // namespace RED4ext

// clang-format on
