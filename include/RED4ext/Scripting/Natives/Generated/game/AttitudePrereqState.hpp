#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game
{
struct AttitudePrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameAttitudePrereqState";
    static constexpr const char* ALIAS = "AttitudePrereqState";

    uint8_t unk100[0x108 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(AttitudePrereqState, 0x108);
} // namespace game
using gameAttitudePrereqState = game::AttitudePrereqState;
using AttitudePrereqState = game::AttitudePrereqState;
} // namespace RED4ext

// clang-format on
