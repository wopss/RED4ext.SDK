#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SEquipArea.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SEquipmentSet.hpp>

namespace RED4ext
{
namespace game
{
struct SLoadout
{
    static constexpr const char* NAME = "gameSLoadout";
    static constexpr const char* ALIAS = "SLoadout";

    DynArray<game::SEquipArea> equipAreas; // 00
    DynArray<game::SEquipmentSet> equipmentSets; // 10
};
RED4EXT_ASSERT_SIZE(SLoadout, 0x20);
} // namespace game
using gameSLoadout = game::SLoadout;
using SLoadout = game::SLoadout;
} // namespace RED4ext

// clang-format on
