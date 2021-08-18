#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/QuestUpdateNotificationViewData.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PhoneMessageNotificationViewData : game::ui::QuestUpdateNotificationViewData
{
    static constexpr const char* NAME = "gameuiPhoneMessageNotificationViewData";
    static constexpr const char* ALIAS = "PhoneMessageNotificationViewData";

    int32_t threadHash; // E0
    int32_t contactHash; // E4
};
RED4EXT_ASSERT_SIZE(PhoneMessageNotificationViewData, 0xE8);
} // namespace game::ui
using PhoneMessageNotificationViewData = game::ui::PhoneMessageNotificationViewData;
} // namespace RED4ext
