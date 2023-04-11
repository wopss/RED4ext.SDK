#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationTrackItemImpl.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_RotateOnAxisAxis.hpp>

namespace RED4ext
{
namespace game { struct TransformAnimation_Movement; }

namespace game
{
struct TransformAnimation_RotateOnAxis : game::TransformAnimationTrackItemImpl
{
    static constexpr const char* NAME = "gameTransformAnimation_RotateOnAxis";
    static constexpr const char* ALIAS = NAME;

    game::TransformAnimation_RotateOnAxisAxis axis; // 30
    float startAngle; // 34
    float numberOfFullRotations; // 38
    bool reverseDirection; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
    Handle<game::TransformAnimation_Movement> movement; // 40
    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(TransformAnimation_RotateOnAxis, 0x58);
} // namespace game
using gameTransformAnimation_RotateOnAxis = game::TransformAnimation_RotateOnAxis;
} // namespace RED4ext

// clang-format on
