#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ui/StickerBackgroundCallback.hpp>
#include <RED4ext/Types/generated/game/ui/StickerCallback.hpp>
#include <RED4ext/Types/generated/game/ui/StickerFrameCallback.hpp>
#include <RED4ext/Types/generated/game/ui/StickerImageCallback.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Types/generated/ink/EmptyCallback.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PhotoModeStickersController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiPhotoModeStickersController";
    static constexpr const char* ALIAS = NAME;

    ink::EmptyCallback ResetStickers; // D0
    game::ui::StickerImageCallback SetStickerImage; // 108
    game::ui::StickerCallback SetSetSelectedSticker; // 140
    game::ui::StickerFrameCallback SetFrameImage; // 178
    game::ui::StickerBackgroundCallback SetBackground; // 1B0
    uint8_t unk1E8[0x268 - 0x1E8]; // 1E8
    NodeRef backgroundPrefabRef; // 268
    uint8_t unk270[0x298 - 0x270]; // 270
};
RED4EXT_ASSERT_SIZE(PhotoModeStickersController, 0x298);
} // namespace game::ui
} // namespace RED4ext
