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
struct AnimNodeSourceChannel_AnimFeatureVector : anim::IAnimNodeSourceChannel_Vector
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_AnimFeatureVector";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_AnimFeatureVector, 0x30);
} // namespace anim
using animAnimNodeSourceChannel_AnimFeatureVector = anim::AnimNodeSourceChannel_AnimFeatureVector;
} // namespace RED4ext

// clang-format on
