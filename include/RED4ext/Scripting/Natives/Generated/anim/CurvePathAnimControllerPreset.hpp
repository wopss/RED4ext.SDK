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
struct CurvePathAnimControllerPreset
{
    static constexpr const char* NAME = "animCurvePathAnimControllerPreset";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName leftAnimationName; // 08
    CName forwardAnimationName; // 10
    CName rightAnimationName; // 18
};
RED4EXT_ASSERT_SIZE(CurvePathAnimControllerPreset, 0x20);
} // namespace anim
using animCurvePathAnimControllerPreset = anim::CurvePathAnimControllerPreset;
} // namespace RED4ext

// clang-format on
