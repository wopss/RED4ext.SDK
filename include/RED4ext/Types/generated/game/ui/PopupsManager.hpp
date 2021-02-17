#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PopupsManager : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiPopupsManager";
    static constexpr const char* ALIAS = "PopupsManager";

    uint8_t unkD0[0x118 - 0xD0]; // D0
    ink::CompoundWidgetReference bracketsContainer; // 118
    ink::CompoundWidgetReference tutorialOverlayContainer; // 130
    CName bracketLibraryID; // 148
    uint8_t unk150[0x168 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(PopupsManager, 0x168);
} // namespace game::ui
using PopupsManager = game::ui::PopupsManager;
} // namespace RED4ext
