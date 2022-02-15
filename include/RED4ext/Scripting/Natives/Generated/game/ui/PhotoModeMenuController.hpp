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

    uint8_t unkE0[0x260 - 0xE0]; // E0
    game::ui::SetPhotoModeKeyEnabledCallback SetAttributeOptionEnabled; // 260
    game::ui::SetPhotoModeKeyEnabledCallback SetCategoryEnabled; // 298
    game::ui::StickerImageCallback SetStickerImage; // 2D0
    uint8_t unk308[0x330 - 0x308]; // 308
};
RED4EXT_ASSERT_SIZE(PhotoModeMenuController, 0x330);
} // namespace game::ui
} // namespace RED4ext
