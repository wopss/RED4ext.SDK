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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1C8[0x1D8 - 0x1C8]; // 1C8
    ink::WidgetReference fixedOrientationWidget; // 1D8
    ink::WidgetReference clampArrowWidget; // 1F0
    game::ui::EIconOrientation iconOrientation; // 208
    uint8_t unk20C[0x210 - 0x20C]; // 20C
};
RED4EXT_ASSERT_SIZE(BaseMinimapMappinController, 0x210);
} // namespace game::ui
} // namespace RED4ext
