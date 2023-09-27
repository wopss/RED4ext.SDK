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
    uint8_t unk1C8[0x288 - 0x1C8]; // 1C8
    game::PSMVision psmVision; // 288
    game::PSMCombat psmCombat; // 28C
    game::PSMZones psmZone; // 290
    GameplayTier tier; // 294
    uint8_t unk298[0x2E8 - 0x298]; // 298
};
RED4EXT_ASSERT_SIZE(MappinsContainerController, 0x2E8);
} // namespace game::ui
using gameuiMappinsContainerController = game::ui::MappinsContainerController;
using MappinsContainerController = game::ui::MappinsContainerController;
} // namespace RED4ext

// clang-format on
