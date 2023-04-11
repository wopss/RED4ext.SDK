#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtAnimationDefinition
{
    static constexpr const char* NAME = "animLookAtAnimationDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> animations; // 00
    float animDelay; // 10
    float minTransitionDuration; // 14
    float playAnimProbability; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(LookAtAnimationDefinition, 0x20);
} // namespace anim
using animLookAtAnimationDefinition = anim::LookAtAnimationDefinition;
} // namespace RED4ext

// clang-format on
