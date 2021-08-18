#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_CurveFloatValue : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_CurveFloatValue";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> curveData; // 48
    anim::FloatLink argument; // 80
};
RED4EXT_ASSERT_SIZE(AnimNode_CurveFloatValue, 0xA0);
} // namespace anim
} // namespace RED4ext
