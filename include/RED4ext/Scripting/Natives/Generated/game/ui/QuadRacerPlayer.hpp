#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGamePlayerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct QuadRacerPlayer : game::ui::SideScrollerMiniGamePlayerController
{
    static constexpr const char* NAME = "gameuiQuadRacerPlayer";
    static constexpr const char* ALIAS = "QuadRacerPlayer";

    uint8_t unk88[0xA0 - 0x88]; // 88
    CName leftTurnAtlasRegion; // A0
    CName rightTurnAtlasRegion; // A8
    CName straightTurnAtlasRegion; // B0
    ink::ImageWidgetReference playerImage; // B8
    ink::ImageWidgetReference leftTireSmoke; // D0
    ink::ImageWidgetReference rightTireSmoke; // E8
    ink::ImageWidgetReference rightFlame; // 100
    ink::ImageWidgetReference leftFlame; // 118
};
RED4EXT_ASSERT_SIZE(QuadRacerPlayer, 0x130);
} // namespace game::ui
using gameuiQuadRacerPlayer = game::ui::QuadRacerPlayer;
using QuadRacerPlayer = game::ui::QuadRacerPlayer;
} // namespace RED4ext

// clang-format on
