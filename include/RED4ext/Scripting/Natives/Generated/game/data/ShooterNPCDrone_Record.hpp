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
struct ShooterNPCDrone_Record : game::data::ShooterAI_Record
{
    static constexpr const char* NAME = "gamedataShooterNPCDrone_Record";
    static constexpr const char* ALIAS = "ShooterNPCDrone_Record";

    uint8_t unkF8[0x120 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(ShooterNPCDrone_Record, 0x120);
} // namespace game::data
using gamedataShooterNPCDrone_Record = game::data::ShooterNPCDrone_Record;
using ShooterNPCDrone_Record = game::data::ShooterNPCDrone_Record;
} // namespace RED4ext

// clang-format on
