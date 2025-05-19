#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class SenseObjectType : int32_t
{
    Camera = 0,
    Deadbody = 1,
    Follower = 2,
    Npc = 3,
    Player = 4,
    Turret = 5,
    Undefined = 6,
    Count = 7,
    Invalid = 8,
};
} // namespace game::data
using gamedataSenseObjectType = game::data::SenseObjectType;
} // namespace RED4ext

// clang-format on
