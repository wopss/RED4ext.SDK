#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct IDynamicCollisionRepresentation
{
    static constexpr const char* NAME = "worldIDynamicCollisionRepresentation";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IDynamicCollisionRepresentation, 0x8);
} // namespace world
using worldIDynamicCollisionRepresentation = world::IDynamicCollisionRepresentation;
} // namespace RED4ext

// clang-format on
