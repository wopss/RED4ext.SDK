#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/BaseItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItem : effect::BaseItem
{
    static constexpr const char* NAME = "effectTrackItem";
    static constexpr const char* ALIAS = NAME;

    float timeBegin; // 30
    float timeDuration; // 34
    CRUID ruid; // 38
    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TrackItem, 0x48);
} // namespace effect
using effectTrackItem = effect::TrackItem;
} // namespace RED4ext

// clang-format on
