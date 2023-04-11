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
struct MaterialOverride
{
    static constexpr const char* NAME = "audioMaterialOverride";
    static constexpr const char* ALIAS = NAME;

    CName base; // 00
    CName override; // 08
};
RED4EXT_ASSERT_SIZE(MaterialOverride, 0x10);
} // namespace audio
using audioMaterialOverride = audio::MaterialOverride;
} // namespace RED4ext

// clang-format on
