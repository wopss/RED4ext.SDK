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
struct Stop_Record : game::data::ProjectileCollision_Record
{
    static constexpr const char* NAME = "gamedataStop_Record";
    static constexpr const char* ALIAS = "Stop_Record";

};
RED4EXT_ASSERT_SIZE(Stop_Record, 0x70);
} // namespace game::data
using gamedataStop_Record = game::data::Stop_Record;
using Stop_Record = game::data::Stop_Record;
} // namespace RED4ext

// clang-format on
