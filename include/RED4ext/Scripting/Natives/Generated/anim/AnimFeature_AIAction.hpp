#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_AIAction : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_AIAction";
    static constexpr const char* ALIAS = "AnimFeature_AIAction";

    int32_t state; // 40
    int32_t animVariation; // 44
    float stateDuration; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AnimFeature_AIAction, 0x50);
} // namespace anim
using animAnimFeature_AIAction = anim::AnimFeature_AIAction;
using AnimFeature_AIAction = anim::AnimFeature_AIAction;
} // namespace RED4ext

// clang-format on
