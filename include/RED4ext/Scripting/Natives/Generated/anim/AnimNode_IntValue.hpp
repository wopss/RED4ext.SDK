#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_IntValue : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_IntValue";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNode_IntValue, 0x48);
} // namespace anim
using animAnimNode_IntValue = anim::AnimNode_IntValue;
} // namespace RED4ext

// clang-format on
