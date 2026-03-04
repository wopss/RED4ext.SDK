#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetComparisonReportItemType.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetComparisonReportItem
{
    static constexpr const char* NAME = "gameMuppetComparisonReportItem";
    static constexpr const char* ALIAS = NAME;

    game::MuppetComparisonReportItemType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    String propertyName; // 08
    String serverValue; // 28
    String clientValue; // 48
};
RED4EXT_ASSERT_SIZE(MuppetComparisonReportItem, 0x68);
} // namespace game
using gameMuppetComparisonReportItem = game::MuppetComparisonReportItem;
} // namespace RED4ext

// clang-format on
