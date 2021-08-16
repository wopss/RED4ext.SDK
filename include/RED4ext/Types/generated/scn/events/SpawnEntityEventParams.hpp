#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/PerformerId.hpp>
#include <RED4ext/Types/generated/scn/events/SpawnEntityEventCachedFallbackBone.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace scn::events { 
struct SpawnEntityEventParams
{
    static constexpr const char* NAME = "scneventsSpawnEntityEventParams";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 00
    scn::PerformerId referencePerformer; // 04
    TweakDBID referencePerformerSlotId; // 08
    TweakDBID referencePerformerItemId; // 10
    uint8_t unk18[0x20 - 0x18]; // 18
    alignas(16) StaticArray<scn::events::SpawnEntityEventCachedFallbackBone, 2> fallbackCachedBones; // 20
    Ref<anim::AnimSet> fallbackAnimset; // 90
    CName fallbackAnimationName; // A8
    float fallbackAnimTime; // B0
    uint8_t unkB4[0xC0 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(SpawnEntityEventParams, 0xC0);
} // namespace scn::events
} // namespace RED4ext
