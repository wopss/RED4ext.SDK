#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Position.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_Position_LocalPosition : game::TransformAnimation_Position
{
    static constexpr const char* NAME = "gameTransformAnimation_Position_LocalPosition";
    static constexpr const char* ALIAS = NAME;

    Vector3 position; // 30
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Position_LocalPosition, 0x40);
} // namespace game
using gameTransformAnimation_Position_LocalPosition = game::TransformAnimation_Position_LocalPosition;
} // namespace RED4ext

// clang-format on
