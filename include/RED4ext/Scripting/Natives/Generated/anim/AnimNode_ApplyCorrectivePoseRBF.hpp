#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CorrectivePoseEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ApplyCorrectivePoseRBF : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ApplyCorrectivePoseRBF";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::CorrectivePoseEntry> correctives; // 60
    float rbfCoefficient; // 70
    float rbfPowValue; // 74
    float correctiveFrame; // 78
    uint8_t unk7C[0xF0 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(AnimNode_ApplyCorrectivePoseRBF, 0xF0);
} // namespace anim
using animAnimNode_ApplyCorrectivePoseRBF = anim::AnimNode_ApplyCorrectivePoseRBF;
} // namespace RED4ext

// clang-format on
