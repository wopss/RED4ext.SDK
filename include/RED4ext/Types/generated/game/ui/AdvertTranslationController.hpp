#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct AdvertTranslationController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiAdvertTranslationController";
    static constexpr const char* ALIAS = "AdvertTranslationLogicController";

    uint8_t unkD0[0xD8 - 0xD0]; // D0
    ink::TextWidgetReference advertText; // D8
    uint8_t unkF0[0x110 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(AdvertTranslationController, 0x110);
} // namespace game::ui
using AdvertTranslationLogicController = game::ui::AdvertTranslationController;
} // namespace RED4ext
