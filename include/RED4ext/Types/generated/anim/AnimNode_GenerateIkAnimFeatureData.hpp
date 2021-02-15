#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Types/generated/anim/IKChainSettings.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_GenerateIkAnimFeatureData : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_GenerateIkAnimFeatureData";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::IKChainSettings> ikChainSettings; // 60
    uint8_t unk70[0xA0 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(AnimNode_GenerateIkAnimFeatureData, 0xA0);
} // namespace anim
} // namespace RED4ext
