#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ScannableData_Record.hpp>

namespace RED4ext
{
namespace game::data::device_role_action_desctiption_ { 
struct Record : game::data::ScannableData_Record
{
    static constexpr const char* NAME = "gamedatadevice_role_action_desctiption_Record";
    static constexpr const char* ALIAS = "device_role_action_desctiption_Record";

};
RED4EXT_ASSERT_SIZE(Record, 0x58);
} // namespace game::data::device_role_action_desctiption_
using device_role_action_desctiption_Record = game::data::device_role_action_desctiption_::Record;
} // namespace RED4ext
