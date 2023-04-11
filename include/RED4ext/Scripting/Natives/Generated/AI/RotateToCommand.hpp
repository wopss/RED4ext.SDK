#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MoveCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/PositionSpec.hpp>

namespace RED4ext
{
namespace AI
{
struct RotateToCommand : AI::MoveCommand
{
    static constexpr const char* NAME = "AIRotateToCommand";
    static constexpr const char* ALIAS = NAME;

    AI::PositionSpec target; // 68
    float angleTolerance; // 90
    float angleOffset; // 94
    float speed; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
};
RED4EXT_ASSERT_SIZE(RotateToCommand, 0xA0);
} // namespace AI
using AIRotateToCommand = AI::RotateToCommand;
} // namespace RED4ext

// clang-format on
