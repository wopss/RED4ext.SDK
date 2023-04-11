#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IIconAtlasManager.hpp>

namespace RED4ext
{
namespace ink
{
struct IconAtlasManager : ink::IIconAtlasManager
{
    static constexpr const char* NAME = "inkIconAtlasManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x40 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(IconAtlasManager, 0x40);
} // namespace ink
using inkIconAtlasManager = ink::IconAtlasManager;
} // namespace RED4ext

// clang-format on
