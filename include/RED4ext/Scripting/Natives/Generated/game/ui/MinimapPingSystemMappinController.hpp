#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapPingSystemMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapPingSystemMappinController";
    static constexpr const char* ALIAS = "MinimapPingSystemMappinController";

    ink::WidgetReference rootWidget; // 228
};
RED4EXT_ASSERT_SIZE(MinimapPingSystemMappinController, 0x240);
} // namespace game::ui
using gameuiMinimapPingSystemMappinController = game::ui::MinimapPingSystemMappinController;
using MinimapPingSystemMappinController = game::ui::MinimapPingSystemMappinController;
} // namespace RED4ext

// clang-format on
