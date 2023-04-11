#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent
{
struct EntityRequestComponentsInterface
{
    static constexpr const char* NAME = "entEntityRequestComponentsInterface";
    static constexpr const char* ALIAS = "EntityRequestComponentsInterface";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EntityRequestComponentsInterface, 0x8);
} // namespace ent
using entEntityRequestComponentsInterface = ent::EntityRequestComponentsInterface;
using EntityRequestComponentsInterface = ent::EntityRequestComponentsInterface;
} // namespace RED4ext

// clang-format on
