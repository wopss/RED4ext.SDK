#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGameLogicControllerAdvanced.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerGameLogicController : game::ui::SideScrollerMiniGameLogicControllerAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerGameLogicController";
    static constexpr const char* ALIAS = "PanzerGameLogicController";

    uint8_t unk138[0x174 - 0x138]; // 138
    float gameOverDelay; // 174
    uint8_t unk178[0x180 - 0x178]; // 178
    CName mainMenuLibraryName; // 180
    CName scoreboardLibraryName; // 188
    CName panelsLayer; // 190
    CName gameLayer; // 198
    CName cloudsLayer; // 1A0
    CName backgroundLibraryName; // 1A8
    DynArray<CName> cloudsLibraryNames; // 1B0
    float minCloudSpawnInterval; // 1C0
    float maxCloudSpawnInterval; // 1C4
    float minCloudSpeed; // 1C8
    float maxCloudSpeed; // 1CC
    ink::TextWidgetReference scoreCounter; // 1D0
    ink::TextWidgetReference livesCounter; // 1E8
    CName moveUpKey; // 200
    CName moveDownKey; // 208
    CName moveLeftKey; // 210
    CName moveRightKey; // 218
    CName shootKey; // 220
    CName backKey; // 228
    CName submitKey; // 230
    float axisDeadZone; // 238
    uint8_t unk23C[0x240 - 0x23C]; // 23C
    CName moveXAxis; // 240
    CName moveYAxis; // 248
    CName shootAxis; // 250
    CName droneLibraryName; // 258
    float minDroneSpawnInterval; // 260
    float maxDroneSpawnInterval; // 264
    CName avLibraryName; // 268
    float minAvSpawnInterval; // 270
    float maxAvSpawnInterval; // 274
};
RED4EXT_ASSERT_SIZE(PanzerGameLogicController, 0x278);
} // namespace game::ui
using PanzerGameLogicController = game::ui::PanzerGameLogicController;
} // namespace RED4ext
