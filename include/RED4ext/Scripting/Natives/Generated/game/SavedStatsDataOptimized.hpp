#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatIDType.hpp>

namespace RED4ext
{
namespace game { struct StatModifierData_Deprecated; }

namespace game
{
struct SavedStatsDataOptimized
{
    static constexpr const char* NAME = "gameSavedStatsDataOptimized";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::StatModifierData_Deprecated>> statModifiers; // 00
    DynArray<uint16_t> bufferSliceIndices; // 10
    DynArray<uint16_t> inactiveStatsIndices; // 20
    uint64_t entityHash; // 30
    uint32_t seed; // 38
    uint16_t recordIDIndex; // 3C
    game::StatIDType idType; // 3E
    uint8_t unk3F[0x40 - 0x3F]; // 3F
};
RED4EXT_ASSERT_SIZE(SavedStatsDataOptimized, 0x40);
} // namespace game
using gameSavedStatsDataOptimized = game::SavedStatsDataOptimized;
} // namespace RED4ext

// clang-format on
