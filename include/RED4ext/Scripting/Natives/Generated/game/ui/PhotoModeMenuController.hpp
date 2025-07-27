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

    uint8_t unkF0[0x2B0 - 0xF0]; // F0
    game::ui::SetPhotoModeKeyEnabledCallback SetAttributeOptionEnabled; // 2B0
    game::ui::SetPhotoModeKeyEnabledCallback SetCategoryEnabled; // 2E8
    game::ui::StickerImageCallback SetStickerImage; // 320
    game::ui::NpcImageCallback SetNpcImage; // 358
    game::ui::ChangeAspectRatioCallback ChangeAspectRatio; // 390
    uint8_t unk3C8[0x400 - 0x3C8]; // 3C8
};
RED4EXT_ASSERT_SIZE(PhotoModeMenuController, 0x400);
} // namespace game::ui
using gameuiPhotoModeMenuController = game::ui::PhotoModeMenuController;
} // namespace RED4ext

// clang-format on
