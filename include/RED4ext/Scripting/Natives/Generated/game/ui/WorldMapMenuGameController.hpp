#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/District.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EWorldMapDistrictView.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinsContainerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { struct BaseWorldMapMappinController; }

namespace game::ui { 
struct WorldMapMenuGameController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiWorldMapMenuGameController";
    static constexpr const char* ALIAS = "WorldMapMenuGameController";

    uint8_t unk2D0[0x2F8 - 0x2D0]; // 2D0
    WeakHandle<game::ui::BaseWorldMapMappinController> selectedMappin; // 2F8
    uint8_t unk308[0x350 - 0x308]; // 308
    bool isZoomToMappinEnabled; // 350
    uint8_t unk351[0x398 - 0x351]; // 351
    bool canChangeCustomFilter; // 398
    uint8_t unk399[0x40C - 0x399]; // 399
    TweakDBID settingsRecordID; // 40C
    uint8_t unk414[0x418 - 0x414]; // 414
    CName entityPreviewLibraryID; // 418
    ink::CompoundWidgetReference entityPreviewSpawnContainer; // 420
    ink::CompoundWidgetReference floorPlanSpawnContainer; // 438
    ink::WidgetReference compassWidget; // 450
    ink::CompoundWidgetReference tooltipContainer; // 468
    ink::Margin tooltipOffset; // 480
    ink::Margin tooltipDistrictOffset; // 490
    ink::CompoundWidgetReference districtsContainer; // 4A0
    ink::CompoundWidgetReference subdistrictsContainer; // 4B8
    bool playerOnTop; // 4D0
    uint8_t unk4D1[0x4D8 - 0x4D1]; // 4D1
    ink::CompoundWidgetReference mappinOutlinesContainer; // 4D8
    ink::CompoundWidgetReference groupOutlinesContainer; // 4F0
    uint8_t unk508[0x548 - 0x508]; // 508
    game::data::District hoveredDistrict; // 548
    game::data::District hoveredSubDistrict; // 54C
    game::data::District selectedDistrict; // 550
    uint8_t unk554[0x55C - 0x554]; // 554
    game::ui::EWorldMapDistrictView districtView; // 55C
    uint8_t unk560[0x630 - 0x560]; // 560
};
RED4EXT_ASSERT_SIZE(WorldMapMenuGameController, 0x630);
} // namespace game::ui
using WorldMapMenuGameController = game::ui::WorldMapMenuGameController;
} // namespace RED4ext
