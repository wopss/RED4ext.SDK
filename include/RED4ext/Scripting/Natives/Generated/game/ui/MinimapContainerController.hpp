#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinsContainerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CacheWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CanvasWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MaskWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game { struct MinimapSettings; }

namespace game::ui
{
struct MinimapContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiMinimapContainerController";
    static constexpr const char* ALIAS = "MinimapContainerController";

    uint8_t unk2E8[0x450 - 0x2E8]; // 2E8
    Handle<game::MinimapSettings> settings; // 450
    ink::CompoundWidgetReference clampedMappinContainer; // 460
    ink::CompoundWidgetReference unclampedMappinContainer; // 478
    ink::CacheWidgetReference worldGeometryCache; // 490
    ink::CanvasWidgetReference worldGeometryContainer; // 4A8
    ink::WidgetReference playerIconWidget; // 4C0
    ink::WidgetReference compassWidget; // 4D8
    ink::MaskWidgetReference maskWidget; // 4F0
    CName geometryLibraryID; // 508
    uint8_t unk510[0x570 - 0x510]; // 510
    ink::CompoundWidgetReference timeDisplayWidget; // 570
};
RED4EXT_ASSERT_SIZE(MinimapContainerController, 0x588);
} // namespace game::ui
using gameuiMinimapContainerController = game::ui::MinimapContainerController;
using MinimapContainerController = game::ui::MinimapContainerController;
} // namespace RED4ext

// clang-format on
