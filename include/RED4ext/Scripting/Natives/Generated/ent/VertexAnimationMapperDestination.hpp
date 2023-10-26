#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) VertexAnimationMapperDestination
{
    static constexpr const char* NAME = "entVertexAnimationMapperDestination";
    static constexpr const char* ALIAS = NAME;

    uint32_t vertexCustomSlotIndex; // 00
    uint8_t unk04[0x20 - 0x4]; // 4
};
RED4EXT_ASSERT_SIZE(VertexAnimationMapperDestination, 0x20);
} // namespace ent
using entVertexAnimationMapperDestination = ent::VertexAnimationMapperDestination;
} // namespace RED4ext

// clang-format on
