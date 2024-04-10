#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
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
struct DynamicTexture;

namespace ink
{
struct ImageWidget;
struct IWidgetController;
struct Widget;
struct WidgetLibraryResource;

struct HudWidgetSpawnEntry
{
    static constexpr const char* NAME = "inkHudWidgetSpawnEntry";
    static constexpr const char* ALIAS = NAME;

    CName hudEntryName;                             // 00
    bool enabled;                                   // 08
    uint8_t unk09[0x10 - 0x9];                      // 09
    world::ui::ContextVisibility contextVisibility; // 10
    game::ui::Context gameContextVisibility;        // 18
    uint8_t unk1C[0x20 - 0x1C];                     // 1C
    ink::SpawnMode spawnMode;                       // 20
    uint8_t unk24[0x28 - 0x24];                     // 24
    Ref<ink::WidgetLibraryResource> widgetResource; // 28
    ink::EAnchor anchorPlace;                       // 40
    uint8_t unk41[0x44 - 0x41];                     // 41
    Vector2 anchorPoint;                            // 44
    ink::Margin margins;                            // 4C
    bool attachToSlot;                              // 5C
    uint8_t unk5D[0x60 - 0x5D];                     // 5D
    ink::WidgetSlotAttachmentParams slotParams;     // 60
    bool useSeparateWindow;                         // A0
    bool ignoreHudSafezones;                        // A1
    bool ignoreHudScaleOverride;                    // A2
    uint8_t unkA3[0xA4 - 0xA3];                     // A3
    float hudScalingInterpolationValue;             // A4
    ink::Margin hudScalingMarginCorrection;         // A8
    Handle<DynamicTexture> slotTexture;             // B8
    Handle<VirtualWindow> window;                   // C8
    Handle<ImageWidget> slotWidget;                 // D8
    uint8_t unkE8[0xF8 - 0xE8];                     // E8
    Handle<Widget> rootWidget;                      // F8
    Handle<IWidgetController> gameController;       // 108
    uint8_t unk110[0x127 - 0x118];                  // 118
    bool affectedByGlitchEffect;                    // 127
    bool affectedByBlackwallEffect;                 // 128
    bool spawnBeforeSlots;                          // 129
    uint8_t unk12A[0x130 - 0x12A];                  // 12A
};
RED4EXT_ASSERT_SIZE(HudWidgetSpawnEntry, 0x130);
RED4EXT_ASSERT_OFFSET(HudWidgetSpawnEntry, window, 0xC8);
RED4EXT_ASSERT_OFFSET(HudWidgetSpawnEntry, rootWidget, 0xF8);
RED4EXT_ASSERT_OFFSET(HudWidgetSpawnEntry, gameController, 0x108);
RED4EXT_ASSERT_OFFSET(HudWidgetSpawnEntry, affectedByGlitchEffect, 0x127);
} // namespace ink
} // namespace RED4ext
