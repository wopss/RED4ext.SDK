#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGameLogicControllerAdvanced.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ContraLogicController : game::ui::SideScrollerMiniGameLogicControllerAdvanced
{
    static constexpr const char* NAME = "gameuiContraLogicController";
    static constexpr const char* ALIAS = "ContraLogicController";

    float playerSpawnHeight; // 138
    uint8_t unk13C[0x140 - 0x13C]; // 13C
    CName mainMenuScreenLibraryName; // 140
    CName scoreboardScreenLibraryName; // 148
    CName uiLayerName; // 150
    CName gameLayerName; // 158
    CName platformLayerName; // 160
    CName backgroundLayerName; // 168
    CName jumpKey; // 170
    CName goDownKey; // 178
    CName goLeftKey; // 180
    CName goRightKey; // 188
    CName lieDownKey; // 190
    CName shootKey; // 198
    CName submitKey; // 1A0
    float axisDeadZone; // 1A8
    uint8_t unk1AC[0x1B0 - 0x1AC]; // 1AC
    CName moveXAxis; // 1B0
    CName moveYAxis; // 1B8
    CName shootTriggerName; // 1C0
    uint8_t unk1C8[0x1E0 - 0x1C8]; // 1C8
    CName tileLibraryName; // 1E0
    CName platformLibraryName; // 1E8
    CName platformTexturePartName; // 1F0
    CName RoadTexturePartName; // 1F8
    float middlePlatformMinDistance; // 200
    float middlePlatformMaxDistance; // 204
    float topPlatformPosition; // 208
    float bottomPlatformPosition; // 20C
    CName fenceLibraryName; // 210
    float fenceSpawnDistance; // 218
    uint8_t unk21C[0x240 - 0x21C]; // 21C
};
RED4EXT_ASSERT_SIZE(ContraLogicController, 0x240);
} // namespace game::ui
using ContraLogicController = game::ui::ContraLogicController;
} // namespace RED4ext
