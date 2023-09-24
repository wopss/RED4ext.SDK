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
struct ShooterVFX_Record : game::data::ShooterObject_Record
{
    static constexpr const char* NAME = "gamedataShooterVFX_Record";
    static constexpr const char* ALIAS = "ShooterVFX_Record";

    uint8_t unkB0[0xE0 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(ShooterVFX_Record, 0xE0);
} // namespace game::data
using gamedataShooterVFX_Record = game::data::ShooterVFX_Record;
using ShooterVFX_Record = game::data::ShooterVFX_Record;
} // namespace RED4ext

// clang-format on
