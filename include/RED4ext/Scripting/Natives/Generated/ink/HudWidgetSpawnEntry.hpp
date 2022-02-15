#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/Context.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EAnchor.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SpawnMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetSlotAttachmentParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ui/ContextVisibility.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink { 
struct HudWidgetSpawnEntry
{
    static constexpr const char* NAME = "inkHudWidgetSpawnEntry";
    static constexpr const char* ALIAS = NAME;

    CName hudEntryName; // 00
    bool enabled; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
    world::ui::ContextVisibility contextVisibility; // 10
    game::ui::Context gameContextVisibility; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    ink::SpawnMode spawnMode; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
    Ref<ink::WidgetLibraryResource> widgetResource; // 28
    ink::EAnchor anchorPlace; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    Vector2 anchorPoint; // 44
    ink::Margin margins; // 4C
    bool attachToSlot; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    ink::WidgetSlotAttachmentParams slotParams; // 60
    bool useSeparateWindow; // A0
    uint8_t unkA1[0x117 - 0xA1]; // A1
    bool affectedByGlitchEffect; // 117
    bool spawnBeforeSlots; // 118
    uint8_t unk119[0x120 - 0x119]; // 119
};
RED4EXT_ASSERT_SIZE(HudWidgetSpawnEntry, 0x120);
} // namespace ink
} // namespace RED4ext
