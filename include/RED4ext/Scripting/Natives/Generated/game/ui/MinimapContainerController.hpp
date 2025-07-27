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

    uint8_t unk340[0x4C0 - 0x340]; // 340
    Handle<game::MinimapSettings> settings; // 4C0
    ink::CompoundWidgetReference clampedMappinContainer; // 4D0
    ink::CompoundWidgetReference unclampedMappinContainer; // 4E8
    ink::CacheWidgetReference worldGeometryCache; // 500
    ink::CanvasWidgetReference worldGeometryContainer; // 518
    ink::WidgetReference playerIconWidget; // 530
    ink::WidgetReference compassWidget; // 548
    ink::MaskWidgetReference maskWidget; // 560
    CName geometryLibraryID; // 578
    uint8_t unk580[0x5E0 - 0x580]; // 580
    ink::CompoundWidgetReference timeDisplayWidget; // 5E0
};
RED4EXT_ASSERT_SIZE(MinimapContainerController, 0x5F8);
} // namespace game::ui
using gameuiMinimapContainerController = game::ui::MinimapContainerController;
using MinimapContainerController = game::ui::MinimapContainerController;
} // namespace RED4ext

// clang-format on
