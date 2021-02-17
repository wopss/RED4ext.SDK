#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/ui/RoadEditorSegment.hpp>
#include <RED4ext/Types/generated/game/ui/SideScrollerMiniGameLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct QuadRacerLogicController : game::ui::SideScrollerMiniGameLogicController
{
    static constexpr const char* NAME = "gameuiQuadRacerLogicController";
    static constexpr const char* ALIAS = "QuadRacerLogicController";

    float endgameDelay; // 118
    float roadWidth; // 11C
    float segmentLength; // 120
    float baseMultiplicatorScale; // 124
    uint32_t segmentDetails; // 128
    float centrifugalForce; // 12C
    float backgroundSpeed; // 130
    float backgroundStitch; // 134
    int32_t carDistanceOfView; // 138
    int32_t scorePerMeter; // 13C
    int32_t scorePerExtraSecond; // 140
    int32_t playerSegmentOffset; // 144
    uint32_t drawDistance; // 148
    uint32_t colorBlindDrawDistance; // 14C
    float cameraFov; // 150
    float cameraHeight; // 154
    uint8_t unk158[0x15C - 0x158]; // 158
    float defaultMaxSpeed; // 15C
    float nitroMaxSpeed; // 160
    float offRoadLimit; // 164
    float acceleration; // 168
    float breaking; // 16C
    float deceleration; // 170
    float offRoadDeceleration; // 174
    float bonusTime; // 178
    uint8_t unk17C[0x180 - 0x17C]; // 17C
    CName checkpointLibraryName; // 180
    float timeToPassCheckpoint; // 188
    float startTime; // 18C
    CName backgroundLibraryName; // 190
    CName roadLibraryName; // 198
    uint8_t unk1A0[0x1F8 - 0x1A0]; // 1A0
    DynArray<game::ui::RoadEditorSegment> road; // 1F8
    uint8_t unk208[0x220 - 0x208]; // 208
    ink::WidgetReference skyWidget; // 220
    uint8_t unk238[0x250 - 0x238]; // 238
};
RED4EXT_ASSERT_SIZE(QuadRacerLogicController, 0x250);
} // namespace game::ui
using QuadRacerLogicController = game::ui::QuadRacerLogicController;
} // namespace RED4ext
