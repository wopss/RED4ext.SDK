#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace AI
{
struct Position
{
    static constexpr const char* NAME = "AIPosition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    Vector3 position; // 08
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(Position, 0x18);
} // namespace AI
using AIPosition = AI::Position;
} // namespace RED4ext

// clang-format on
