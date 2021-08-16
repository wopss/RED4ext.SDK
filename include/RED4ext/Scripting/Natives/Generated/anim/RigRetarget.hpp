#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }

namespace anim { 
struct RigRetarget
{
    static constexpr const char* NAME = "animRigRetarget";
    static constexpr const char* ALIAS = NAME;

    Ref<anim::Rig> sourceRig; // 00
    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(RigRetarget, 0x28);
} // namespace anim
} // namespace RED4ext
