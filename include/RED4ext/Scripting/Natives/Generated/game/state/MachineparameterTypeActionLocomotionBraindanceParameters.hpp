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
struct MachineparameterTypeActionLocomotionBraindanceParameters : game::state::MachineparameterTypeActionLocomotionParameters
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeActionLocomotionBraindanceParameters";
    static constexpr const char* ALIAS = "LocomotionBraindanceParameters";

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeActionLocomotionBraindanceParameters, 0xA0);
} // namespace game::state
using gamestateMachineparameterTypeActionLocomotionBraindanceParameters = game::state::MachineparameterTypeActionLocomotionBraindanceParameters;
using LocomotionBraindanceParameters = game::state::MachineparameterTypeActionLocomotionBraindanceParameters;
} // namespace RED4ext

// clang-format on
