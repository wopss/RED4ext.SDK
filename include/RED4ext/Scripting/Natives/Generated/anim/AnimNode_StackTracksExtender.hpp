#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatTrackInfo.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_StackTracksExtender : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_StackTracksExtender";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 60
    DynArray<anim::FloatTrackInfo> newTracks; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_StackTracksExtender, 0x78);
} // namespace anim
using animAnimNode_StackTracksExtender = anim::AnimNode_StackTracksExtender;
} // namespace RED4ext

// clang-format on
