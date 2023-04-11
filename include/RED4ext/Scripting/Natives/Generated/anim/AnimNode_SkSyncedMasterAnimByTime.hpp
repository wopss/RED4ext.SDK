#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkFrameAnim.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkSyncedMasterAnimByTime : anim::AnimNode_SkFrameAnim
{
    static constexpr const char* NAME = "animAnimNode_SkSyncedMasterAnimByTime";
    static constexpr const char* ALIAS = NAME;

    CName syncTag; // 138
    uint8_t unk140[0x160 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(AnimNode_SkSyncedMasterAnimByTime, 0x160);
} // namespace anim
using animAnimNode_SkSyncedMasterAnimByTime = anim::AnimNode_SkSyncedMasterAnimByTime;
} // namespace RED4ext

// clang-format on
