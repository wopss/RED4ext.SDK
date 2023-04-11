#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Quat.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNodeSourceChannel_AnimFeatureQuat : anim::IAnimNodeSourceChannel_Quat
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_AnimFeatureQuat";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_AnimFeatureQuat, 0x30);
} // namespace anim
using animAnimNodeSourceChannel_AnimFeatureQuat = anim::AnimNodeSourceChannel_AnimFeatureQuat;
} // namespace RED4ext

// clang-format on
