#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimGraph; }
namespace anim { struct IStaticCondition; }

namespace anim
{
struct GraphSlotCondition
{
    static constexpr const char* NAME = "animGraphSlotCondition";
    static constexpr const char* ALIAS = NAME;

    Ref<anim::AnimGraph> graph; // 00
    Handle<anim::IStaticCondition> condition; // 18
};
RED4EXT_ASSERT_SIZE(GraphSlotCondition, 0x28);
} // namespace anim
using animGraphSlotCondition = anim::GraphSlotCondition;
} // namespace RED4ext

// clang-format on
