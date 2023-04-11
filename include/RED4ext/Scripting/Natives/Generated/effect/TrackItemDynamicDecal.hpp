#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
struct IMaterial;

namespace effect
{
struct TrackItemDynamicDecal : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemDynamicDecal";
    static constexpr const char* ALIAS = NAME;

    Ref<IMaterial> material; // 48
    float fadeInTime; // 60
    float fadeOutTime; // 64
    float additionalRotation; // 68
    float width; // 6C
    float height; // 70
    bool randomRotation; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
};
RED4EXT_ASSERT_SIZE(TrackItemDynamicDecal, 0x78);
} // namespace effect
using effectTrackItemDynamicDecal = effect::TrackItemDynamicDecal;
} // namespace RED4ext

// clang-format on
