#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SetPhotoModeKeyEnabledCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/StickerImageCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

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
    game::ui::StickerImageCallback SetStickerImage; // 2C0
    uint8_t unk2F8[0x320 - 0x2F8]; // 2F8
};
RED4EXT_ASSERT_SIZE(PhotoModeMenuController, 0x320);
} // namespace game::ui
} // namespace RED4ext
