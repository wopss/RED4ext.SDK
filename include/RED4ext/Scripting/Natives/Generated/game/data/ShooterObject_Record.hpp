#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ArcadeObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ShooterObject_Record : game::data::ArcadeObject_Record
{
    static constexpr const char* NAME = "gamedataShooterObject_Record";
    static constexpr const char* ALIAS = "ShooterObject_Record";

    uint8_t unk88[0xB0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ShooterObject_Record, 0xB0);
} // namespace game::data
using gamedataShooterObject_Record = game::data::ShooterObject_Record;
using ShooterObject_Record = game::data::ShooterObject_Record;
} // namespace RED4ext

// clang-format on
