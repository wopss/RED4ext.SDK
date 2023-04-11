#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AnimationEventsOverrideClearNode : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAnimationEventsOverrideClearNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
    bool resetGlobalOverride; // 60
    bool resetActorsOverride; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(AnimationEventsOverrideClearNode, 0x68);
} // namespace quest
using questAnimationEventsOverrideClearNode = quest::AnimationEventsOverrideClearNode;
} // namespace RED4ext

// clang-format on
