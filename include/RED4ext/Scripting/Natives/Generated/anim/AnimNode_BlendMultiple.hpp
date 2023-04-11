#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct IMotionTableProvider; }
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_BlendMultiple : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_BlendMultiple";
    static constexpr const char* ALIAS = NAME;

    DynArray<float> inputValues; // 48
    DynArray<float> sortedInputValues; // 58
    float minWeight; // 68
    float maxWeight; // 6C
    bool radialBlending; // 70
    bool timeWarpingEnabled; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
    Handle<anim::ISyncMethod> syncMethod; // 78
    Handle<anim::IMotionTableProvider> motionProvider; // 88
    uint8_t unk98[0xE8 - 0x98]; // 98
    anim::FloatLink weightNode; // E8
    DynArray<anim::PoseLink> inputNodes; // 108
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendMultiple, 0x118);
} // namespace anim
using animAnimNode_BlendMultiple = anim::AnimNode_BlendMultiple;
} // namespace RED4ext

// clang-format on
