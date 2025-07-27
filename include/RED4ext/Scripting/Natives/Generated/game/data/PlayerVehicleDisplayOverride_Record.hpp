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
struct PlayerVehicleDisplayOverride_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPlayerVehicleDisplayOverride_Record";
    static constexpr const char* ALIAS = "PlayerVehicleDisplayOverride_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PlayerVehicleDisplayOverride_Record, 0x78);
} // namespace game::data
using gamedataPlayerVehicleDisplayOverride_Record = game::data::PlayerVehicleDisplayOverride_Record;
using PlayerVehicleDisplayOverride_Record = game::data::PlayerVehicleDisplayOverride_Record;
} // namespace RED4ext

// clang-format on
