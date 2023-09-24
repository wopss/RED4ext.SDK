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
struct StopAndStickPerpendicular_Record : game::data::ProjectileCollision_Record
{
    static constexpr const char* NAME = "gamedataStopAndStickPerpendicular_Record";
    static constexpr const char* ALIAS = "StopAndStickPerpendicular_Record";

};
RED4EXT_ASSERT_SIZE(StopAndStickPerpendicular_Record, 0x70);
} // namespace game::data
using gamedataStopAndStickPerpendicular_Record = game::data::StopAndStickPerpendicular_Record;
using StopAndStickPerpendicular_Record = game::data::StopAndStickPerpendicular_Record;
} // namespace RED4ext

// clang-format on
