#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EIconOrientation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinBaseController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct BaseMinimapMappinController : game::ui::MappinBaseController
{
    static constexpr const char* NAME = "gameuiBaseMinimapMappinController";
    static constexpr const char* ALIAS = "BaseMinimapMappinController";

    uint8_t unk1E0[0x1F0 - 0x1E0]; // 1E0
    ink::WidgetReference fixedOrientationWidget; // 1F0
    ink::WidgetReference clampArrowWidget; // 208
    game::ui::EIconOrientation iconOrientation; // 220
    uint8_t unk224[0x228 - 0x224]; // 224
};
RED4EXT_ASSERT_SIZE(BaseMinimapMappinController, 0x228);
} // namespace game::ui
using gameuiBaseMinimapMappinController = game::ui::BaseMinimapMappinController;
using BaseMinimapMappinController = game::ui::BaseMinimapMappinController;
} // namespace RED4ext

// clang-format on
