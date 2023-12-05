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
struct QuestUpdateNotificationViewData : game::ui::GenericNotificationViewData
{
    static constexpr const char* NAME = "gameuiQuestUpdateNotificationViewData";
    static constexpr const char* ALIAS = "QuestUpdateNotificationViewData";

    CString questEntryId; // 90
    bool canBeMerged; // B0
    uint8_t unkB1[0xB8 - 0xB1]; // B1
    CName animation; // B8
    CString SMSText; // C0
    CString SMSLocKey; // E0
};
RED4EXT_ASSERT_SIZE(QuestUpdateNotificationViewData, 0x100);
} // namespace game::ui
using gameuiQuestUpdateNotificationViewData = game::ui::QuestUpdateNotificationViewData;
using QuestUpdateNotificationViewData = game::ui::QuestUpdateNotificationViewData;
} // namespace RED4ext

// clang-format on
