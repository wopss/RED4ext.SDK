#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseCorrection.hpp>

namespace RED4ext
{
namespace anim { 
struct PoseCorrectionGroup
{
    static constexpr const char* NAME = "animPoseCorrectionGroup";
    static constexpr const char* ALIAS = NAME;

    alignas(16) StaticArray<anim::PoseCorrection, 2> poseCorrections; // 00
};
RED4EXT_ASSERT_SIZE(PoseCorrectionGroup, 0x270);
} // namespace anim
} // namespace RED4ext
