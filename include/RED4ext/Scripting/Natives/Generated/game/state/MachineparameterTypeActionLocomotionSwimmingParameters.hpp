#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineparameterTypeActionLocomotionParameters.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineparameterTypeActionLocomotionSwimmingParameters : game::state::MachineparameterTypeActionLocomotionParameters
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeActionLocomotionSwimmingParameters";
    static constexpr const char* ALIAS = "LocomotionSwimmingParameters";

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeActionLocomotionSwimmingParameters, 0xA0);
} // namespace game::state
using gamestateMachineparameterTypeActionLocomotionSwimmingParameters = game::state::MachineparameterTypeActionLocomotionSwimmingParameters;
using LocomotionSwimmingParameters = game::state::MachineparameterTypeActionLocomotionSwimmingParameters;
} // namespace RED4ext

// clang-format on
