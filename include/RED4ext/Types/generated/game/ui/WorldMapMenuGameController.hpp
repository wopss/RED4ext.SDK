#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/data/District.hpp>
#include <RED4ext/Types/generated/game/ui/EWorldMapDistrictView.hpp>
#include <RED4ext/Types/generated/game/ui/MappinsContainerController.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/Margin.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { struct BaseWorldMapMappinController; }

namespace game::ui { 
struct WorldMapMenuGameController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiWorldMapMenuGameController";
    static constexpr const char* ALIAS = "WorldMapMenuGameController";

    uint8_t unk290[0x2B8 - 0x290]; // 290
    WeakHandle<game::ui::BaseWorldMapMappinController> selectedMappin; // 2B8
    uint8_t unk2C8[0x310 - 0x2C8]; // 2C8
    bool isZoomToMappinEnabled; // 310
    uint8_t unk311[0x358 - 0x311]; // 311
    bool canChangeCustomFilter; // 358
    uint8_t unk359[0x3BC - 0x359]; // 359
    TweakDBID settingsRecordID; // 3BC
    uint8_t unk3C4[0x3C8 - 0x3C4]; // 3C4
    CName entityPreviewLibraryID; // 3C8
    ink::CompoundWidgetReference entityPreviewSpawnContainer; // 3D0
    ink::CompoundWidgetReference floorPlanSpawnContainer; // 3E8
    ink::WidgetReference compassWidget; // 400
    ink::CompoundWidgetReference tooltipContainer; // 418
    ink::Margin tooltipOffset; // 430
    ink::Margin tooltipDistrictOffset; // 440
    ink::CompoundWidgetReference districtsContainer; // 450
    ink::CompoundWidgetReference subdistrictsContainer; // 468
    bool playerOnTop; // 480
    uint8_t unk481[0x488 - 0x481]; // 481
    ink::CompoundWidgetReference mappinOutlinesContainer; // 488
    ink::CompoundWidgetReference groupOutlinesContainer; // 4A0
    uint8_t unk4B8[0x4F8 - 0x4B8]; // 4B8
    game::data::District hoveredDistrict; // 4F8
    game::data::District hoveredSubDistrict; // 4FC
    game::data::District selectedDistrict; // 500
    game::ui::EWorldMapDistrictView districtView; // 504
    uint8_t unk508[0x5A0 - 0x508]; // 508
};
RED4EXT_ASSERT_SIZE(WorldMapMenuGameController, 0x5A0);
} // namespace game::ui
using WorldMapMenuGameController = game::ui::WorldMapMenuGameController;
} // namespace RED4ext
