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
struct AnimNodeSourceChannel_SocketQuat : anim::IAnimNodeSourceChannel_Quat
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_SocketQuat";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_SocketQuat, 0x30);
} // namespace anim
using animAnimNodeSourceChannel_SocketQuat = anim::AnimNodeSourceChannel_SocketQuat;
} // namespace RED4ext

// clang-format on
