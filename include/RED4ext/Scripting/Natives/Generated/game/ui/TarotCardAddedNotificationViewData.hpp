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
struct TarotCardAddedNotificationViewData : game::ui::GenericNotificationViewData
{
    static constexpr const char* NAME = "gameuiTarotCardAddedNotificationViewData";
    static constexpr const char* ALIAS = "TarotCardAddedNotificationViewData";

    CName imagePart; // 90
    CString cardName; // 98
    CName animation; // B8
};
RED4EXT_ASSERT_SIZE(TarotCardAddedNotificationViewData, 0xC0);
} // namespace game::ui
using gameuiTarotCardAddedNotificationViewData = game::ui::TarotCardAddedNotificationViewData;
using TarotCardAddedNotificationViewData = game::ui::TarotCardAddedNotificationViewData;
} // namespace RED4ext

// clang-format on
