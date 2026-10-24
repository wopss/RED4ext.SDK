#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ChangeAspectRatioCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/NpcImageCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SetPhotoModeKeyEnabledCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/StickerImageCallback.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhotoModeMenuController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiPhotoModeMenuController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x2C0 - 0x100]; // 100
    game::ui::SetPhotoModeKeyEnabledCallback SetAttributeOptionEnabled; // 2C0
    game::ui::SetPhotoModeKeyEnabledCallback SetCategoryEnabled; // 2F8
    game::ui::StickerImageCallback SetStickerImage; // 330
    game::ui::NpcImageCallback SetNpcImage; // 368
    game::ui::ChangeAspectRatioCallback ChangeAspectRatio; // 3A0
    uint8_t unk3D8[0x410 - 0x3D8]; // 3D8
};
RED4EXT_ASSERT_SIZE(PhotoModeMenuController, 0x410);
} // namespace game::ui
using gameuiPhotoModeMenuController = game::ui::PhotoModeMenuController;
} // namespace RED4ext

// clang-format on
