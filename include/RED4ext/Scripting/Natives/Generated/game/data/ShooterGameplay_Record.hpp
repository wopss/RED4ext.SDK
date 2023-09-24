#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ArcadeGameplay_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ShooterGameplay_Record : game::data::ArcadeGameplay_Record
{
    static constexpr const char* NAME = "gamedataShooterGameplay_Record";
    static constexpr const char* ALIAS = "ShooterGameplay_Record";

    uint8_t unk60[0x178 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(ShooterGameplay_Record, 0x178);
} // namespace game::data
using gamedataShooterGameplay_Record = game::data::ShooterGameplay_Record;
using ShooterGameplay_Record = game::data::ShooterGameplay_Record;
} // namespace RED4ext

// clang-format on
