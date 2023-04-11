#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNode_PostProcess; }
namespace anim { struct Rig; }

namespace anim
{
struct AnimNode_Retarget : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_Retarget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x78 - 0x60]; // 60
    Ref<anim::Rig> refRig; // 78
    Handle<anim::IAnimNode_PostProcess> postProcess; // 90
};
RED4EXT_ASSERT_SIZE(AnimNode_Retarget, 0xA0);
} // namespace anim
using animAnimNode_Retarget = anim::AnimNode_Retarget;
} // namespace RED4ext

// clang-format on
