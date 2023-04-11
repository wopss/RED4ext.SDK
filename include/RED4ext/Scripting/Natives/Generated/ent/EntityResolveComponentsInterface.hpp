#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent
{
struct EntityResolveComponentsInterface
{
    static constexpr const char* NAME = "entEntityResolveComponentsInterface";
    static constexpr const char* ALIAS = "EntityResolveComponentsInterface";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EntityResolveComponentsInterface, 0x8);
} // namespace ent
using entEntityResolveComponentsInterface = ent::EntityResolveComponentsInterface;
using EntityResolveComponentsInterface = ent::EntityResolveComponentsInterface;
} // namespace RED4ext

// clang-format on
