#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct CurvePathBakerUserInput
{
    static constexpr const char* NAME = "animCurvePathBakerUserInput";
    static constexpr const char* ALIAS = NAME;

    CName controllersSetupName; // 00
    bool useStart; // 08
    bool useStop; // 09
    uint8_t unk0A[0xC - 0xA]; // A
    float blendTime; // 0C
};
RED4EXT_ASSERT_SIZE(CurvePathBakerUserInput, 0x10);
} // namespace anim
using animCurvePathBakerUserInput = anim::CurvePathBakerUserInput;
} // namespace RED4ext

// clang-format on
