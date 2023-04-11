#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
struct CBitmapTexture;
namespace ink { struct TextureAtlas; }

namespace game::ui
{
struct HDRSettingsGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiHDRSettingsGameController";
    static constexpr const char* ALIAS = "HDRSettingsGameController";

    Ref<CBitmapTexture> callibrationScreen; // F0
    RaRef<ink::TextureAtlas> callibrationScreenAtlas; // 108
    uint8_t unk110[0x120 - 0x110]; // 110
    ink::WidgetReference callibrationScreenTarget; // 120
    uint8_t unk138[0x148 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(HDRSettingsGameController, 0x148);
} // namespace game::ui
using gameuiHDRSettingsGameController = game::ui::HDRSettingsGameController;
using HDRSettingsGameController = game::ui::HDRSettingsGameController;
} // namespace RED4ext

// clang-format on
