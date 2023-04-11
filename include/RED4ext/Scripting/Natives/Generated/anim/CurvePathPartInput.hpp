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
struct CurvePathPartInput
{
    static constexpr const char* NAME = "animCurvePathPartInput";
    static constexpr const char* ALIAS = NAME;

    float curveLengthStart; // 00
    float curveLengthEnd; // 04
    CName controllerName; // 08
    CName eventNameStart; // 10
    CName eventNameEnd; // 18
    float startBlendTime; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(CurvePathPartInput, 0x28);
} // namespace anim
using animCurvePathPartInput = anim::CurvePathPartInput;
} // namespace RED4ext

// clang-format on
