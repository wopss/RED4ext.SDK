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
struct MinimapRemotePlayerMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapRemotePlayerMappinController";
    static constexpr const char* ALIAS = "MinimapRemotePlayerMappinController";

    ink::WidgetReference rootWidget; // 228
    ink::WidgetReference shapeWidget; // 240
    ink::WidgetReference dataWidget; // 258
};
RED4EXT_ASSERT_SIZE(MinimapRemotePlayerMappinController, 0x270);
} // namespace game::ui
using gameuiMinimapRemotePlayerMappinController = game::ui::MinimapRemotePlayerMappinController;
using MinimapRemotePlayerMappinController = game::ui::MinimapRemotePlayerMappinController;
} // namespace RED4ext

// clang-format on
