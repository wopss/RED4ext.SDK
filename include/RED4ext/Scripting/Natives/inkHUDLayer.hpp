#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/JobQueue.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FullScreenLayer.hpp>

namespace RED4ext::ink
{
struct HudWidgetSpawnEntry;
struct HudEntriesResource;
struct HUDLayerDefinition;

struct __declspec(align(0x10)) HUDLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkHUDLayer";
    static constexpr const char* ALIAS = NAME;

    DynArray<HudWidgetSpawnEntry> entries; // 150
    uint64_t sceneTier;                    // 160
    uint32_t gameContext;                  // 168
    Ref<HudEntriesResource> resource;      // 170
    HUDLayerDefinition* definition;        // 188
    JobHandle spawningJob;                 // 190
    SharedSpinLock spawningLock;           // 198
    uint8_t unk199[0x200 - 0x199];         // 199
};
RED4EXT_ASSERT_SIZE(HUDLayer, 0x200);
RED4EXT_ASSERT_OFFSET(HUDLayer, entries, 0x150);
RED4EXT_ASSERT_OFFSET(HUDLayer, definition, 0x188);
RED4EXT_ASSERT_OFFSET(HUDLayer, spawningLock, 0x198);
} // namespace RED4ext::ink
