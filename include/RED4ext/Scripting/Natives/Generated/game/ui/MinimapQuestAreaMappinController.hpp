#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapeWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapQuestAreaMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapQuestAreaMappinController";
    static constexpr const char* ALIAS = "MinimapQuestAreaMappinController";

    uint8_t unk228[0x230 - 0x228]; // 228
    ink::ShapeWidgetReference areaShapeWidget; // 230
};
RED4EXT_ASSERT_SIZE(MinimapQuestAreaMappinController, 0x248);
} // namespace game::ui
using gameuiMinimapQuestAreaMappinController = game::ui::MinimapQuestAreaMappinController;
using MinimapQuestAreaMappinController = game::ui::MinimapQuestAreaMappinController;
} // namespace RED4ext

// clang-format on
