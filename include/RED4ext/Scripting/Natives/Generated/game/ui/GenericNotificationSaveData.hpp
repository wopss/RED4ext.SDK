#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseUIData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GenericNotificationSaveData : game::ui::BaseUIData
{
    static constexpr const char* NAME = "gameuiGenericNotificationSaveData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::GenericNotificationData> notificationsData; // 38
};
RED4EXT_ASSERT_SIZE(GenericNotificationSaveData, 0x48);
} // namespace game::ui
using gameuiGenericNotificationSaveData = game::ui::GenericNotificationSaveData;
} // namespace RED4ext

// clang-format on
