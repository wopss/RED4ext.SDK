#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/inkHudWidgetSpawnEntry.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ink::HudWidgetSpawnEntry, 0x130);
using inkHudWidgetSpawnEntry = ink::HudWidgetSpawnEntry;
} // namespace RED4ext

/*
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

namespace ink
{
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
    bool ignoreHudSafezones; // A1
    bool ignoreHudScaleOverride; // A2
    uint8_t unkA3[0xA4 - 0xA3]; // A3
    float hudScalingInterpolationValue; // A4
    ink::Margin hudScalingMarginCorrection; // A8
    uint8_t unkB8[0x127 - 0xB8]; // B8
    bool affectedByGlitchEffect; // 127
    bool affectedByBlackwallEffect; // 128
    bool spawnBeforeSlots; // 129
    uint8_t unk12A[0x130 - 0x12A]; // 12A
};
RED4EXT_ASSERT_SIZE(HudWidgetSpawnEntry, 0x130);
} // namespace ink
using inkHudWidgetSpawnEntry = ink::HudWidgetSpawnEntry;
} // namespace RED4ext
*/

// clang-format on
