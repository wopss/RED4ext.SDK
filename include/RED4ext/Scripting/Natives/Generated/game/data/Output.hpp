#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class Output : int32_t
{
    AskToFollowOrder = 0,
    AskToHolster = 1,
    BackOff = 2,
    BodyInvestigate = 3,
    Bump = 4,
    CallGuard = 5,
    CallPolice = 6,
    DeviceInvestigate = 7,
    Dodge = 8,
    DodgeToSide = 9,
    FearInPlace = 10,
    Flee = 11,
    Ignore = 12,
    Intruder = 13,
    Investigate = 14,
    LookAt = 15,
    Panic = 16,
    PlayerCall = 17,
    ProjectileInvestigate = 18,
    Reprimand = 19,
    SquadCall = 20,
    Surrender = 21,
    TurnAt = 22,
    WalkAway = 23,
    Count = 24,
    Invalid = 25,
};
} // namespace game::data
using gamedataOutput = game::data::Output;
} // namespace RED4ext

// clang-format on
