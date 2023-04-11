#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleNpcOcclusionMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioVehicleNpcOcclusionMetadata";
    static constexpr const char* ALIAS = NAME;

    bool void; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(VehicleNpcOcclusionMetadata, 0x40);
} // namespace audio
using audioVehicleNpcOcclusionMetadata = audio::VehicleNpcOcclusionMetadata;
} // namespace RED4ext

// clang-format on
