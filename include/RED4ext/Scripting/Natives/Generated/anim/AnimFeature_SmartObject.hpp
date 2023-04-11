#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_SmartObject : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_SmartObject";
    static constexpr const char* ALIAS = NAME;

    int32_t state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName privateAnimationName; // 48
};
RED4EXT_ASSERT_SIZE(AnimFeature_SmartObject, 0x50);
} // namespace anim
using animAnimFeature_SmartObject = anim::AnimFeature_SmartObject;
} // namespace RED4ext

// clang-format on
