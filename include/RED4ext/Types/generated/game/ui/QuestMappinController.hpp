#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/InteractionMappinController.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct QuestMappinController : game::ui::InteractionMappinController
{
    static constexpr const char* NAME = "gameuiQuestMappinController";
    static constexpr const char* ALIAS = "BaseQuestMappinController";

    uint8_t unk2A0[0x2B8 - 0x2A0]; // 2A0
    bool nameplateVisible; // 2B8
    uint8_t unk2B9[0x2C0 - 0x2B9]; // 2B9
    ink::TextWidgetReference distanceText; // 2C0
    ink::TextWidgetReference displayName; // 2D8
};
RED4EXT_ASSERT_SIZE(QuestMappinController, 0x2F0);
} // namespace game::ui
using BaseQuestMappinController = game::ui::QuestMappinController;
} // namespace RED4ext
