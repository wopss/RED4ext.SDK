#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeScoreboardController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterArcadeScoreboardController : game::ui::arcade::ArcadeScoreboardController
{
    static constexpr const char* NAME = "gameuiarcadeShooterArcadeScoreboardController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk188[0x190 - 0x188]; // 188
    ink::WidgetReference scoreBackground; // 190
    ink::WidgetReference endingScoreBackground; // 1A8
    ink::WidgetReference playerNames; // 1C0
    ink::WidgetReference ranks; // 1D8
    ink::WidgetReference scores; // 1F0
    ink::WidgetReference highestScoreText; // 208
    ink::WidgetReference highScoreText; // 220
    ink::ImageWidgetReference gameOverImage; // 238
    Vector2 highestScoreOriginalOffset; // 250
    Vector2 highestScoreEndingOffset; // 258
    Vector2 highScoreTextOriginalOffset; // 260
    Vector2 highScoreTextEndingOffset; // 268
    Vector2 rankScoreOriginalOffset; // 270
    Vector2 rankScoreEndingOffset; // 278
    Vector2 namesOriginalOffset; // 280
    Vector2 namesEndingOffset; // 288
};
RED4EXT_ASSERT_SIZE(ShooterArcadeScoreboardController, 0x290);
} // namespace game::ui::arcade
using gameuiarcadeShooterArcadeScoreboardController = game::ui::arcade::ShooterArcadeScoreboardController;
} // namespace RED4ext

// clang-format on
