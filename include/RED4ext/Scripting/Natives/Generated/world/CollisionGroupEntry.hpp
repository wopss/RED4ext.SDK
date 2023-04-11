#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct CollisionGroupEntry
{
    static constexpr const char* NAME = "worldCollisionGroupEntry";
    static constexpr const char* ALIAS = NAME;

    NodeRef neRef; // 00
    bool Reversed; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(CollisionGroupEntry, 0x10);
} // namespace world
using worldCollisionGroupEntry = world::CollisionGroupEntry;
} // namespace RED4ext

// clang-format on
