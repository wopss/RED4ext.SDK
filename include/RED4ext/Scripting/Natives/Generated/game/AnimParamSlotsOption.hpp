#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimParamSlotFunction.hpp>

namespace RED4ext
{
namespace game
{
struct AnimParamSlotsOption
{
    static constexpr const char* NAME = "gameAnimParamSlotsOption";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotID; // 00
    CName paramName; // 08
    ent::AnimParamSlotFunction function; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(AnimParamSlotsOption, 0x18);
} // namespace game
using gameAnimParamSlotsOption = game::AnimParamSlotsOption;
} // namespace RED4ext

// clang-format on
