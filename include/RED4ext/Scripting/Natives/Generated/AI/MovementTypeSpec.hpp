#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace AI
{
struct MovementTypeSpec
{
    static constexpr const char* NAME = "AIMovementTypeSpec";
    static constexpr const char* ALIAS = NAME;

    bool useNPCMovementParams; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    move::MovementType movementType; // 04
};
RED4EXT_ASSERT_SIZE(MovementTypeSpec, 0x8);
} // namespace AI
using AIMovementTypeSpec = AI::MovementTypeSpec;
} // namespace RED4ext

// clang-format on
