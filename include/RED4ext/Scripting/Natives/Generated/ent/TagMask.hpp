#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace ent
{
struct TagMask
{
    static constexpr const char* NAME = "entTagMask";
    static constexpr const char* ALIAS = NAME;

    red::TagList hardTags; // 00
    red::TagList softTags; // 10
    red::TagList excludedTags; // 20
};
RED4EXT_ASSERT_SIZE(TagMask, 0x30);
} // namespace ent
using entTagMask = ent::TagMask;
} // namespace RED4ext

// clang-format on
