#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/SpawnEntityEventFallbackData.hpp>

namespace RED4ext
{
namespace scn::events
{
struct SpawnEntityEventParams
{
    static constexpr const char* NAME = "scneventsSpawnEntityEventParams";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 00
    scn::PerformerId referencePerformer; // 04
    TweakDBID referencePerformerSlotId; // 08
    TweakDBID referencePerformerItemId; // 10
    DynArray<scn::events::SpawnEntityEventFallbackData> fallbackData; // 18
};
RED4EXT_ASSERT_SIZE(SpawnEntityEventParams, 0x28);
} // namespace scn::events
using scneventsSpawnEntityEventParams = scn::events::SpawnEntityEventParams;
} // namespace RED4ext

// clang-format on
