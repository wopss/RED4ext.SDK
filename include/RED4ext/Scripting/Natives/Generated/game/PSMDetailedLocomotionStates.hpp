#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMDetailedLocomotionStates : int32_t
{
    NotInBaseLocomotion = 0,
    Stand = 1,
    AimWalk = 2,
    Crouch = 3,
    Sprint = 4,
    Slide = 5,
    SlideFall = 6,
    Dodge = 7,
    Climb = 8,
    Vault = 9,
    Ladder = 10,
    LadderSprint = 11,
    LadderSlide = 12,
    LadderJump = 13,
    Fall = 14,
    AirThrusters = 15,
    AirHover = 16,
    SuperheroFall = 17,
    Jump = 18,
    DoubleJump = 19,
    ChargeJump = 20,
    HoverJump = 21,
    DodgeAir = 22,
    RegularLand = 23,
    HardLand = 24,
    VeryHardLand = 25,
    DeathLand = 26,
    SuperheroLand = 27,
    SuperheroLandRecovery = 28,
    Knockdown = 29,
    CrouchSprint = 30,
    Felled = 31,
};
} // namespace game
using gamePSMDetailedLocomotionStates = game::PSMDetailedLocomotionStates;
} // namespace RED4ext

// clang-format on
