#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationTrackItemImpl.hpp>

namespace RED4ext
{
namespace game { struct TransformAnimation_Movement; }
namespace game { struct TransformAnimation_Rotation; }

namespace game { 
struct TransformAnimation_RotateFromTo : game::TransformAnimationTrackItemImpl
{
    static constexpr const char* NAME = "gameTransformAnimation_RotateFromTo";
    static constexpr const char* ALIAS = NAME;

    Handle<game::TransformAnimation_Rotation> startRotationEvaluator; // 30
    Handle<game::TransformAnimation_Rotation> targetRotationEvaluator; // 40
    Handle<game::TransformAnimation_Movement> movement; // 50
    uint8_t unk60[0x80 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(TransformAnimation_RotateFromTo, 0x80);
} // namespace game
} // namespace RED4ext
