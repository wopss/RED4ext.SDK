#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMLocomotionStates : int32_t
{
    Any = -1,
    Default = 0,
    Crouch = 1,
    Sprint = 2,
    Kereznikov = 3,
    Jump = 5,
    Vault = 6,
    Dodge = 7,
    DodgeAir = 8,
    Workspot = 9,
    Slide = 10,
    SlideFall = 11,
    CrouchSprint = 12,
    CrouchDodge = 13,
};
} // namespace game
using gamePSMLocomotionStates = game::PSMLocomotionStates;
} // namespace RED4ext

// clang-format on
