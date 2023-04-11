#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimMultiBoolToFloatEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_MultiBoolToFloatValue : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_MultiBoolToFloatValue";
    static constexpr const char* ALIAS = NAME;

    bool allMustBeTrue; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    float onTrue; // 4C
    float onFalse; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    DynArray<anim::AnimMultiBoolToFloatEntry> inputsData; // 58
    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_MultiBoolToFloatValue, 0x78);
} // namespace anim
using animAnimNode_MultiBoolToFloatValue = anim::AnimNode_MultiBoolToFloatValue;
} // namespace RED4ext

// clang-format on
