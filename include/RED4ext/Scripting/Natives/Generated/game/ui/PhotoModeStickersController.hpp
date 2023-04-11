#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/StickerBackgroundCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/StickerCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/StickerFrameCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/StickerImageCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EmptyCallback.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhotoModeStickersController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiPhotoModeStickersController";
    static constexpr const char* ALIAS = NAME;

    ink::EmptyCallback ResetStickers; // E0
    game::ui::StickerImageCallback SetStickerImage; // 118
    game::ui::StickerCallback SetSetSelectedSticker; // 150
    game::ui::StickerFrameCallback SetFrameImage; // 188
    game::ui::StickerBackgroundCallback SetBackground; // 1C0
    uint8_t unk1F8[0x278 - 0x1F8]; // 1F8
    NodeRef backgroundPrefabRef; // 278
    uint8_t unk280[0x2B0 - 0x280]; // 280
};
RED4EXT_ASSERT_SIZE(PhotoModeStickersController, 0x2B0);
} // namespace game::ui
using gameuiPhotoModeStickersController = game::ui::PhotoModeStickersController;
} // namespace RED4ext

// clang-format on
