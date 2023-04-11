#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct AudEventStruct
{
    static constexpr const char* NAME = "audioAudEventStruct";
    static constexpr const char* ALIAS = NAME;

    CName event; // 00
};
RED4EXT_ASSERT_SIZE(AudEventStruct, 0x8);
} // namespace audio
using audioAudEventStruct = audio::AudEventStruct;
} // namespace RED4ext

// clang-format on
