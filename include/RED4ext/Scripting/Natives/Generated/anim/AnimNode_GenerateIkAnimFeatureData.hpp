#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKChainSettings.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_GenerateIkAnimFeatureData : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_GenerateIkAnimFeatureData";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::IKChainSettings> ikChainSettings; // 60
    uint8_t unk70[0xA0 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(AnimNode_GenerateIkAnimFeatureData, 0xA0);
} // namespace anim
using animAnimNode_GenerateIkAnimFeatureData = anim::AnimNode_GenerateIkAnimFeatureData;
} // namespace RED4ext

// clang-format on
