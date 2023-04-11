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
struct NullIconAtlas : ink::IIconAtlas
{
    static constexpr const char* NAME = "inkNullIconAtlas";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NullIconAtlas, 0x40);
} // namespace ink
using inkNullIconAtlas = ink::NullIconAtlas;
} // namespace RED4ext

// clang-format on
