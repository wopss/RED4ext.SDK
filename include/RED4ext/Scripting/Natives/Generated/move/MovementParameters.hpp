#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace move
{
struct MovementParameters
{
    static constexpr const char* NAME = "moveMovementParameters";
    static constexpr const char* ALIAS = "MovementParameters";

    move::MovementType type; // 00
    float maxSpeed; // 04
    float acceleration; // 08
    float deceleration; // 0C
    float rotationSpeed; // 10
    uint8_t unk14[0x1C - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(MovementParameters, 0x1C);
} // namespace move
using moveMovementParameters = move::MovementParameters;
using MovementParameters = move::MovementParameters;
} // namespace RED4ext

// clang-format on
