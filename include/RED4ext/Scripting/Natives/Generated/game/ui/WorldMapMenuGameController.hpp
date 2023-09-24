#pragma once

// clang-format off

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

namespace game::ui
{
struct WorldMapMenuGameController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiWorldMapMenuGameController";
    static constexpr const char* ALIAS = "WorldMapMenuGameController";

    uint8_t unk2E8[0x310 - 0x2E8]; // 2E8
    WeakHandle<game::ui::BaseWorldMapMappinController> selectedMappin; // 310
    uint8_t unk320[0x368 - 0x320]; // 320
    bool isZoomToMappinEnabled; // 368
    uint8_t unk369[0x3B0 - 0x369]; // 369
    bool canChangeCustomFilter; // 3B0
    uint8_t unk3B1[0x430 - 0x3B1]; // 3B1
    TweakDBID settingsRecordID; // 430
    CName entityPreviewLibraryID; // 438
    ink::CompoundWidgetReference entityPreviewSpawnContainer; // 440
    ink::CompoundWidgetReference floorPlanSpawnContainer; // 458
    ink::WidgetReference compassWidget; // 470
    ink::CompoundWidgetReference tooltipContainer; // 488
    ink::Margin tooltipOffset; // 4A0
    ink::Margin tooltipDistrictOffset; // 4B0
    ink::CompoundWidgetReference districtsContainer; // 4C0
    ink::CompoundWidgetReference subdistrictsContainer; // 4D8
    bool playerOnTop; // 4F0
    uint8_t unk4F1[0x4F8 - 0x4F1]; // 4F1
    ink::CompoundWidgetReference mappinOutlinesContainer; // 4F8
    ink::CompoundWidgetReference groupOutlinesContainer; // 510
    uint8_t unk528[0x568 - 0x528]; // 528
    game::data::District hoveredDistrict; // 568
    game::data::District hoveredSubDistrict; // 56C
    game::data::District selectedDistrict; // 570
    uint8_t unk574[0x57C - 0x574]; // 574
    game::ui::EWorldMapDistrictView districtView; // 57C
    uint8_t unk580[0x650 - 0x580]; // 580
};
RED4EXT_ASSERT_SIZE(WorldMapMenuGameController, 0x650);
} // namespace game::ui
using gameuiWorldMapMenuGameController = game::ui::WorldMapMenuGameController;
using WorldMapMenuGameController = game::ui::WorldMapMenuGameController;
} // namespace RED4ext

// clang-format on
