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

    uint8_t unk2E8[0x3E8 - 0x2E8]; // 2E8
    Handle<game::MinimapSettings> settings; // 3E8
    ink::CompoundWidgetReference clampedMappinContainer; // 3F8
    ink::CompoundWidgetReference unclampedMappinContainer; // 410
    ink::CacheWidgetReference worldGeometryCache; // 428
    ink::CanvasWidgetReference worldGeometryContainer; // 440
    ink::WidgetReference playerIconWidget; // 458
    ink::WidgetReference compassWidget; // 470
    ink::MaskWidgetReference maskWidget; // 488
    CName geometryLibraryID; // 4A0
    uint8_t unk4A8[0x508 - 0x4A8]; // 4A8
    ink::CompoundWidgetReference timeDisplayWidget; // 508
};
RED4EXT_ASSERT_SIZE(MinimapContainerController, 0x520);
} // namespace game::ui
using gameuiMinimapContainerController = game::ui::MinimapContainerController;
using MinimapContainerController = game::ui::MinimapContainerController;
} // namespace RED4ext

// clang-format on
