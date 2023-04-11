#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/EquipmentArea.hpp>

namespace RED4ext
{
namespace game
{
struct SSlotInfo
{
    static constexpr const char* NAME = "gameSSlotInfo";
    static constexpr const char* ALIAS = "SSlotInfo";

    game::data::EquipmentArea areaType; // 00
    TweakDBID equipSlot; // 04
    uint8_t unk0C[0x10 - 0xC]; // C
    CName visualTag; // 10
};
RED4EXT_ASSERT_SIZE(SSlotInfo, 0x18);
} // namespace game
using gameSSlotInfo = game::SSlotInfo;
using SSlotInfo = game::SSlotInfo;
} // namespace RED4ext

// clang-format on
