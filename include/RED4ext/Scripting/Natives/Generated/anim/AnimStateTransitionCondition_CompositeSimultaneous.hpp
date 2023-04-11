#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim { struct IAnimStateTransitionCondition; }

namespace anim
{
struct AnimStateTransitionCondition_CompositeSimultaneous : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_CompositeSimultaneous";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::IAnimStateTransitionCondition>> conditions; // 30
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_CompositeSimultaneous, 0x40);
} // namespace anim
using animAnimStateTransitionCondition_CompositeSimultaneous = anim::AnimStateTransitionCondition_CompositeSimultaneous;
} // namespace RED4ext

// clang-format on
