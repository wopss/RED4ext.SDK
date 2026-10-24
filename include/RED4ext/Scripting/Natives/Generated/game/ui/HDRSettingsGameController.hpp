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

    Ref<CBitmapTexture> callibrationScreen; // 100
    RaRef<ink::TextureAtlas> callibrationScreenAtlas; // 118
    uint8_t unk120[0x130 - 0x120]; // 120
    ink::WidgetReference callibrationScreenTarget; // 130
    uint8_t unk148[0x158 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(HDRSettingsGameController, 0x158);
} // namespace game::ui
using gameuiHDRSettingsGameController = game::ui::HDRSettingsGameController;
using HDRSettingsGameController = game::ui::HDRSettingsGameController;
} // namespace RED4ext

// clang-format on
