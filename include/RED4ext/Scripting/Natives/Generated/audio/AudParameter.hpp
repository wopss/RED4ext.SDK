#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ESoundCurveType.hpp>

namespace RED4ext
{
namespace audio
{
struct AudParameter
{
    static constexpr const char* NAME = "audioAudParameter";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    CName name; // 08
    float value; // 10
    audio::ESoundCurveType enterCurveType; // 14
    float enterCurveTime; // 18
    audio::ESoundCurveType exitCurveType; // 1C
    float exitCurveTime; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(AudParameter, 0x28);
} // namespace audio
using audioAudParameter = audio::AudParameter;
} // namespace RED4ext

// clang-format on
