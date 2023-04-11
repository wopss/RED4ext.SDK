#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct StatViewData
{
    static constexpr const char* NAME = "gameStatViewData";
    static constexpr const char* ALIAS = "StatViewData";

    game::data::StatType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString statName; // 08
    int32_t value; // 28
    int32_t diffValue; // 2C
    bool isMaxValue; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    float valueF; // 34
    float diffValueF; // 38
    float statMinValueF; // 3C
    float statMaxValueF; // 40
    bool canBeCompared; // 44
    bool isCompared; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
    int32_t statMinValue; // 48
    int32_t statMaxValue; // 4C
};
RED4EXT_ASSERT_SIZE(StatViewData, 0x50);
} // namespace game
using gameStatViewData = game::StatViewData;
using StatViewData = game::StatViewData;
} // namespace RED4ext

// clang-format on
