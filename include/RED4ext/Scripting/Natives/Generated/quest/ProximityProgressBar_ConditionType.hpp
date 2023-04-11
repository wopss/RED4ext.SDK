#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ProximityProgressBarAction.hpp>

namespace RED4ext
{
namespace quest
{
struct ProximityProgressBar_ConditionType : quest::IUIConditionType
{
    static constexpr const char* NAME = "questProximityProgressBar_ConditionType";
    static constexpr const char* ALIAS = NAME;

    quest::ProximityProgressBarAction action; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(ProximityProgressBar_ConditionType, 0x40);
} // namespace quest
using questProximityProgressBar_ConditionType = quest::ProximityProgressBar_ConditionType;
} // namespace RED4ext

// clang-format on
