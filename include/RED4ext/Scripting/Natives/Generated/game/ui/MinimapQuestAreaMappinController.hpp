#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapeWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapQuestAreaMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapQuestAreaMappinController";
    static constexpr const char* ALIAS = "MinimapQuestAreaMappinController";

    uint8_t unk220[0x228 - 0x220]; // 220
    ink::ShapeWidgetReference areaShapeWidget; // 228
};
RED4EXT_ASSERT_SIZE(MinimapQuestAreaMappinController, 0x240);
} // namespace game::ui
using MinimapQuestAreaMappinController = game::ui::MinimapQuestAreaMappinController;
} // namespace RED4ext
