#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/GameplayTier.hpp>
#include <RED4ext/Types/generated/game/PSMCombat.hpp>
#include <RED4ext/Types/generated/game/PSMVision.hpp>
#include <RED4ext/Types/generated/game/PSMZones.hpp>
#include <RED4ext/Types/generated/game/ui/ProjectedHUDGameController.hpp>
#include <RED4ext/Types/generated/ink/LinePatternWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetPath.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MappinsContainerController : game::ui::ProjectedHUDGameController
{
    static constexpr const char* NAME = "gameuiMappinsContainerController";
    static constexpr const char* ALIAS = "MappinsContainerController";

    uint8_t unk138[0x150 - 0x138]; // 138
    ink::WidgetPath spawnContainerPath; // 150
    uint8_t unk160[0x170 - 0x160]; // 160
    ink::LinePatternWidgetReference gpsQuestPathWidget; // 170
    ink::LinePatternWidgetReference gpsPlayerTrackedPathWidget; // 188
    uint8_t unk1A0[0x22C - 0x1A0]; // 1A0
    game::PSMVision psmVision; // 22C
    game::PSMCombat psmCombat; // 230
    game::PSMZones psmZone; // 234
    GameplayTier tier; // 238
    uint8_t unk23C[0x290 - 0x23C]; // 23C
};
RED4EXT_ASSERT_SIZE(MappinsContainerController, 0x290);
} // namespace game::ui
using MappinsContainerController = game::ui::MappinsContainerController;
} // namespace RED4ext
