#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest
{
struct ComponentCollisionMapArrayElement
{
    static constexpr const char* NAME = "questComponentCollisionMapArrayElement";
    static constexpr const char* ALIAS = NAME;

    CName componentNameKey; // 00
    bool enableCollision; // 08
    bool enableQueries; // 09
    uint8_t unk0A[0x10 - 0xA]; // A
};
RED4EXT_ASSERT_SIZE(ComponentCollisionMapArrayElement, 0x10);
} // namespace quest
using questComponentCollisionMapArrayElement = quest::ComponentCollisionMapArrayElement;
} // namespace RED4ext

// clang-format on
