#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ResourceReferenceScriptToken.hpp>

namespace RED4ext
{
namespace game::ui { struct GenericNotificationViewData; }

namespace game::ui
{
struct GenericNotificationData
{
    static constexpr const char* NAME = "gameuiGenericNotificationData";
    static constexpr const char* ALIAS = NAME;

    float time; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName widgetLibraryItemName; // 08
    CName introAnimation; // 10
    red::ResourceReferenceScriptToken widgetLibraryResource; // 18
    Handle<game::ui::GenericNotificationViewData> notificationData; // 20
};
RED4EXT_ASSERT_SIZE(GenericNotificationData, 0x30);
} // namespace game::ui
using gameuiGenericNotificationData = game::ui::GenericNotificationData;
} // namespace RED4ext

// clang-format on
