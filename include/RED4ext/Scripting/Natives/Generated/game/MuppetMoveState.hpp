#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetMoveStyle.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetMoveState
{
    static constexpr const char* NAME = "gameMuppetMoveState";
    static constexpr const char* ALIAS = NAME;

    float desiredSpeed; // 00
    bool isJumping; // 04
    bool isFalling; // 05
    bool isDoubleJumped; // 06
    uint8_t unk07[0x8 - 0x7]; // 7
    game::MuppetMoveStyle moveStyle; // 08
    uint32_t jumpStartFrameId; // 0C
    uint32_t landFrameId; // 10
};
RED4EXT_ASSERT_SIZE(MuppetMoveState, 0x14);
} // namespace game
using gameMuppetMoveState = game::MuppetMoveState;
} // namespace RED4ext

// clang-format on
