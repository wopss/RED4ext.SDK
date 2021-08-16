#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
struct CBitmapTexture;
namespace ink { struct TextureAtlas; }

namespace game::ui { 
struct HDRSettingsGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiHDRSettingsGameController";
    static constexpr const char* ALIAS = "HDRSettingsGameController";

    Ref<CBitmapTexture> callibrationScreen; // D0
    RaRef<ink::TextureAtlas> callibrationScreenAtlas; // E8
    uint8_t unkF0[0x100 - 0xF0]; // F0
    ink::WidgetReference callibrationScreenTarget; // 100
    uint8_t unk118[0x128 - 0x118]; // 118
};
RED4EXT_ASSERT_SIZE(HDRSettingsGameController, 0x128);
} // namespace game::ui
using HDRSettingsGameController = game::ui::HDRSettingsGameController;
} // namespace RED4ext
