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
struct ShooterBasilisk_Record : game::data::ShooterBossAI_Record
{
    static constexpr const char* NAME = "gamedataShooterBasilisk_Record";
    static constexpr const char* ALIAS = "ShooterBasilisk_Record";

    uint8_t unk110[0x228 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(ShooterBasilisk_Record, 0x228);
} // namespace game::data
using gamedataShooterBasilisk_Record = game::data::ShooterBasilisk_Record;
using ShooterBasilisk_Record = game::data::ShooterBasilisk_Record;
} // namespace RED4ext

// clang-format on
