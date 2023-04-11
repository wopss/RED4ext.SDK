#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace mesh
{
struct DestructionBond
{
    static constexpr const char* NAME = "meshDestructionBond";
    static constexpr const char* ALIAS = NAME;

    uint16_t bondIndex; // 00
    uint8_t bondHealth; // 02
    uint8_t unk03[0x4 - 0x3]; // 3
};
RED4EXT_ASSERT_SIZE(DestructionBond, 0x4);
} // namespace mesh
using meshDestructionBond = mesh::DestructionBond;
} // namespace RED4ext

// clang-format on
