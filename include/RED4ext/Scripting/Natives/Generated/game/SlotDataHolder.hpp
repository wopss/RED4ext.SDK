#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
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
    game::SlotWeaponData weapon; // 50
    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(SlotDataHolder, 0xA8);
} // namespace game
using gameSlotDataHolder = game::SlotDataHolder;
using SlotDataHolder = game::SlotDataHolder;
} // namespace RED4ext

// clang-format on
