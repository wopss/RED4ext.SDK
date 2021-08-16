#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TEMP_IKTargetsControllerBodyType.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_HumanIk : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_HumanIk";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::TEMP_IKTargetsControllerBodyType> ikTargetsControllers; // 60
    uint8_t unk70[0x330 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(AnimNode_HumanIk, 0x330);
} // namespace anim
} // namespace RED4ext
