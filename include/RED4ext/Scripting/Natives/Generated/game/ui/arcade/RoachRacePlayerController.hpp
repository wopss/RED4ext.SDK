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
namespace game::ui::arcade { 
struct RoachRacePlayerController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRacePlayerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x110 - 0x78]; // 78
    ink::ImageWidgetReference image; // 110
    uint8_t unk128[0x158 - 0x128]; // 128
    game::ui::arcade::BoundingRect collider; // 158
    Vector2 runningBoundingRectangleRelativeSize; // 188
    Vector2 jumpingboundingRectangleRelativeSize; // 190
    Vector2 poweredupboundingRectangleRelativeSize; // 198
    uint8_t unk1A0[0x1B0 - 0x1A0]; // 1A0
    Vector2 singleJumpBoost; // 1B0
    Vector2 doubleJumpBoost; // 1B8
    uint8_t unk1C0[0x1C8 - 0x1C0]; // 1C0
    Vector2 gravity; // 1C8
    float teleportLockoutTime; // 1D0
    uint8_t unk1D4[0x1D8 - 0x1D4]; // 1D4
    float carrotPowerupVelocityBoostModifier; // 1D8
    float invincibilityTime; // 1DC
    uint8_t unk1E0[0x1E4 - 0x1E0]; // 1E0
    float invincibilityWarningTime; // 1E4
    uint8_t unk1E8[0x1EC - 0x1E8]; // 1E8
    float roachDeathAnimationTime; // 1EC
    float roachDeathAnimationDisplacement; // 1F0
    uint8_t unk1F4[0x228 - 0x1F4]; // 1F4
    CName jumpSFX; // 228
    CName doubleJumpSFX; // 230
    CName teleportSFX; // 238
    CName invincibilityStartSFX; // 240
    CName invincibilityStopSFX; // 248
    CName carrotPowerupStartSFX; // 250
    CName carrotPowerupStopSFX; // 258
    uint8_t unk260[0x268 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(RoachRacePlayerController, 0x268);
} // namespace game::ui::arcade
} // namespace RED4ext

// clang-format on
