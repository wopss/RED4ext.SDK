#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseCorrectionGroup.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) PoseCorrectionParams
{
    static constexpr const char* NAME = "animPoseCorrectionParams";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    anim::PoseCorrectionGroup poseCorrectionGroup; // 30
    float blendDuration; // 2A0
    uint8_t unk2A4[0x2B0 - 0x2A4]; // 2A4
};
RED4EXT_ASSERT_SIZE(PoseCorrectionParams, 0x2B0);
} // namespace anim
using animPoseCorrectionParams = anim::PoseCorrectionParams;
} // namespace RED4ext

// clang-format on
