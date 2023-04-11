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
struct RenderProxyTransformBuffer
{
    static constexpr const char* NAME = "worldRenderProxyTransformBuffer";
    static constexpr const char* ALIAS = NAME;

    Handle<world::SharedDataBuffer> sharedDataBuffer; // 00
    uint32_t startIndex; // 10
    uint32_t numElements; // 14
};
RED4EXT_ASSERT_SIZE(RenderProxyTransformBuffer, 0x18);
} // namespace world
using worldRenderProxyTransformBuffer = world::RenderProxyTransformBuffer;
} // namespace RED4ext

// clang-format on
