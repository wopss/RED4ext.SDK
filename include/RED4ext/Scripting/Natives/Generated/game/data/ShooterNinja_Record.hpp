#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ShooterBossAI_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ShooterNinja_Record : game::data::ShooterBossAI_Record
{
    static constexpr const char* NAME = "gamedataShooterNinja_Record";
    static constexpr const char* ALIAS = "ShooterNinja_Record";

    uint8_t unk110[0x170 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(ShooterNinja_Record, 0x170);
} // namespace game::data
using gamedataShooterNinja_Record = game::data::ShooterNinja_Record;
using ShooterNinja_Record = game::data::ShooterNinja_Record;
} // namespace RED4ext

// clang-format on
