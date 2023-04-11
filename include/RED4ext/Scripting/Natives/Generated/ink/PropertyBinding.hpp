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
struct PropertyBinding
{
    static constexpr const char* NAME = "inkPropertyBinding";
    static constexpr const char* ALIAS = NAME;

    CName propertyName; // 00
    CName stylePath; // 08
    uint8_t unk10[0x38 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(PropertyBinding, 0x38);
} // namespace ink
using inkPropertyBinding = ink::PropertyBinding;
} // namespace RED4ext

// clang-format on
