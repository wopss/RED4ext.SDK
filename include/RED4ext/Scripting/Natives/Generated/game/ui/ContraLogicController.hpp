#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameLogicControllerAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ContraLogicController : game::ui::SideScrollerMiniGameLogicControllerAdvanced
{
    static constexpr const char* NAME = "gameuiContraLogicController";
    static constexpr const char* ALIAS = "ContraLogicController";

    float playerSpawnHeight; // 148
    uint8_t unk14C[0x150 - 0x14C]; // 14C
    CName mainMenuScreenLibraryName; // 150
    CName scoreboardScreenLibraryName; // 158
    CName uiLayerName; // 160
    CName gameLayerName; // 168
    CName platformLayerName; // 170
    CName backgroundLayerName; // 178
    CName jumpKey; // 180
    CName goDownKey; // 188
    CName goLeftKey; // 190
    CName goRightKey; // 198
    CName lieDownKey; // 1A0
    CName shootKey; // 1A8
    CName submitKey; // 1B0
    float axisDeadZone; // 1B8
    uint8_t unk1BC[0x1C0 - 0x1BC]; // 1BC
    CName moveXAxis; // 1C0
    CName moveYAxis; // 1C8
    CName shootTriggerName; // 1D0
    uint8_t unk1D8[0x1F0 - 0x1D8]; // 1D8
    CName tileLibraryName; // 1F0
    CName platformLibraryName; // 1F8
    CName platformTexturePartName; // 200
    CName RoadTexturePartName; // 208
    float middlePlatformMinDistance; // 210
    float middlePlatformMaxDistance; // 214
    float topPlatformPosition; // 218
    float bottomPlatformPosition; // 21C
    CName fenceLibraryName; // 220
    float fenceSpawnDistance; // 228
    uint8_t unk22C[0x250 - 0x22C]; // 22C
};
RED4EXT_ASSERT_SIZE(ContraLogicController, 0x250);
} // namespace game::ui
using ContraLogicController = game::ui::ContraLogicController;
} // namespace RED4ext
