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
struct ThumbnailWidgetDefinition_Record : game::data::WidgetDefinition_Record
{
    static constexpr const char* NAME = "gamedataThumbnailWidgetDefinition_Record";
    static constexpr const char* ALIAS = "ThumbnailWidgetDefinition_Record";

};
RED4EXT_ASSERT_SIZE(ThumbnailWidgetDefinition_Record, 0x88);
} // namespace game::data
using gamedataThumbnailWidgetDefinition_Record = game::data::ThumbnailWidgetDefinition_Record;
using ThumbnailWidgetDefinition_Record = game::data::ThumbnailWidgetDefinition_Record;
} // namespace RED4ext

// clang-format on
