#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinsContainerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CacheWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CanvasWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MaskWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiMinimapContainerController";
    static constexpr const char* ALIAS = "MinimapContainerController";

    uint8_t unk2D0[0x360 - 0x2D0]; // 2D0
    float visionRadiusVehicle; // 360
    float visionRadiusCombat; // 364
    float visionRadiusQuestArea; // 368
    float visionRadiusSecurityArea; // 36C
    float visionRadiusInterior; // 370
    float visionRadiusExterior; // 374
    ink::CompoundWidgetReference clampedMappinContainer; // 378
    ink::CompoundWidgetReference unclampedMappinContainer; // 390
    ink::CacheWidgetReference worldGeometryCache; // 3A8
    ink::CanvasWidgetReference worldGeometryContainer; // 3C0
    ink::WidgetReference playerIconWidget; // 3D8
    ink::WidgetReference compassWidget; // 3F0
    ink::MaskWidgetReference maskWidget; // 408
    CName geometryLibraryID; // 420
    uint8_t unk428[0x470 - 0x428]; // 428
    ink::CompoundWidgetReference timeDisplayWidget; // 470
};
RED4EXT_ASSERT_SIZE(MinimapContainerController, 0x488);
} // namespace game::ui
using MinimapContainerController = game::ui::MinimapContainerController;
} // namespace RED4ext
