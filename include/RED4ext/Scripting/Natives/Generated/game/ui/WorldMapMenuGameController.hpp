#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/NewMappinID.hpp>
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
struct __declspec(align(0x10)) WorldMapMenuGameController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiWorldMapMenuGameController";
    static constexpr const char* ALIAS = "WorldMapMenuGameController";

    uint8_t unk340[0x368 - 0x340]; // 340
    WeakHandle<game::ui::BaseWorldMapMappinController> selectedMappin; // 368
    uint8_t unk378[0x3B0 - 0x378]; // 378
    game::NewMappinID delamainTaxiMappinID; // 3B0
    uint8_t unk3B8[0x3D8 - 0x3B8]; // 3B8
    bool isZoomToMappinEnabled; // 3D8
    uint8_t unk3D9[0x420 - 0x3D9]; // 3D9
    bool canChangeCustomFilter; // 420
    uint8_t unk421[0x4A0 - 0x421]; // 421
    TweakDBID settingsRecordID; // 4A0
    CName entityPreviewLibraryID; // 4A8
    ink::CompoundWidgetReference entityPreviewSpawnContainer; // 4B0
    ink::CompoundWidgetReference floorPlanSpawnContainer; // 4C8
    ink::WidgetReference compassWidget; // 4E0
    ink::CompoundWidgetReference tooltipContainer; // 4F8
    ink::Margin tooltipOffset; // 510
    ink::Margin tooltipDistrictOffset; // 520
    ink::CompoundWidgetReference districtsContainer; // 530
    ink::CompoundWidgetReference subdistrictsContainer; // 548
    bool playerOnTop; // 560
    uint8_t unk561[0x568 - 0x561]; // 561
    ink::CompoundWidgetReference mappinOutlinesContainer; // 568
    ink::CompoundWidgetReference groupOutlinesContainer; // 580
    uint8_t unk598[0x5D8 - 0x598]; // 598
    game::data::District hoveredDistrict; // 5D8
    game::data::District hoveredSubDistrict; // 5DC
    game::data::District selectedDistrict; // 5E0
    uint8_t unk5E4[0x5EC - 0x5E4]; // 5E4
    game::ui::EWorldMapDistrictView districtView; // 5EC
    uint8_t unk5F0[0x6C0 - 0x5F0]; // 5F0
};
RED4EXT_ASSERT_SIZE(WorldMapMenuGameController, 0x6C0);
} // namespace game::ui
using gameuiWorldMapMenuGameController = game::ui::WorldMapMenuGameController;
using WorldMapMenuGameController = game::ui::WorldMapMenuGameController;
} // namespace RED4ext

// clang-format on
