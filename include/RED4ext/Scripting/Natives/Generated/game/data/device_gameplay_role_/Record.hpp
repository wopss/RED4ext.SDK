#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ScannableData_Record.hpp>

namespace RED4ext
{
namespace game::data::device_gameplay_role_
{
struct Record : game::data::ScannableData_Record
{
    static constexpr const char* NAME = "gamedatadevice_gameplay_role_Record";
    static constexpr const char* ALIAS = "device_gameplay_role_Record";

};
RED4EXT_ASSERT_SIZE(Record, 0x88);
} // namespace game::data::device_gameplay_role_
using gamedatadevice_gameplay_role_Record = game::data::device_gameplay_role_::Record;
using device_gameplay_role_Record = game::data::device_gameplay_role_::Record;
} // namespace RED4ext

// clang-format on
