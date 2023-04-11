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
struct TransformAnimation_Position_InitialPosition : game::TransformAnimation_Position
{
    static constexpr const char* NAME = "gameTransformAnimation_Position_InitialPosition";
    static constexpr const char* ALIAS = NAME;

    Vector3 offset; // 30
    bool offsetInWorldSpace; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Position_InitialPosition, 0x40);
} // namespace game
using gameTransformAnimation_Position_InitialPosition = game::TransformAnimation_Position_InitialPosition;
} // namespace RED4ext

// clang-format on
