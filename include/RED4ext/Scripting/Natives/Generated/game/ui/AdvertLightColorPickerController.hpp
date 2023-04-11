#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct AdvertLightColorPickerController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiAdvertLightColorPickerController";
    static constexpr const char* ALIAS = NAME;

    Color lightColor; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(AdvertLightColorPickerController, 0x80);
} // namespace game::ui
using gameuiAdvertLightColorPickerController = game::ui::AdvertLightColorPickerController;
} // namespace RED4ext

// clang-format on
