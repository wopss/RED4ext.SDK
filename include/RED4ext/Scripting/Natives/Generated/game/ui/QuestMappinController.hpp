#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InteractionMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct QuestMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiQuestMappinController";
    static constexpr const char* ALIAS = "BaseQuestMappinController";

    uint8_t unk2B0[0x2C8 - 0x2B0]; // 2B0
    bool nameplateVisible; // 2C8
    uint8_t unk2C9[0x2D0 - 0x2C9]; // 2C9
    ink::TextWidgetReference distanceText; // 2D0
    ink::TextWidgetReference displayName; // 2E8
};
RED4EXT_ASSERT_SIZE(QuestMappinController, 0x300);
} // namespace game::ui
using BaseQuestMappinController = game::ui::QuestMappinController;
} // namespace RED4ext
