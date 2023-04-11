#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_MotionTableSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct IMotionTableProvider; }
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_Switch : anim::AnimNode_MotionTableSwitch
{
    static constexpr const char* NAME = "animAnimNode_Switch";
    static constexpr const char* ALIAS = NAME;

    uint32_t numInputs; // 48
    float blendTime; // 4C
    Handle<anim::ISyncMethod> syncMethod; // 50
    Handle<anim::IMotionTableProvider> motionProvider; // 60
    CName pushDataByTag; // 70
    bool timeWarpingEnabled; // 78
    bool canRequestInertialization; // 79
    uint8_t unk7A[0xA0 - 0x7A]; // 7A
    anim::FloatLink weightNode; // A0
    DynArray<anim::PoseLink> inputNodes; // C0
};
RED4EXT_ASSERT_SIZE(AnimNode_Switch, 0xD0);
} // namespace anim
using animAnimNode_Switch = anim::AnimNode_Switch;
} // namespace RED4ext

// clang-format on
