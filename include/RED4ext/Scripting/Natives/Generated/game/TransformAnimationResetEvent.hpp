#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationPlayEvent.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimationResetEvent : game::TransformAnimationPlayEvent
{
    static constexpr const char* NAME = "gameTransformAnimationResetEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformAnimationResetEvent, 0x58);
} // namespace game
using gameTransformAnimationResetEvent = game::TransformAnimationResetEvent;
} // namespace RED4ext

// clang-format on
