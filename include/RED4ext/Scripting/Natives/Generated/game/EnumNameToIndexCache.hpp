#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EnumNameToIndexCache
{
    static constexpr const char* NAME = "gameEnumNameToIndexCache";
    static constexpr const char* ALIAS = "EnumNameToIndexCache";

    uint8_t unk00[0x30 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EnumNameToIndexCache, 0x30);
} // namespace game
using gameEnumNameToIndexCache = game::EnumNameToIndexCache;
using EnumNameToIndexCache = game::EnumNameToIndexCache;
} // namespace RED4ext

// clang-format on
