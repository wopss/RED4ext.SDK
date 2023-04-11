#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace ink
{
struct StylePropertyReference
{
    static constexpr const char* NAME = "inkStylePropertyReference";
    static constexpr const char* ALIAS = NAME;

    CName referencedPath; // 00
};
RED4EXT_ASSERT_SIZE(StylePropertyReference, 0x8);
} // namespace ink
using inkStylePropertyReference = ink::StylePropertyReference;
} // namespace RED4ext

// clang-format on
