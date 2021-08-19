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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk138[0x150 - 0x138]; // 138
    ink::WidgetPath spawnContainerPath; // 150
    uint8_t unk160[0x170 - 0x160]; // 160
    ink::LinePatternWidgetReference gpsQuestPathWidget; // 170
    ink::LinePatternWidgetReference gpsPlayerTrackedPathWidget; // 188
    uint8_t unk1A0[0x260 - 0x1A0]; // 1A0
    game::PSMVision psmVision; // 260
    game::PSMCombat psmCombat; // 264
    game::PSMZones psmZone; // 268
    GameplayTier tier; // 26C
    uint8_t unk270[0x2C0 - 0x270]; // 270
};
RED4EXT_ASSERT_SIZE(MappinsContainerController, 0x2C0);
} // namespace game::ui
} // namespace RED4ext
