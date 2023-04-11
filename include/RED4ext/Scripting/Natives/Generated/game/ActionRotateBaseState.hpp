#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct ActionRotateBaseState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionRotateBaseState";
    static constexpr const char* ALIAS = NAME;

    float angleOffset; // 28
    float angleTolerance; // 2C
    bool keepUpdatingTarget; // 30
    bool useRotationTime; // 31
    uint8_t unk32[0x34 - 0x32]; // 32
    float rotationSpeed; // 34
    float rotationTime; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(ActionRotateBaseState, 0x40);
} // namespace game
using gameActionRotateBaseState = game::ActionRotateBaseState;
} // namespace RED4ext

// clang-format on
