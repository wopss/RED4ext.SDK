#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ShooterProjectileAI_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ShooterRangeGrenade_Record : game::data::ShooterProjectileAI_Record
{
    static constexpr const char* NAME = "gamedataShooterRangeGrenade_Record";
    static constexpr const char* ALIAS = "ShooterRangeGrenade_Record";

    uint8_t unk108[0x178 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(ShooterRangeGrenade_Record, 0x178);
} // namespace game::data
using gamedataShooterRangeGrenade_Record = game::data::ShooterRangeGrenade_Record;
using ShooterRangeGrenade_Record = game::data::ShooterRangeGrenade_Record;
} // namespace RED4ext

// clang-format on
