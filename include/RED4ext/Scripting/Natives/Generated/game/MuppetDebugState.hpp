#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetStateComparisonReport.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetSubStepData.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetDebugState : ISerializable
{
    static constexpr const char* NAME = "gameMuppetDebugState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::MuppetStateComparisonReport> comparisonReports; // 30
    uint32_t comparisonReportIndex; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    DynArray<game::MuppetSubStepData> subStepsData; // 48
};
RED4EXT_ASSERT_SIZE(MuppetDebugState, 0x58);
} // namespace game
using gameMuppetDebugState = game::MuppetDebugState;
} // namespace RED4ext

// clang-format on
