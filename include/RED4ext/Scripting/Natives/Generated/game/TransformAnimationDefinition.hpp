#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationTimeline.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimationDefinition
{
    static constexpr const char* NAME = "gameTransformAnimationDefinition";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    bool autoStart; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    float autoStartDelay; // 0C
    uint32_t timesToPlay; // 10
    bool looping; // 14
    uint8_t unk15[0x18 - 0x15]; // 15
    float timeScale; // 18
    bool reverse; // 1C
    uint8_t unk1D[0x20 - 0x1D]; // 1D
    game::TransformAnimationTimeline timeline; // 20
};
RED4EXT_ASSERT_SIZE(TransformAnimationDefinition, 0x30);
} // namespace game
using gameTransformAnimationDefinition = game::TransformAnimationDefinition;
} // namespace RED4ext

// clang-format on
