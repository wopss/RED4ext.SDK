#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IIconAtlas.hpp>

namespace RED4ext
{
namespace ink
{
struct IconAtlas : ink::IIconAtlas
{
    static constexpr const char* NAME = "inkIconAtlas";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x170 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IconAtlas, 0x170);
} // namespace ink
using inkIconAtlas = ink::IconAtlas;
} // namespace RED4ext

// clang-format on
