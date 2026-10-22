#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AmmoData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SlotWeaponData.hpp>

namespace RED4ext
{
namespace game
{
struct SlotDataHolder : IScriptable
{
    static constexpr const char* NAME = "gameSlotDataHolder";
    static constexpr const char* ALIAS = "SlotDataHolder";

    DynArray<game::AmmoData> ammoData; // 40
    game::SlotWeaponData rightWeapon; // 50
    game::SlotWeaponData leftWeapon; // 98
    uint8_t unkE0[0xF0 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(SlotDataHolder, 0xF0);
} // namespace game
using gameSlotDataHolder = game::SlotDataHolder;
using SlotDataHolder = game::SlotDataHolder;
} // namespace RED4ext

// clang-format on
