#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct IIconAtlasManager
{
    static constexpr const char* NAME = "inkIIconAtlasManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IIconAtlasManager, 0x8);
} // namespace ink
using inkIIconAtlasManager = ink::IIconAtlasManager;
} // namespace RED4ext

// clang-format on
