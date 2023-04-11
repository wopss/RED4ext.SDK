#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct AdvertTranslationController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiAdvertTranslationController";
    static constexpr const char* ALIAS = "AdvertTranslationLogicController";

    uint8_t unkE0[0xF0 - 0xE0]; // E0
    ink::TextWidgetReference advertText; // F0
    uint8_t unk108[0x128 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(AdvertTranslationController, 0x128);
} // namespace game::ui
using gameuiAdvertTranslationController = game::ui::AdvertTranslationController;
using AdvertTranslationLogicController = game::ui::AdvertTranslationController;
} // namespace RED4ext

// clang-format on
