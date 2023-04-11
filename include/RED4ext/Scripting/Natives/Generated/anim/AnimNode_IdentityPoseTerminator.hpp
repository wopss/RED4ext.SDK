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
struct AnimNode_IdentityPoseTerminator : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_IdentityPoseTerminator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNode_IdentityPoseTerminator, 0x48);
} // namespace anim
using animAnimNode_IdentityPoseTerminator = anim::AnimNode_IdentityPoseTerminator;
} // namespace RED4ext

// clang-format on
