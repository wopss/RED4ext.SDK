#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapPingSystemMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapPingSystemMappinController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference rootWidget; // 210
};
RED4EXT_ASSERT_SIZE(MinimapPingSystemMappinController, 0x228);
} // namespace game::ui
} // namespace RED4ext
