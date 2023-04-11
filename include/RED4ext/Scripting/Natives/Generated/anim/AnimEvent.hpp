#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent : ISerializable
{
    static constexpr const char* NAME = "animAnimEvent";
    static constexpr const char* ALIAS = NAME;

    uint32_t startFrame; // 30
    uint32_t durationInFrames; // 34
    CName eventName; // 38
};
RED4EXT_ASSERT_SIZE(AnimEvent, 0x40);
} // namespace anim
using animAnimEvent = anim::AnimEvent;
} // namespace RED4ext

// clang-format on
