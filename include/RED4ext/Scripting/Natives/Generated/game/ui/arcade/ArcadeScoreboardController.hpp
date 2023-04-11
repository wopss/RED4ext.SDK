#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/IArcadeScreenController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ArcadeScoreboardController : game::ui::arcade::IArcadeScreenController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeScoreboardController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xA8 - 0x98]; // 98
    DynArray<ink::TextWidgetReference> scoreboardNameList; // A8
    DynArray<ink::TextWidgetReference> scoreboardScoreList; // B8
    uint8_t unkC8[0xE8 - 0xC8]; // C8
    ink::WidgetReference endingPanel; // E8
    ink::WidgetReference pressToPlayAgainText; // 100
    ink::TextWidgetReference playerCurrentScore; // 118
    ink::TextWidgetReference playerHighestScore; // 130
    ink::TextWidgetReference playerHighestScoreAlert; // 148
    uint8_t unk160[0x188 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(ArcadeScoreboardController, 0x188);
} // namespace game::ui::arcade
using gameuiarcadeArcadeScoreboardController = game::ui::arcade::ArcadeScoreboardController;
} // namespace RED4ext

// clang-format on
