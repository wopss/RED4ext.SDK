#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimFeature_EquipUnequipItem : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_EquipUnequipItem";
    static constexpr const char* ALIAS = "AnimFeature_EquipUnequipItem";

    float stateTransitionDuration; // 40
    int32_t itemState; // 44
    int32_t itemType; // 48
    bool firstEquip; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(AnimFeature_EquipUnequipItem, 0x50);
} // namespace anim
using AnimFeature_EquipUnequipItem = anim::AnimFeature_EquipUnequipItem;
} // namespace RED4ext
