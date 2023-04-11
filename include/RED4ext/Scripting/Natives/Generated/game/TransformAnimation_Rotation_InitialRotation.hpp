#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Rotation.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_Rotation_InitialRotation : game::TransformAnimation_Rotation
{
    static constexpr const char* NAME = "gameTransformAnimation_Rotation_InitialRotation";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimation_Rotation_InitialRotation, 0x30);
} // namespace game
using gameTransformAnimation_Rotation_InitialRotation = game::TransformAnimation_Rotation_InitialRotation;
} // namespace RED4ext

// clang-format on
