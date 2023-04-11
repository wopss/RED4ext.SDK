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
struct AnimGraphExternalEvent : ISerializable
{
    static constexpr const char* NAME = "animAnimGraphExternalEvent";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 30
};
RED4EXT_ASSERT_SIZE(AnimGraphExternalEvent, 0x38);
} // namespace anim
using animAnimGraphExternalEvent = anim::AnimGraphExternalEvent;
} // namespace RED4ext

// clang-format on
