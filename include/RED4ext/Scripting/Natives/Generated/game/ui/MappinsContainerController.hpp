#pragma once

// clang-format off

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
namespace game::ui
{
struct MappinsContainerController : game::ui::ProjectedHUDGameController
{
    static constexpr const char* NAME = "gameuiMappinsContainerController";
    static constexpr const char* ALIAS = "MappinsContainerController";

    uint8_t unk160[0x178 - 0x160]; // 160
    ink::WidgetPath spawnContainerPath; // 178
    uint8_t unk188[0x198 - 0x188]; // 188
    ink::LinePatternWidgetReference gpsQuestPathWidget; // 198
    ink::LinePatternWidgetReference gpsPlayerTrackedPathWidget; // 1B0
    ink::LinePatternWidgetReference gpsDelamainPathWidget; // 1C8
    ink::LinePatternWidgetReference autodrivePathWidget; // 1E0
    uint8_t unk1F8[0x2E0 - 0x1F8]; // 1F8
    game::PSMVision psmVision; // 2E0
    game::PSMCombat psmCombat; // 2E4
    game::PSMZones psmZone; // 2E8
    GameplayTier tier; // 2EC
    uint8_t unk2F0[0x340 - 0x2F0]; // 2F0
};
RED4EXT_ASSERT_SIZE(MappinsContainerController, 0x340);
} // namespace game::ui
using gameuiMappinsContainerController = game::ui::MappinsContainerController;
using MappinsContainerController = game::ui::MappinsContainerController;
} // namespace RED4ext

// clang-format on
