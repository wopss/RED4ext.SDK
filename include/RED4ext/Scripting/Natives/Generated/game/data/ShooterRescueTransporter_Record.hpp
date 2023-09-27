#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ShooterAI_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ShooterRescueTransporter_Record : game::data::ShooterAI_Record
{
    static constexpr const char* NAME = "gamedataShooterRescueTransporter_Record";
    static constexpr const char* ALIAS = "ShooterRescueTransporter_Record";

};
RED4EXT_ASSERT_SIZE(ShooterRescueTransporter_Record, 0xF8);
} // namespace game::data
using gamedataShooterRescueTransporter_Record = game::data::ShooterRescueTransporter_Record;
using ShooterRescueTransporter_Record = game::data::ShooterRescueTransporter_Record;
} // namespace RED4ext

// clang-format on
