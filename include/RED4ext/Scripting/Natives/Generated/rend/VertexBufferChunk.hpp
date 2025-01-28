#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/VertexLayoutDesc.hpp>

namespace RED4ext
{
namespace rend
{
struct VertexBufferChunk
{
    static constexpr const char* NAME = "rendVertexBufferChunk";
    static constexpr const char* ALIAS = NAME;

    GpuWrapApi::VertexLayoutDesc vertexLayout; // 00
    StaticArray<uint32_t, 5> byteOffsets; // B8
};
RED4EXT_ASSERT_SIZE(VertexBufferChunk, 0xD0);
} // namespace rend
using rendVertexBufferChunk = rend::VertexBufferChunk;
} // namespace RED4ext

// clang-format on
