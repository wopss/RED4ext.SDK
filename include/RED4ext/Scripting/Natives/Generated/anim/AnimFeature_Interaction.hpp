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
struct AnimFeature_Interaction : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Interaction";
    static constexpr const char* ALIAS = NAME;

    float interactionDuration; // 40
    int32_t interactionStage; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_Interaction, 0x48);
} // namespace anim
using animAnimFeature_Interaction = anim::AnimFeature_Interaction;
} // namespace RED4ext

// clang-format on
