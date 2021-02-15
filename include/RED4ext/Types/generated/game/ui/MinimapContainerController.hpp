#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/ui/MappinsContainerController.hpp>
#include <RED4ext/Types/generated/ink/CacheWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/CanvasWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/MaskWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiMinimapContainerController";
    static constexpr const char* ALIAS = "MinimapContainerController";

    uint8_t unk290[0x310 - 0x290]; // 290
    float visionRadiusVehicle; // 310
    float visionRadiusCombat; // 314
    float visionRadiusQuestArea; // 318
    float visionRadiusSecurityArea; // 31C
    float visionRadiusInterior; // 320
    float visionRadiusExterior; // 324
    ink::CompoundWidgetReference clampedMappinContainer; // 328
    ink::CompoundWidgetReference unclampedMappinContainer; // 340
    ink::CacheWidgetReference worldGeometryCache; // 358
    ink::CanvasWidgetReference worldGeometryContainer; // 370
    ink::WidgetReference playerIconWidget; // 388
    ink::WidgetReference compassWidget; // 3A0
    ink::MaskWidgetReference maskWidget; // 3B8
    CName geometryLibraryID; // 3D0
    uint8_t unk3D8[0x420 - 0x3D8]; // 3D8
    ink::CompoundWidgetReference timeDisplayWidget; // 420
};
RED4EXT_ASSERT_SIZE(MinimapContainerController, 0x438);
} // namespace game::ui
using MinimapContainerController = game::ui::MinimapContainerController;
} // namespace RED4ext
