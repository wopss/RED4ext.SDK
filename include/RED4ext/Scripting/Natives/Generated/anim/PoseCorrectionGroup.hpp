#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseCorrection.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) PoseCorrectionGroup
{
    static constexpr const char* NAME = "animPoseCorrectionGroup";
    static constexpr const char* ALIAS = NAME;

#pragma warning(suppress : 4324)
    alignas(16) StaticArray<anim::PoseCorrection, 2> poseCorrections; // 00
};
RED4EXT_ASSERT_SIZE(PoseCorrectionGroup, 0x270);
} // namespace anim
using animPoseCorrectionGroup = anim::PoseCorrectionGroup;
} // namespace RED4ext

// clang-format on
