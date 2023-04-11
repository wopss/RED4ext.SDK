#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_IntValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_NameHashConstant : anim::AnimNode_IntValue
{
    static constexpr const char* NAME = "animAnimNode_NameHashConstant";
    static constexpr const char* ALIAS = NAME;

    CName value; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_NameHashConstant, 0x50);
} // namespace anim
using animAnimNode_NameHashConstant = anim::AnimNode_NameHashConstant;
} // namespace RED4ext

// clang-format on
