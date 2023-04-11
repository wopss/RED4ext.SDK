#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Vector.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNodeSourceChannel_SocketVector : anim::IAnimNodeSourceChannel_Vector
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_SocketVector";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_SocketVector, 0x30);
} // namespace anim
using animAnimNodeSourceChannel_SocketVector = anim::AnimNodeSourceChannel_SocketVector;
} // namespace RED4ext

// clang-format on
