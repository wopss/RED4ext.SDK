#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/Vector2.hpp>
#include <RED4ext/Types/generated/game/ui/RoachRaceChunkLayer.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGameLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RoachRaceGameLogicController : game::ui::SideScrollerMiniGameLogicController
{
    static constexpr const char* NAME = "gameuiRoachRaceGameLogicController";
    static constexpr const char* ALIAS = "RoachRaceLogicController";

    uint8_t unk118[0x120 - 0x118]; // 118
    CName startAnimation; // 120
    CName deathAnimation; // 128
    uint8_t unk130[0x138 - 0x130]; // 130
    Vector2 playerSpawnPoint; // 138
    float pixelsPerScore; // 140
    float jumpAcceleration; // 144
    float jumpCancelAcceleration; // 148
    float gravity; // 14C
    float invincibilityTime; // 150
    float maxSpeedMultiplier; // 154
    float multiplierPerScore; // 158
    uint8_t unk15C[0x170 - 0x15C]; // 15C
    ink::WidgetReference house; // 170
    ink::WidgetReference ground; // 188
    uint8_t unk1A0[0x1B0 - 0x1A0]; // 1A0
    DynArray<game::ui::RoachRaceChunkLayer> layers; // 1B0
};
RED4EXT_ASSERT_SIZE(RoachRaceGameLogicController, 0x1C0);
} // namespace game::ui
using RoachRaceLogicController = game::ui::RoachRaceGameLogicController;
} // namespace RED4ext
