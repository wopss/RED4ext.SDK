#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNode_PostProcess.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_PostProcess_Footlock : anim::IAnimNode_PostProcess
{
    static constexpr const char* NAME = "animAnimNode_PostProcess_Footlock";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x78 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(AnimNode_PostProcess_Footlock, 0x78);
} // namespace anim
using animAnimNode_PostProcess_Footlock = anim::AnimNode_PostProcess_Footlock;
} // namespace RED4ext

// clang-format on
