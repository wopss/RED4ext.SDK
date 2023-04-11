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
struct AmbientPaletteEntry
{
    static constexpr const char* NAME = "audioAmbientPaletteEntry";
    static constexpr const char* ALIAS = NAME;

    CName brushCategory; // 00
};
RED4EXT_ASSERT_SIZE(AmbientPaletteEntry, 0x8);
} // namespace audio
using audioAmbientPaletteEntry = audio::AmbientPaletteEntry;
} // namespace RED4ext

// clang-format on
