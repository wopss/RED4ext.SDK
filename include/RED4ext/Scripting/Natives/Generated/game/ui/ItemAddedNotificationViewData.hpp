#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationViewData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ItemAddedNotificationViewData : game::ui::GenericNotificationViewData
{
    static constexpr const char* NAME = "gameuiItemAddedNotificationViewData";
    static constexpr const char* ALIAS = "ItemAddedNotificationViewData";

    ItemID itemID; // 90
    CName animation; // A0
    CName itemRarity; // A8
};
RED4EXT_ASSERT_SIZE(ItemAddedNotificationViewData, 0xB0);
} // namespace game::ui
using gameuiItemAddedNotificationViewData = game::ui::ItemAddedNotificationViewData;
using ItemAddedNotificationViewData = game::ui::ItemAddedNotificationViewData;
} // namespace RED4ext

// clang-format on
