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
struct AuxiliaryMetadata
{
    static constexpr const char* NAME = "audioAuxiliaryMetadata";
    static constexpr const char* ALIAS = NAME;

    CName physicalPropSettings; // 00
};
RED4EXT_ASSERT_SIZE(AuxiliaryMetadata, 0x8);
} // namespace audio
using audioAuxiliaryMetadata = audio::AuxiliaryMetadata;
} // namespace RED4ext

// clang-format on
