#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/redTagList.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(red::TagList, 0x10);
using redTagList = red::TagList;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace red
{
struct TagList
{
    static constexpr const char* NAME = "redTagList";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> tags; // 00
};
RED4EXT_ASSERT_SIZE(TagList, 0x10);
} // namespace red
using redTagList = red::TagList;
} // namespace RED4ext
*/

// clang-format on
