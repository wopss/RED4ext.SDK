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
struct ShooterProp_Record : game::data::ShooterAI_Record
{
    static constexpr const char* NAME = "gamedataShooterProp_Record";
    static constexpr const char* ALIAS = "ShooterProp_Record";

    uint8_t unkF8[0x110 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(ShooterProp_Record, 0x110);
} // namespace game::data
using gamedataShooterProp_Record = game::data::ShooterProp_Record;
using ShooterProp_Record = game::data::ShooterProp_Record;
} // namespace RED4ext

// clang-format on
