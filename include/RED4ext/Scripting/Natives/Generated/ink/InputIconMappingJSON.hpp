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
struct InputIconMappingJSON
{
    static constexpr const char* NAME = "inkInputIconMappingJSON";
    static constexpr const char* ALIAS = NAME;

    CName id; // 00
    CName part; // 08
    bool hold; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(InputIconMappingJSON, 0x18);
} // namespace ink
using inkInputIconMappingJSON = ink::InputIconMappingJSON;
} // namespace RED4ext

// clang-format on
