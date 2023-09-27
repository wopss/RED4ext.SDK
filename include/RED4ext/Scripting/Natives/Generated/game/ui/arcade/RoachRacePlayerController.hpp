#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/BoundingRect.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct RoachRacePlayerController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRacePlayerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x110 - 0x78]; // 78
    ink::ImageWidgetReference image; // 110
    uint8_t unk128[0x158 - 0x128]; // 128
    game::ui::arcade::BoundingRect collider; // 158
    Vector2 runningBoundingRectangleRelativeSize; // 1C0
    Vector2 jumpingboundingRectangleRelativeSize; // 1C8
    Vector2 poweredupboundingRectangleRelativeSize; // 1D0
    uint8_t unk1D8[0x1E8 - 0x1D8]; // 1D8
    Vector2 singleJumpBoost; // 1E8
    Vector2 doubleJumpBoost; // 1F0
    uint8_t unk1F8[0x200 - 0x1F8]; // 1F8
    Vector2 gravity; // 200
    float teleportLockoutTime; // 208
    uint8_t unk20C[0x210 - 0x20C]; // 20C
    float carrotPowerupVelocityBoostModifier; // 210
    float invincibilityTime; // 214
    uint8_t unk218[0x21C - 0x218]; // 218
    float invincibilityWarningTime; // 21C
    uint8_t unk220[0x224 - 0x220]; // 220
    float roachDeathAnimationTime; // 224
    float roachDeathAnimationDisplacement; // 228
    uint8_t unk22C[0x260 - 0x22C]; // 22C
    CName jumpSFX; // 260
    CName doubleJumpSFX; // 268
    CName teleportSFX; // 270
    CName invincibilityStartSFX; // 278
    CName invincibilityStopSFX; // 280
    CName carrotPowerupStartSFX; // 288
    CName carrotPowerupStopSFX; // 290
    uint8_t unk298[0x2A0 - 0x298]; // 298
};
RED4EXT_ASSERT_SIZE(RoachRacePlayerController, 0x2A0);
} // namespace game::ui::arcade
using gameuiarcadeRoachRacePlayerController = game::ui::arcade::RoachRacePlayerController;
} // namespace RED4ext

// clang-format on
