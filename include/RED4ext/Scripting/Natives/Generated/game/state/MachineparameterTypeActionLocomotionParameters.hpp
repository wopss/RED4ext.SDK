#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineparameterTypeActionLocomotionParameters : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeActionLocomotionParameters";
    static constexpr const char* ALIAS = "LocomotionParameters";

    uint8_t unk40[0x5D - 0x40]; // 40
    bool imperfectTurn; // 5D
    bool validImperfectTurn; // 5E
    bool speedBoostInputRequired; // 5F
    bool validSpeedBoostInputRequired; // 60
    bool speedBoostMultiplyByDot; // 61
    bool validSpeedBoostMultiplyByDot; // 62
    bool useCameraHeadingForMovement; // 63
    bool validUseCameraHeadingForMovement; // 64
    bool doJump; // 65
    bool doSpeedBoost; // 66
    uint8_t unk67[0x90 - 0x67]; // 67
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeActionLocomotionParameters, 0x90);
} // namespace game::state
using gamestateMachineparameterTypeActionLocomotionParameters = game::state::MachineparameterTypeActionLocomotionParameters;
using LocomotionParameters = game::state::MachineparameterTypeActionLocomotionParameters;
} // namespace RED4ext

// clang-format on
