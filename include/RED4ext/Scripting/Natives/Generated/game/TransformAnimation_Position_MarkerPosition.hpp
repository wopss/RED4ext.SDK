#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Position.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_Position_MarkerPosition : game::TransformAnimation_Position
{
    static constexpr const char* NAME = "gameTransformAnimation_Position_MarkerPosition";
    static constexpr const char* ALIAS = NAME;

    NodeRef markerNode; // 30
    Vector3 offset; // 38
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Position_MarkerPosition, 0x48);
} // namespace game
using gameTransformAnimation_Position_MarkerPosition = game::TransformAnimation_Position_MarkerPosition;
} // namespace RED4ext

// clang-format on
