#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_VectorValue.hpp>
#include <RED4ext/Types/generated/anim/FloatLink.hpp>
#include <RED4ext/Types/generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_VectorInterpolation : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_VectorInterpolation";
    static constexpr const char* ALIAS = NAME;

    anim::VectorLink firstInput; // 48
    anim::VectorLink secondInput; // 68
    anim::FloatLink weight; // 88
};
RED4EXT_ASSERT_SIZE(AnimNode_VectorInterpolation, 0xA8);
} // namespace anim
} // namespace RED4ext
