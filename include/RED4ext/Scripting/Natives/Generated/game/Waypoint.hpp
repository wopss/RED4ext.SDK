#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IMarker.hpp>

namespace RED4ext
{
namespace game { 
struct Waypoint : world::IMarker
{
    static constexpr const char* NAME = "gameWaypoint";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Waypoint, 0x30);
} // namespace game
} // namespace RED4ext
