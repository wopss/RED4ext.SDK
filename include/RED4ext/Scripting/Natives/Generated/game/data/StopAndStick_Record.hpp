#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProjectileCollision_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct StopAndStick_Record : game::data::ProjectileCollision_Record
{
    static constexpr const char* NAME = "gamedataStopAndStick_Record";
    static constexpr const char* ALIAS = "StopAndStick_Record";

};
RED4EXT_ASSERT_SIZE(StopAndStick_Record, 0x70);
} // namespace game::data
using gamedataStopAndStick_Record = game::data::StopAndStick_Record;
using StopAndStick_Record = game::data::StopAndStick_Record;
} // namespace RED4ext

// clang-format on
