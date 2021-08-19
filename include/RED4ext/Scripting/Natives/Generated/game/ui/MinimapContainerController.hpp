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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2C0[0x350 - 0x2C0]; // 2C0
    float visionRadiusVehicle; // 350
    float visionRadiusCombat; // 354
    float visionRadiusQuestArea; // 358
    float visionRadiusSecurityArea; // 35C
    float visionRadiusInterior; // 360
    float visionRadiusExterior; // 364
    ink::CompoundWidgetReference clampedMappinContainer; // 368
    ink::CompoundWidgetReference unclampedMappinContainer; // 380
    ink::CacheWidgetReference worldGeometryCache; // 398
    ink::CanvasWidgetReference worldGeometryContainer; // 3B0
    ink::WidgetReference playerIconWidget; // 3C8
    ink::WidgetReference compassWidget; // 3E0
    ink::MaskWidgetReference maskWidget; // 3F8
    CName geometryLibraryID; // 410
    uint8_t unk418[0x460 - 0x418]; // 418
    ink::CompoundWidgetReference timeDisplayWidget; // 460
};
RED4EXT_ASSERT_SIZE(MinimapContainerController, 0x478);
} // namespace game::ui
} // namespace RED4ext
