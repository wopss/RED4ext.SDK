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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2C0[0x2E8 - 0x2C0]; // 2C0
    WeakHandle<game::ui::BaseWorldMapMappinController> selectedMappin; // 2E8
    uint8_t unk2F8[0x340 - 0x2F8]; // 2F8
    bool isZoomToMappinEnabled; // 340
    uint8_t unk341[0x388 - 0x341]; // 341
    bool canChangeCustomFilter; // 388
    uint8_t unk389[0x3EC - 0x389]; // 389
    TweakDBID settingsRecordID; // 3EC
    uint8_t unk3F4[0x3F8 - 0x3F4]; // 3F4
    CName entityPreviewLibraryID; // 3F8
    ink::CompoundWidgetReference entityPreviewSpawnContainer; // 400
    ink::CompoundWidgetReference floorPlanSpawnContainer; // 418
    ink::WidgetReference compassWidget; // 430
    ink::CompoundWidgetReference tooltipContainer; // 448
    ink::Margin tooltipOffset; // 460
    ink::Margin tooltipDistrictOffset; // 470
    ink::CompoundWidgetReference districtsContainer; // 480
    ink::CompoundWidgetReference subdistrictsContainer; // 498
    bool playerOnTop; // 4B0
    uint8_t unk4B1[0x4B8 - 0x4B1]; // 4B1
    ink::CompoundWidgetReference mappinOutlinesContainer; // 4B8
    ink::CompoundWidgetReference groupOutlinesContainer; // 4D0
    uint8_t unk4E8[0x528 - 0x4E8]; // 4E8
    game::data::District hoveredDistrict; // 528
    game::data::District hoveredSubDistrict; // 52C
    game::data::District selectedDistrict; // 530
    game::ui::EWorldMapDistrictView districtView; // 534
    uint8_t unk538[0x5D0 - 0x538]; // 538
};
RED4EXT_ASSERT_SIZE(WorldMapMenuGameController, 0x5D0);
} // namespace game::ui
} // namespace RED4ext
