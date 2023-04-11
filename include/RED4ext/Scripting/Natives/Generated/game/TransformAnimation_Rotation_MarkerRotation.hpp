#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Rotation.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_Rotation_MarkerRotation : game::TransformAnimation_Rotation
{
    static constexpr const char* NAME = "gameTransformAnimation_Rotation_MarkerRotation";
    static constexpr const char* ALIAS = NAME;

    NodeRef markerNode; // 30
    Vector3 offset; // 38
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Rotation_MarkerRotation, 0x48);
} // namespace game
using gameTransformAnimation_Rotation_MarkerRotation = game::TransformAnimation_Rotation_MarkerRotation;
} // namespace RED4ext

// clang-format on
