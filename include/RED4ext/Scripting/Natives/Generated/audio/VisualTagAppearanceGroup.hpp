#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace audio
{
struct VisualTagAppearanceGroup
{
    static constexpr const char* NAME = "audioVisualTagAppearanceGroup";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> appearances; // 00
    DynArray<CName> visualTags; // 10
};
RED4EXT_ASSERT_SIZE(VisualTagAppearanceGroup, 0x20);
} // namespace audio
using audioVisualTagAppearanceGroup = audio::VisualTagAppearanceGroup;
} // namespace RED4ext

// clang-format on
