#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackBase.hpp>

namespace RED4ext
{
namespace effect { struct TrackBase; }

namespace effect
{
struct TrackGroup : effect::TrackBase
{
    static constexpr const char* NAME = "effectTrackGroup";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<effect::TrackBase>> tracks; // 30
    CName componentName; // 40
};
RED4EXT_ASSERT_SIZE(TrackGroup, 0x48);
} // namespace effect
using effectTrackGroup = effect::TrackGroup;
} // namespace RED4ext

// clang-format on
