#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Types/generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapStealthMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapStealthMappinController";
    static constexpr const char* ALIAS = "MinimapStealthMappinController";

    ink::ImageWidgetReference visionConeWidget; // 210
};
RED4EXT_ASSERT_SIZE(MinimapStealthMappinController, 0x228);
} // namespace game::ui
using MinimapStealthMappinController = game::ui::MinimapStealthMappinController;
} // namespace RED4ext
