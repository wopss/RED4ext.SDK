#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationTrackItemImpl.hpp>

namespace RED4ext
{
namespace game { struct TransformAnimation_Movement; }
namespace game { struct TransformAnimation_Position; }

namespace game
{
struct TransformAnimation_Move : game::TransformAnimationTrackItemImpl
{
    static constexpr const char* NAME = "gameTransformAnimation_Move";
    static constexpr const char* ALIAS = NAME;

    Handle<game::TransformAnimation_Position> startPositionEvaluator; // 30
    Handle<game::TransformAnimation_Position> targetPositionEvaluator; // 40
    Handle<game::TransformAnimation_Movement> movement; // 50
    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Move, 0x78);
} // namespace game
using gameTransformAnimation_Move = game::TransformAnimation_Move;
} // namespace RED4ext

// clang-format on
