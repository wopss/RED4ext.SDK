#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameplayTier.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMCombat.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMVision.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMZones.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ProjectedHUDGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LinePatternWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetPath.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MappinsContainerController : game::ui::ProjectedHUDGameController
{
    static constexpr const char* NAME = "gameuiMappinsContainerController";
    static constexpr const char* ALIAS = "MappinsContainerController";

    uint8_t unk148[0x160 - 0x148]; // 148
    ink::WidgetPath spawnContainerPath; // 160
    uint8_t unk170[0x180 - 0x170]; // 170
    ink::LinePatternWidgetReference gpsQuestPathWidget; // 180
    ink::LinePatternWidgetReference gpsPlayerTrackedPathWidget; // 198
    uint8_t unk1B0[0x270 - 0x1B0]; // 1B0
    game::PSMVision psmVision; // 270
    game::PSMCombat psmCombat; // 274
    game::PSMZones psmZone; // 278
    GameplayTier tier; // 27C
    uint8_t unk280[0x2D0 - 0x280]; // 280
};
RED4EXT_ASSERT_SIZE(MappinsContainerController, 0x2D0);
} // namespace game::ui
using MappinsContainerController = game::ui::MappinsContainerController;
} // namespace RED4ext
