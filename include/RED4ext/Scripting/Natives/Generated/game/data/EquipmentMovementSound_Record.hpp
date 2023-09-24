#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct EquipmentMovementSound_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataEquipmentMovementSound_Record";
    static constexpr const char* ALIAS = "EquipmentMovementSound_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EquipmentMovementSound_Record, 0x60);
} // namespace game::data
using gamedataEquipmentMovementSound_Record = game::data::EquipmentMovementSound_Record;
using EquipmentMovementSound_Record = game::data::EquipmentMovementSound_Record;
} // namespace RED4ext

// clang-format on
