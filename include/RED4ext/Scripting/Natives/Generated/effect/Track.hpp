#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackBase.hpp>

namespace RED4ext
{
namespace effect { struct TrackItem; }

namespace effect
{
struct Track : effect::TrackBase
{
    static constexpr const char* NAME = "effectTrack";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<effect::TrackItem>> items; // 30
};
RED4EXT_ASSERT_SIZE(Track, 0x40);
} // namespace effect
using effectTrack = effect::Track;
} // namespace RED4ext

// clang-format on
