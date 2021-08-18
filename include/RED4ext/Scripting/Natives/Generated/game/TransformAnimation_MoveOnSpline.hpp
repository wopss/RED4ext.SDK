#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationTrackItemImpl.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_MoveOnSplineRotationMode.hpp>

namespace RED4ext
{
namespace game { struct TransformAnimation_Movement; }

namespace game { 
struct TransformAnimation_MoveOnSpline : game::TransformAnimationTrackItemImpl
{
    static constexpr const char* NAME = "gameTransformAnimation_MoveOnSpline";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineNode; // 30
    float from; // 38
    float to; // 3C
    game::TransformAnimation_MoveOnSplineRotationMode rotationMode; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    Handle<game::TransformAnimation_Movement> movement; // 48
    uint8_t unk58[0xA0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TransformAnimation_MoveOnSpline, 0xA0);
} // namespace game
} // namespace RED4ext
