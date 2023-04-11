#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct SharedDataBuffer : ISerializable
{
    static constexpr const char* NAME = "worldSharedDataBuffer";
    static constexpr const char* ALIAS = NAME;

    DataBuffer buffer; // 30
};
RED4EXT_ASSERT_SIZE(SharedDataBuffer, 0x58);
} // namespace world
using worldSharedDataBuffer = world::SharedDataBuffer;
} // namespace RED4ext

// clang-format on
