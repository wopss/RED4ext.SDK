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
struct ShooterPickUpTransporter_Record : game::data::ShooterAI_Record
{
    static constexpr const char* NAME = "gamedataShooterPickUpTransporter_Record";
    static constexpr const char* ALIAS = "ShooterPickUpTransporter_Record";

    uint8_t unkF8[0x108 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(ShooterPickUpTransporter_Record, 0x108);
} // namespace game::data
using gamedataShooterPickUpTransporter_Record = game::data::ShooterPickUpTransporter_Record;
using ShooterPickUpTransporter_Record = game::data::ShooterPickUpTransporter_Record;
} // namespace RED4ext

// clang-format on
