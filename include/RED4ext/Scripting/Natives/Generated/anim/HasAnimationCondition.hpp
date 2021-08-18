#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IStaticCondition.hpp>

namespace RED4ext
{
namespace anim { 
struct HasAnimationCondition : anim::IStaticCondition
{
    static constexpr const char* NAME = "animHasAnimationCondition";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 30
};
RED4EXT_ASSERT_SIZE(HasAnimationCondition, 0x38);
} // namespace anim
} // namespace RED4ext
