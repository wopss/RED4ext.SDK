#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationEvent.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimationPauseEvent : game::TransformAnimationEvent
{
    static constexpr const char* NAME = "gameTransformAnimationPauseEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimationPauseEvent, 0x48);
} // namespace game
using gameTransformAnimationPauseEvent = game::TransformAnimationPauseEvent;
} // namespace RED4ext

// clang-format on
