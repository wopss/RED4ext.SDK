#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/RoachRaceChunkLayer.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RoachRaceGameLogicController : game::ui::SideScrollerMiniGameLogicController
{
    static constexpr const char* NAME = "gameuiRoachRaceGameLogicController";
    static constexpr const char* ALIAS = "RoachRaceLogicController";

    uint8_t unk128[0x130 - 0x128]; // 128
    CName startAnimation; // 130
    CName deathAnimation; // 138
    uint8_t unk140[0x148 - 0x140]; // 140
    Vector2 playerSpawnPoint; // 148
    float pixelsPerScore; // 150
    float jumpAcceleration; // 154
    float jumpCancelAcceleration; // 158
    float gravity; // 15C
    float invincibilityTime; // 160
    float maxSpeedMultiplier; // 164
    float multiplierPerScore; // 168
    uint8_t unk16C[0x180 - 0x16C]; // 16C
    ink::WidgetReference house; // 180
    ink::WidgetReference ground; // 198
    uint8_t unk1B0[0x1C0 - 0x1B0]; // 1B0
    DynArray<game::ui::RoachRaceChunkLayer> layers; // 1C0
};
RED4EXT_ASSERT_SIZE(RoachRaceGameLogicController, 0x1D0);
} // namespace game::ui
using gameuiRoachRaceGameLogicController = game::ui::RoachRaceGameLogicController;
using RoachRaceLogicController = game::ui::RoachRaceGameLogicController;
} // namespace RED4ext

// clang-format on
