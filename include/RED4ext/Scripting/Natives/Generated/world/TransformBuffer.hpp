#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace world { struct SharedDataBuffer; }

namespace world
{
struct TransformBuffer
{
    static constexpr const char* NAME = "worldTransformBuffer";
    static constexpr const char* ALIAS = NAME;

    Handle<world::SharedDataBuffer> sharedDataBuffer; // 00
    uint32_t startIndex; // 10
    uint32_t numElements; // 14
};
RED4EXT_ASSERT_SIZE(TransformBuffer, 0x18);
} // namespace world
using worldTransformBuffer = world::TransformBuffer;
} // namespace RED4ext

// clang-format on
