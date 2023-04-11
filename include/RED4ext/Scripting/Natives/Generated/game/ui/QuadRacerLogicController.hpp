#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/RoadEditorSegment.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct QuadRacerLogicController : game::ui::SideScrollerMiniGameLogicController
{
    static constexpr const char* NAME = "gameuiQuadRacerLogicController";
    static constexpr const char* ALIAS = "QuadRacerLogicController";

    float endgameDelay; // 128
    float roadWidth; // 12C
    float segmentLength; // 130
    float baseMultiplicatorScale; // 134
    uint32_t segmentDetails; // 138
    float centrifugalForce; // 13C
    float backgroundSpeed; // 140
    float backgroundStitch; // 144
    int32_t carDistanceOfView; // 148
    int32_t scorePerMeter; // 14C
    int32_t scorePerExtraSecond; // 150
    int32_t playerSegmentOffset; // 154
    uint32_t drawDistance; // 158
    uint32_t colorBlindDrawDistance; // 15C
    float cameraFov; // 160
    float cameraHeight; // 164
    uint8_t unk168[0x16C - 0x168]; // 168
    float defaultMaxSpeed; // 16C
    float nitroMaxSpeed; // 170
    float offRoadLimit; // 174
    float acceleration; // 178
    float breaking; // 17C
    float deceleration; // 180
    float offRoadDeceleration; // 184
    float bonusTime; // 188
    uint8_t unk18C[0x190 - 0x18C]; // 18C
    CName checkpointLibraryName; // 190
    float timeToPassCheckpoint; // 198
    float startTime; // 19C
    CName backgroundLibraryName; // 1A0
    CName roadLibraryName; // 1A8
    uint8_t unk1B0[0x208 - 0x1B0]; // 1B0
    DynArray<game::ui::RoadEditorSegment> road; // 208
    uint8_t unk218[0x230 - 0x218]; // 218
    ink::WidgetReference skyWidget; // 230
    uint8_t unk248[0x260 - 0x248]; // 248
};
RED4EXT_ASSERT_SIZE(QuadRacerLogicController, 0x260);
} // namespace game::ui
using gameuiQuadRacerLogicController = game::ui::QuadRacerLogicController;
using QuadRacerLogicController = game::ui::QuadRacerLogicController;
} // namespace RED4ext

// clang-format on
