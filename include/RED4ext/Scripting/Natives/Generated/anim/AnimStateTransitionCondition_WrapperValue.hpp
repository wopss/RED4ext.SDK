#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimStateTransitionCondition_WrapperValue : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_WrapperValue";
    static constexpr const char* ALIAS = NAME;

    CName wrapperName; // 30
    bool checkIfWrapperIsSet; // 38
    uint8_t unk39[0x60 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_WrapperValue, 0x60);
} // namespace anim
} // namespace RED4ext
