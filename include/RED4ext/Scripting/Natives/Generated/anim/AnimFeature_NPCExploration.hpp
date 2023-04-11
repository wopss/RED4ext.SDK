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
struct AnimFeature_NPCExploration : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_NPCExploration";
    static constexpr const char* ALIAS = NAME;

    int32_t explorationType; // 40
    int32_t state; // 44
    int32_t movementType; // 48
    bool isEvenLoop; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    float playbackTime; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(AnimFeature_NPCExploration, 0x58);
} // namespace anim
using animAnimFeature_NPCExploration = anim::AnimFeature_NPCExploration;
} // namespace RED4ext

// clang-format on
