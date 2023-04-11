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
struct TransformAnimationSkipEvent : game::TransformAnimationEvent
{
    static constexpr const char* NAME = "gameTransformAnimationSkipEvent";
    static constexpr const char* ALIAS = NAME;

    float time; // 48
    bool skipToEnd; // 4C
    bool forcePlay; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
};
RED4EXT_ASSERT_SIZE(TransformAnimationSkipEvent, 0x50);
} // namespace game
using gameTransformAnimationSkipEvent = game::TransformAnimationSkipEvent;
} // namespace RED4ext

// clang-format on
