#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationViewData.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CurrencyUpdateNotificationViewData : game::ui::GenericNotificationViewData
{
    static constexpr const char* NAME = "gameuiCurrencyUpdateNotificationViewData";
    static constexpr const char* ALIAS = "CurrencyUpdateNotificationViewData";

    int32_t diff; // 90
    uint32_t total; // 94
};
RED4EXT_ASSERT_SIZE(CurrencyUpdateNotificationViewData, 0x98);
} // namespace game::ui
using CurrencyUpdateNotificationViewData = game::ui::CurrencyUpdateNotificationViewData;
} // namespace RED4ext
