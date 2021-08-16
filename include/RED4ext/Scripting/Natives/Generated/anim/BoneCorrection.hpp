#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>

namespace RED4ext
{
namespace anim { 
struct BoneCorrection
{
    static constexpr const char* NAME = "animBoneCorrection";
    static constexpr const char* ALIAS = NAME;

    CName boneName; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
    Quaternion additiveCorrection; // 10
};
RED4EXT_ASSERT_SIZE(BoneCorrection, 0x20);
} // namespace anim
} // namespace RED4ext
