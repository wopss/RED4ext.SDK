#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Vector.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNodeSourceChannel_StaticVector : anim::IAnimNodeSourceChannel_Vector
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_StaticVector";
    static constexpr const char* ALIAS = NAME;

    Vector4 data; // 30
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_StaticVector, 0x40);
} // namespace anim
using animAnimNodeSourceChannel_StaticVector = anim::AnimNodeSourceChannel_StaticVector;
} // namespace RED4ext

// clang-format on
