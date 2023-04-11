#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect
{
struct VisualComponentTrackItemPlayData : effect::TrackItemPlayData
{
    static constexpr const char* NAME = "effectVisualComponentTrackItemPlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VisualComponentTrackItemPlayData, 0x38);
} // namespace effect
using effectVisualComponentTrackItemPlayData = effect::VisualComponentTrackItemPlayData;
} // namespace RED4ext

// clang-format on
