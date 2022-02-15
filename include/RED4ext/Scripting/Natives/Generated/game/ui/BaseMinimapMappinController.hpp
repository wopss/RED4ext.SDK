#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EIconOrientation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinBaseController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BaseMinimapMappinController : game::ui::MappinBaseController
{
    static constexpr const char* NAME = "gameuiBaseMinimapMappinController";
    static constexpr const char* ALIAS = "BaseMinimapMappinController";

    uint8_t unk1D8[0x1E8 - 0x1D8]; // 1D8
    ink::WidgetReference fixedOrientationWidget; // 1E8
    ink::WidgetReference clampArrowWidget; // 200
    game::ui::EIconOrientation iconOrientation; // 218
    uint8_t unk21C[0x220 - 0x21C]; // 21C
};
RED4EXT_ASSERT_SIZE(BaseMinimapMappinController, 0x220);
} // namespace game::ui
using BaseMinimapMappinController = game::ui::BaseMinimapMappinController;
} // namespace RED4ext
