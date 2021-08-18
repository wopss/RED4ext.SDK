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

    uint8_t unk210[0x218 - 0x210]; // 210
    ink::ShapeWidgetReference areaShapeWidget; // 218
};
RED4EXT_ASSERT_SIZE(MinimapQuestAreaMappinController, 0x230);
} // namespace game::ui
using MinimapQuestAreaMappinController = game::ui::MinimapQuestAreaMappinController;
} // namespace RED4ext
