#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameLogicControllerAdvanced.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerGameLogicController : game::ui::SideScrollerMiniGameLogicControllerAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerGameLogicController";
    static constexpr const char* ALIAS = "PanzerGameLogicController";

    uint8_t unk148[0x184 - 0x148]; // 148
    float gameOverDelay; // 184
    uint8_t unk188[0x190 - 0x188]; // 188
    CName mainMenuLibraryName; // 190
    CName scoreboardLibraryName; // 198
    CName panelsLayer; // 1A0
    CName gameLayer; // 1A8
    CName cloudsLayer; // 1B0
    CName backgroundLibraryName; // 1B8
    DynArray<CName> cloudsLibraryNames; // 1C0
    float minCloudSpawnInterval; // 1D0
    float maxCloudSpawnInterval; // 1D4
    float minCloudSpeed; // 1D8
    float maxCloudSpeed; // 1DC
    ink::TextWidgetReference scoreCounter; // 1E0
    ink::TextWidgetReference livesCounter; // 1F8
    CName moveUpKey; // 210
    CName moveDownKey; // 218
    CName moveLeftKey; // 220
    CName moveRightKey; // 228
    CName shootKey; // 230
    CName backKey; // 238
    CName submitKey; // 240
    float axisDeadZone; // 248
    uint8_t unk24C[0x250 - 0x24C]; // 24C
    CName moveXAxis; // 250
    CName moveYAxis; // 258
    CName shootAxis; // 260
    CName droneLibraryName; // 268
    float minDroneSpawnInterval; // 270
    float maxDroneSpawnInterval; // 274
    CName avLibraryName; // 278
    float minAvSpawnInterval; // 280
    float maxAvSpawnInterval; // 284
};
RED4EXT_ASSERT_SIZE(PanzerGameLogicController, 0x288);
} // namespace game::ui
using gameuiPanzerGameLogicController = game::ui::PanzerGameLogicController;
using PanzerGameLogicController = game::ui::PanzerGameLogicController;
} // namespace RED4ext

// clang-format on
