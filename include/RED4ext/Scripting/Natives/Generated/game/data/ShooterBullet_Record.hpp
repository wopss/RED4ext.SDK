#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ShooterObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ShooterBullet_Record : game::data::ShooterObject_Record
{
    static constexpr const char* NAME = "gamedataShooterBullet_Record";
    static constexpr const char* ALIAS = "ShooterBullet_Record";

    uint8_t unkB0[0x108 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(ShooterBullet_Record, 0x108);
} // namespace game::data
using gamedataShooterBullet_Record = game::data::ShooterBullet_Record;
using ShooterBullet_Record = game::data::ShooterBullet_Record;
} // namespace RED4ext

// clang-format on
