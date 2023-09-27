#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ScannableData_Record.hpp>

namespace RED4ext
{
namespace game::data::device_scanning_data_
{
struct Record : game::data::ScannableData_Record
{
    static constexpr const char* NAME = "gamedatadevice_scanning_data_Record";
    static constexpr const char* ALIAS = "device_scanning_data_Record";

};
RED4EXT_ASSERT_SIZE(Record, 0x88);
} // namespace game::data::device_scanning_data_
using gamedatadevice_scanning_data_Record = game::data::device_scanning_data_::Record;
using device_scanning_data_Record = game::data::device_scanning_data_::Record;
} // namespace RED4ext

// clang-format on
