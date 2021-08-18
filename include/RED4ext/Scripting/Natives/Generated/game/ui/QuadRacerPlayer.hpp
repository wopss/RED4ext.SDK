#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGamePlayerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct QuadRacerPlayer : game::ui::SideScrollerMiniGamePlayerController
{
    static constexpr const char* NAME = "gameuiQuadRacerPlayer";
    static constexpr const char* ALIAS = "QuadRacerPlayer";

    uint8_t unk78[0x90 - 0x78]; // 78
    CName leftTurnAtlasRegion; // 90
    CName rightTurnAtlasRegion; // 98
    CName straightTurnAtlasRegion; // A0
    ink::ImageWidgetReference playerImage; // A8
    ink::ImageWidgetReference leftTireSmoke; // C0
    ink::ImageWidgetReference rightTireSmoke; // D8
    ink::ImageWidgetReference rightFlame; // F0
    ink::ImageWidgetReference leftFlame; // 108
};
RED4EXT_ASSERT_SIZE(QuadRacerPlayer, 0x120);
} // namespace game::ui
using QuadRacerPlayer = game::ui::QuadRacerPlayer;
} // namespace RED4ext
