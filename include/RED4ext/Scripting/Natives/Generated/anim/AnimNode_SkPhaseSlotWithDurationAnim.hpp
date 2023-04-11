#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkPhaseWithDurationAnim.hpp>

namespace RED4ext
{
namespace anim { struct ActionAnimDatabase; }

namespace anim
{
struct AnimNode_SkPhaseSlotWithDurationAnim : anim::AnimNode_SkPhaseWithDurationAnim
{
    static constexpr const char* NAME = "animAnimNode_SkPhaseSlotWithDurationAnim";
    static constexpr const char* ALIAS = NAME;

    CName animFeatureName; // F8
    Ref<anim::ActionAnimDatabase> actionAnimDatabaseRef; // 100
    uint8_t unk118[0x178 - 0x118]; // 118
};
RED4EXT_ASSERT_SIZE(AnimNode_SkPhaseSlotWithDurationAnim, 0x178);
} // namespace anim
using animAnimNode_SkPhaseSlotWithDurationAnim = anim::AnimNode_SkPhaseSlotWithDurationAnim;
} // namespace RED4ext

// clang-format on
