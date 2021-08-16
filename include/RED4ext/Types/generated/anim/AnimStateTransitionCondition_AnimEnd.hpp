#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimStateTransitionCondition_AnimEnd : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_AnimEnd";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 30
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_AnimEnd, 0x38);
} // namespace anim
} // namespace RED4ext
