#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PopupsManager : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiPopupsManager";
    static constexpr const char* ALIAS = "PopupsManager";

    uint8_t unkD0[0x128 - 0xD0]; // D0
    ink::CompoundWidgetReference bracketsContainer; // 128
    ink::CompoundWidgetReference tutorialOverlayContainer; // 140
    CName bracketLibraryID; // 158
    uint8_t unk160[0x178 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(PopupsManager, 0x178);
} // namespace game::ui
using PopupsManager = game::ui::PopupsManager;
} // namespace RED4ext
