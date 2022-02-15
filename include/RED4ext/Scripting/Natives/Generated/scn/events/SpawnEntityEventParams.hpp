#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>

namespace RED4ext
{
namespace scn::events { 
struct SpawnEntityEventParams
{
    static constexpr const char* NAME = "scneventsSpawnEntityEventParams";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 00
    scn::PerformerId referencePerformer; // 04
    TweakDBID referencePerformerSlotId; // 08
    TweakDBID referencePerformerItemId; // 10
    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(SpawnEntityEventParams, 0x28);
} // namespace scn::events
} // namespace RED4ext
