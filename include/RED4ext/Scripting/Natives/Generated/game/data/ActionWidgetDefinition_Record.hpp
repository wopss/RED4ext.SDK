#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/WidgetDefinition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ActionWidgetDefinition_Record : game::data::WidgetDefinition_Record
{
    static constexpr const char* NAME = "gamedataActionWidgetDefinition_Record";
    static constexpr const char* ALIAS = "ActionWidgetDefinition_Record";

};
RED4EXT_ASSERT_SIZE(ActionWidgetDefinition_Record, 0x88);
} // namespace game::data
using gamedataActionWidgetDefinition_Record = game::data::ActionWidgetDefinition_Record;
using ActionWidgetDefinition_Record = game::data::ActionWidgetDefinition_Record;
} // namespace RED4ext

// clang-format on
