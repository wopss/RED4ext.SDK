#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemMetadata : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemMetadata";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TrackItemMetadata, 0x48);
} // namespace effect
using effectTrackItemMetadata = effect::TrackItemMetadata;
} // namespace RED4ext

// clang-format on
