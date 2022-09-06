#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeMinigame.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade { 
struct ArcadeGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiarcadeArcadeGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x130 - 0xE0]; // E0
    ink::ImageWidgetReference screenTransitionWidget; // 130
    ink::WidgetReference menu; // 148
    ink::WidgetReference gameplay; // 160
    ink::WidgetReference scoreboard; // 178
    uint8_t unk190[0x1E0 - 0x190]; // 190
    float defaultScreenTransitionTotalTime; // 1E0
    uint8_t unk1E4[0x1F8 - 0x1E4]; // 1E4
    game::ui::arcade::ArcadeMinigame minigame; // 1F8
    uint8_t unk1FC[0x200 - 0x1FC]; // 1FC
};
RED4EXT_ASSERT_SIZE(ArcadeGameController, 0x200);
} // namespace game::ui::arcade
} // namespace RED4ext

// clang-format on
