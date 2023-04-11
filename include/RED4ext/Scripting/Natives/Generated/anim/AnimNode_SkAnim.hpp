#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>

namespace RED4ext
{
namespace anim { struct IMotionTableProvider; }

namespace anim
{
struct AnimNode_SkAnim : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_SkAnim";
    static constexpr const char* ALIAS = NAME;

    CName animLoopEventName; // 48
    bool applyMotion; // 50
    bool isLooped; // 51
    bool collectEvents; // 52
    bool fireAnimLoopEvent; // 53
    float clipFront; // 54
    float clipEnd; // 58
    bool convertToAdditive; // 5C
    bool resume; // 5D
    bool applyInertializationOnAnimSetSwap; // 5E
    uint8_t unk5F[0x60 - 0x5F]; // 5F
    CName clipFrontByEvent; // 60
    CName clipEndByEvent; // 68
    Handle<anim::IMotionTableProvider> motionProvider; // 70
    CName pushDataByTag; // 80
    CName popDataByTag; // 88
    CName pushSafeCutTag; // 90
    uint8_t unk98[0xC8 - 0x98]; // 98
    CName animation; // C8
};
RED4EXT_ASSERT_SIZE(AnimNode_SkAnim, 0xD0);
} // namespace anim
using animAnimNode_SkAnim = anim::AnimNode_SkAnim;
} // namespace RED4ext

// clang-format on
