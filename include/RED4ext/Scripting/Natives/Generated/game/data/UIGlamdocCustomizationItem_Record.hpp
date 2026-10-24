#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct UIGlamdocCustomizationItem_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataUIGlamdocCustomizationItem_Record";
    static constexpr const char* ALIAS = "UIGlamdocCustomizationItem_Record";

    uint8_t unk488[0x4D0 - 0x488]; // 488
};
RED4EXT_ASSERT_SIZE(UIGlamdocCustomizationItem_Record, 0x4D0);
} // namespace game::data
using gamedataUIGlamdocCustomizationItem_Record = game::data::UIGlamdocCustomizationItem_Record;
using UIGlamdocCustomizationItem_Record = game::data::UIGlamdocCustomizationItem_Record;
} // namespace RED4ext

// clang-format on
