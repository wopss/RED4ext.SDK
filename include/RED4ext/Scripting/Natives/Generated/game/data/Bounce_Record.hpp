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
struct Bounce_Record : game::data::ProjectileCollision_Record
{
    static constexpr const char* NAME = "gamedataBounce_Record";
    static constexpr const char* ALIAS = "Bounce_Record";

};
RED4EXT_ASSERT_SIZE(Bounce_Record, 0x70);
} // namespace game::data
using gamedataBounce_Record = game::data::Bounce_Record;
using Bounce_Record = game::data::Bounce_Record;
} // namespace RED4ext

// clang-format on
