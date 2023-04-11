#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IMotionTableProvider.hpp>

namespace RED4ext
{
namespace anim
{
struct MotionTableProvider_MasterSlaveBlend : anim::IMotionTableProvider
{
    static constexpr const char* NAME = "animMotionTableProvider_MasterSlaveBlend";
    static constexpr const char* ALIAS = NAME;

    uint8_t masterInputIdx; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(MotionTableProvider_MasterSlaveBlend, 0x58);
} // namespace anim
using animMotionTableProvider_MasterSlaveBlend = anim::MotionTableProvider_MasterSlaveBlend;
} // namespace RED4ext

// clang-format on
