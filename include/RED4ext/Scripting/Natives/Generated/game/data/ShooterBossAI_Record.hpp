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
struct ShooterBossAI_Record : game::data::ShooterAI_Record
{
    static constexpr const char* NAME = "gamedataShooterBossAI_Record";
    static constexpr const char* ALIAS = "ShooterBossAI_Record";

    uint8_t unkF8[0x110 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(ShooterBossAI_Record, 0x110);
} // namespace game::data
using gamedataShooterBossAI_Record = game::data::ShooterBossAI_Record;
using ShooterBossAI_Record = game::data::ShooterBossAI_Record;
} // namespace RED4ext

// clang-format on
