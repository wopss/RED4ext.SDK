#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItemMetadata.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemLoopMarker : effect::TrackItemMetadata
{
    static constexpr const char* NAME = "effectTrackItemLoopMarker";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TrackItemLoopMarker, 0x48);
} // namespace effect
using effectTrackItemLoopMarker = effect::TrackItemLoopMarker;
} // namespace RED4ext

// clang-format on
