#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/anim/IAnimNodeSourceChannel_Vector.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNodeSourceChannel_StaticVector : anim::IAnimNodeSourceChannel_Vector
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_StaticVector";
    static constexpr const char* ALIAS = NAME;

    Vector4 data; // 30
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_StaticVector, 0x40);
} // namespace anim
} // namespace RED4ext
