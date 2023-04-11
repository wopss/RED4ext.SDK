#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendTracksMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/OverrideBlendBoneInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/OverrideBlendTrackInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNode_PostProcess; }
namespace anim { struct IPoseBlendMethod; }
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_BlendOverride : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_BlendOverride";
    static constexpr const char* ALIAS = NAME;

    bool getDeltaMotionFromOverride; // 48
    bool timeWarpingEnabled; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    Handle<anim::ISyncMethod> syncMethod; // 50
    Handle<anim::IPoseBlendMethod> blendMethod; // 60
    DynArray<anim::OverrideBlendBoneInfo> bones; // 70
    DynArray<anim::OverrideBlendTrackInfo> tracks; // 80
    anim::EBlendTracksMode blendTrackMode; // 90
    bool blendAllTracks; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    Handle<anim::IAnimNode_PostProcess> postProcess; // 98
    uint8_t unkA8[0xD8 - 0xA8]; // A8
    anim::PoseLink inputNode; // D8
    anim::PoseLink overrideInputNode; // F0
    anim::FloatLink weightNode; // 108
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendOverride, 0x128);
} // namespace anim
using animAnimNode_BlendOverride = anim::AnimNode_BlendOverride;
} // namespace RED4ext

// clang-format on
