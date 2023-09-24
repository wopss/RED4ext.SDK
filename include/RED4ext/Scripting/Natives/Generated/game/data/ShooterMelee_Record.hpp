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
struct ShooterMelee_Record : game::data::ShooterAI_Record
{
    static constexpr const char* NAME = "gamedataShooterMelee_Record";
    static constexpr const char* ALIAS = "ShooterMelee_Record";

    uint8_t unkF8[0x150 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(ShooterMelee_Record, 0x150);
} // namespace game::data
using gamedataShooterMelee_Record = game::data::ShooterMelee_Record;
using ShooterMelee_Record = game::data::ShooterMelee_Record;
} // namespace RED4ext

// clang-format on
