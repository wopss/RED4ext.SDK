#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent
{
struct EntityGameInterface
{
    static constexpr const char* NAME = "entEntityGameInterface";
    static constexpr const char* ALIAS = "EntityGameInterface";

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EntityGameInterface, 0x10);
} // namespace ent
using entEntityGameInterface = ent::EntityGameInterface;
using EntityGameInterface = ent::EntityGameInterface;
} // namespace RED4ext

// clang-format on
