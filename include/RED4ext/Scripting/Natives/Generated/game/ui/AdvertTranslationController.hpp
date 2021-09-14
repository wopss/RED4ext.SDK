#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct AdvertTranslationController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiAdvertTranslationController";
    static constexpr const char* ALIAS = "AdvertTranslationLogicController";

    uint8_t unkD0[0xE0 - 0xD0]; // D0
    ink::TextWidgetReference advertText; // E0
    uint8_t unkF8[0x118 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(AdvertTranslationController, 0x118);
} // namespace game::ui
using AdvertTranslationLogicController = game::ui::AdvertTranslationController;
} // namespace RED4ext
