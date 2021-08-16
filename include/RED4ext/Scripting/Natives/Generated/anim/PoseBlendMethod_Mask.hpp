#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IPoseBlendMethod.hpp>

namespace RED4ext
{
namespace anim { 
struct PoseBlendMethod_Mask : anim::IPoseBlendMethod
{
    static constexpr const char* NAME = "animPoseBlendMethod_Mask";
    static constexpr const char* ALIAS = NAME;

    CName maskName; // 30
    uint8_t unk38[0x48 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(PoseBlendMethod_Mask, 0x48);
} // namespace anim
} // namespace RED4ext
