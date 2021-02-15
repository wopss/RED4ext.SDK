#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/SetPhotoModeKeyEnabledCallback.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PhotoModeMenuController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiPhotoModeMenuController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x250 - 0xD0]; // D0
    game::ui::SetPhotoModeKeyEnabledCallback SetAttributeOptionEnabled; // 250
    game::ui::SetPhotoModeKeyEnabledCallback SetCategoryEnabled; // 288
    uint8_t unk2C0[0x2D0 - 0x2C0]; // 2C0
};
RED4EXT_ASSERT_SIZE(PhotoModeMenuController, 0x2D0);
} // namespace game::ui
} // namespace RED4ext
