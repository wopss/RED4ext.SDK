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
struct INodeInstance : ISerializable
{
    static constexpr const char* NAME = "worldINodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x90 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(INodeInstance, 0x90);
} // namespace world
using worldINodeInstance = world::INodeInstance;
} // namespace RED4ext

// clang-format on
