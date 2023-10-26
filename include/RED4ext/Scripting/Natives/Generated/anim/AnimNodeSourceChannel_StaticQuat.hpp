#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Quat.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNodeSourceChannel_StaticQuat : anim::IAnimNodeSourceChannel_Quat
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_StaticQuat";
    static constexpr const char* ALIAS = NAME;

    Quaternion data; // 30
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_StaticQuat, 0x40);
} // namespace anim
using animAnimNodeSourceChannel_StaticQuat = anim::AnimNodeSourceChannel_StaticQuat;
} // namespace RED4ext

// clang-format on
