#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Rotation.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) TransformAnimation_Rotation_CurrentRotation : game::TransformAnimation_Rotation
{
    static constexpr const char* NAME = "gameTransformAnimation_Rotation_CurrentRotation";
    static constexpr const char* ALIAS = NAME;

    Quaternion offset; // 30
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Rotation_CurrentRotation, 0x40);
} // namespace game
using gameTransformAnimation_Rotation_CurrentRotation = game::TransformAnimation_Rotation_CurrentRotation;
} // namespace RED4ext

// clang-format on
