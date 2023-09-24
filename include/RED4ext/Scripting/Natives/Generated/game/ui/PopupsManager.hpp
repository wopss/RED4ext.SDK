#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PopupsManager : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiPopupsManager";
    static constexpr const char* ALIAS = "PopupsManager";

    uint8_t unkE0[0x138 - 0xE0]; // E0
    ink::CompoundWidgetReference bracketsContainer; // 138
    ink::CompoundWidgetReference tutorialOverlayContainer; // 150
    CName bracketLibraryID; // 168
    uint8_t unk170[0x1B0 - 0x170]; // 170
};
RED4EXT_ASSERT_SIZE(PopupsManager, 0x1B0);
} // namespace game::ui
using gameuiPopupsManager = game::ui::PopupsManager;
using PopupsManager = game::ui::PopupsManager;
} // namespace RED4ext

// clang-format on
