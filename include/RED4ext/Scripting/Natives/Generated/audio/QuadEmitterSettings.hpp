#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudEventStruct.hpp>

namespace RED4ext
{
namespace audio
{
struct QuadEmitterSettings
{
    static constexpr const char* NAME = "audioQuadEmitterSettings";
    static constexpr const char* ALIAS = NAME;

    Vector3 Offset; // 00
    float Radius; // 0C
    float Angle; // 10
    bool Enabled; // 14
    bool Interleaved; // 15
    uint8_t unk16[0x18 - 0x16]; // 16
    NativeArray<audio::AudEventStruct, 4> Events; // 18
};
RED4EXT_ASSERT_SIZE(QuadEmitterSettings, 0x38);
} // namespace audio
using audioQuadEmitterSettings = audio::QuadEmitterSettings;
} // namespace RED4ext

// clang-format on
