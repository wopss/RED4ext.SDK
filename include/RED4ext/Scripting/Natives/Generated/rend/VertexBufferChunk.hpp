#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApiVertexLayoutDesc.hpp>

namespace RED4ext
{
namespace rend { 
struct VertexBufferChunk
{
    static constexpr const char* NAME = "rendVertexBufferChunk";
    static constexpr const char* ALIAS = NAME;

    GpuWrapApiVertexLayoutDesc vertexLayout; // 00
    StaticArray<uint32_t, 5> byteOffsets; // B8
};
RED4EXT_ASSERT_SIZE(VertexBufferChunk, 0xD0);
} // namespace rend
} // namespace RED4ext
