#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct ItemPositionProvider
{
    static constexpr const char* NAME = "inkItemPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ItemPositionProvider, 0x8);
} // namespace ink
using inkItemPositionProvider = ink::ItemPositionProvider;
} // namespace RED4ext

// clang-format on
