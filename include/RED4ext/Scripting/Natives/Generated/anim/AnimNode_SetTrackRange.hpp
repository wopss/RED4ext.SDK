#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetTrackRange : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SetTrackRange";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink minLink; // 60
    anim::FloatLink maxLink; // 80
    anim::FloatLink oldMinLink; // A0
    anim::FloatLink oldMaxLink; // C0
    float min; // E0
    float max; // E4
    float oldMin; // E8
    float oldMax; // EC
    anim::NamedTrackIndex track; // F0
    bool debug; // 108
    uint8_t unk109[0x110 - 0x109]; // 109
};
RED4EXT_ASSERT_SIZE(AnimNode_SetTrackRange, 0x110);
} // namespace anim
using animAnimNode_SetTrackRange = anim::AnimNode_SetTrackRange;
} // namespace RED4ext

// clang-format on
