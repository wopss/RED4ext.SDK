#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IMarker.hpp>

namespace RED4ext
{
namespace game
{
struct Waypoint : world::IMarker
{
    static constexpr const char* NAME = "gameWaypoint";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Waypoint, 0x30);
} // namespace game
using gameWaypoint = game::Waypoint;
} // namespace RED4ext

// clang-format on
