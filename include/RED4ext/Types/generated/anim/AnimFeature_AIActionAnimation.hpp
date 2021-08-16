#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/anim/AnimFeature_AIAction.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimFeature_AIActionAnimation : anim::AnimFeature_AIAction
{
    static constexpr const char* NAME = "animAnimFeature_AIActionAnimation";
    static constexpr const char* ALIAS = NAME;

    CName animFeatureName; // 50
};
RED4EXT_ASSERT_SIZE(AnimFeature_AIActionAnimation, 0x58);
} // namespace anim
} // namespace RED4ext
