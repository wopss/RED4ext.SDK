#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/LCDScreen_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct NumberPlate_Record : game::data::LCDScreen_Record
{
    static constexpr const char* NAME = "gamedataNumberPlate_Record";
    static constexpr const char* ALIAS = "NumberPlate_Record";

};
RED4EXT_ASSERT_SIZE(NumberPlate_Record, 0x80);
} // namespace game::data
using gamedataNumberPlate_Record = game::data::NumberPlate_Record;
using NumberPlate_Record = game::data::NumberPlate_Record;
} // namespace RED4ext

// clang-format on
