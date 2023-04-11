#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world
{
struct Node : ISerializable
{
    static constexpr const char* NAME = "worldNode";
    static constexpr const char* ALIAS = NAME;

    bool isVisibleInGame; // 30
    bool isHostOnly; // 31
    uint8_t unk32[0x38 - 0x32]; // 32
};
RED4EXT_ASSERT_SIZE(Node, 0x38);
} // namespace world
using worldNode = world::Node;
} // namespace RED4ext

// clang-format on
