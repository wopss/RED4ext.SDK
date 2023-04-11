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
struct TransformAnimationPlayEvent : game::TransformAnimationEvent
{
    static constexpr const char* NAME = "gameTransformAnimationPlayEvent";
    static constexpr const char* ALIAS = NAME;

    float timeScale; // 48
    bool looping; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    uint32_t timesPlayed; // 50
    bool useEntitySetup; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
};
RED4EXT_ASSERT_SIZE(TransformAnimationPlayEvent, 0x58);
} // namespace game
using gameTransformAnimationPlayEvent = game::TransformAnimationPlayEvent;
} // namespace RED4ext

// clang-format on
