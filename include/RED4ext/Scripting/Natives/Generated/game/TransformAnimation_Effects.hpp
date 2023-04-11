#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationTrackItemImpl.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_Effects : game::TransformAnimationTrackItemImpl
{
    static constexpr const char* NAME = "gameTransformAnimation_Effects";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimation_Effects, 0x30);
} // namespace game
using gameTransformAnimation_Effects = game::TransformAnimation_Effects;
} // namespace RED4ext

// clang-format on
