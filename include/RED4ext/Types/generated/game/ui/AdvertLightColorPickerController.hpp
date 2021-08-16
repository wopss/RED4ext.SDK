#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/Color.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct AdvertLightColorPickerController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiAdvertLightColorPickerController";
    static constexpr const char* ALIAS = NAME;

    Color lightColor; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(AdvertLightColorPickerController, 0x70);
} // namespace game::ui
} // namespace RED4ext
