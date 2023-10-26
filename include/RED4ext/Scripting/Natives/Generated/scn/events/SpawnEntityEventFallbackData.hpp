#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/SpawnEntityEventCachedFallbackBone.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace scn::events
{
struct __declspec(align(0x10)) SpawnEntityEventFallbackData
{
    static constexpr const char* NAME = "scneventsSpawnEntityEventFallbackData";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId owner; // 00
    uint8_t unk04[0x10 - 0x4]; // 4
#pragma warning(suppress : 4324)
    alignas(16) StaticArray<scn::events::SpawnEntityEventCachedFallbackBone, 2> fallbackCachedBones; // 10
    Ref<anim::AnimSet> fallbackAnimset; // 80
    CName fallbackAnimationName; // 98
    float fallbackAnimTime; // A0
    uint8_t unkA4[0xB0 - 0xA4]; // A4
};
RED4EXT_ASSERT_SIZE(SpawnEntityEventFallbackData, 0xB0);
} // namespace scn::events
using scneventsSpawnEntityEventFallbackData = scn::events::SpawnEntityEventFallbackData;
} // namespace RED4ext

// clang-format on
