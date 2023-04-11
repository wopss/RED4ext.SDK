#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct GroupingShapeClassifierMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioGroupingShapeClassifierMetadata";
    static constexpr const char* ALIAS = NAME;

    bool useAngle; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    float minGroupSize; // 3C
    float maxGroupSize; // 40
    float minGroupAngleSpread; // 44
    float maxGroupAngleSpread; // 48
    bool floorLimit; // 4C
    bool ceilingLimit; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
    CName minDistanceLimit; // 50
    CName maxDistanceLimit; // 58
    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(GroupingShapeClassifierMetadata, 0x78);
} // namespace audio
using audioGroupingShapeClassifierMetadata = audio::GroupingShapeClassifierMetadata;
} // namespace RED4ext

// clang-format on
