#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapStealthMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapStealthMappinController";
    static constexpr const char* ALIAS = "MinimapStealthMappinController";

    ink::ImageWidgetReference visionConeWidget; // 228
};
RED4EXT_ASSERT_SIZE(MinimapStealthMappinController, 0x240);
} // namespace game::ui
using gameuiMinimapStealthMappinController = game::ui::MinimapStealthMappinController;
using MinimapStealthMappinController = game::ui::MinimapStealthMappinController;
} // namespace RED4ext

// clang-format on
