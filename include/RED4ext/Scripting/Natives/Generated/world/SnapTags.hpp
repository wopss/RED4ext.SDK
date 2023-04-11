#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace world
{
struct SnapTags
{
    static constexpr const char* NAME = "worldSnapTags";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> includeTags; // 00
    DynArray<CName> excludeTags; // 10
};
RED4EXT_ASSERT_SIZE(SnapTags, 0x20);
} // namespace world
using worldSnapTags = world::SnapTags;
} // namespace RED4ext

// clang-format on
