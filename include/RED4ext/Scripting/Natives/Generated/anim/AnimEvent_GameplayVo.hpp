#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent_GameplayVo : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_GameplayVo";
    static constexpr const char* ALIAS = NAME;

    CName voContext; // 40
    bool isQuest; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(AnimEvent_GameplayVo, 0x50);
} // namespace anim
using animAnimEvent_GameplayVo = anim::AnimEvent_GameplayVo;
} // namespace RED4ext

// clang-format on
