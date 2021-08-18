#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Quat.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNodeSourceChannel_StaticQuat : anim::IAnimNodeSourceChannel_Quat
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_StaticQuat";
    static constexpr const char* ALIAS = NAME;

    Quaternion data; // 30
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_StaticQuat, 0x40);
} // namespace anim
} // namespace RED4ext
