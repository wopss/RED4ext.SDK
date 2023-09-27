#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseSign_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct StreetSign_Record : game::data::BaseSign_Record
{
    static constexpr const char* NAME = "gamedataStreetSign_Record";
    static constexpr const char* ALIAS = "StreetSign_Record";

};
RED4EXT_ASSERT_SIZE(StreetSign_Record, 0x70);
} // namespace game::data
using gamedataStreetSign_Record = game::data::StreetSign_Record;
using StreetSign_Record = game::data::StreetSign_Record;
} // namespace RED4ext

// clang-format on
