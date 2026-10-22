#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BufferSlice.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SavedStatsData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SavedStatsDataOptimized.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatsObjectID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct StatsStateMapStructure
{
    static constexpr const char* NAME = "gameStatsStateMapStructure";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    DynArray<game::StatsObjectID> keys; // 30
    DynArray<game::SavedStatsData> values; // 40
    DynArray<game::SavedStatsDataOptimized> valuesOptimized; // 50
    DynArray<game::BufferSlice> sharedBufferSlices; // 60
    DynArray<game::data::StatType> sharedInactiveStats; // 70
    DynArray<TweakDBID> sharedRecordId; // 80
    DataBuffer sharedDataBuffer; // 90
};
RED4EXT_ASSERT_SIZE(StatsStateMapStructure, 0xB8);
} // namespace game
using gameStatsStateMapStructure = game::StatsStateMapStructure;
} // namespace RED4ext

// clang-format on
