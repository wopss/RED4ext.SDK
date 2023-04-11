#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SetDrivenKey_InternalsEChannelType.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetDrivenKey_InternalsEntry
{
    static constexpr const char* NAME = "animAnimNode_SetDrivenKey_InternalsEntry";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> curve; // 00
    CName inChannelName; // 38
    CName outChannelName; // 40
    anim::AnimNode_SetDrivenKey_InternalsEChannelType inChanelType; // 48
    anim::AnimNode_SetDrivenKey_InternalsEChannelType outChanelType; // 4C
};
RED4EXT_ASSERT_SIZE(AnimNode_SetDrivenKey_InternalsEntry, 0x50);
} // namespace anim
using animAnimNode_SetDrivenKey_InternalsEntry = anim::AnimNode_SetDrivenKey_InternalsEntry;
} // namespace RED4ext

// clang-format on
