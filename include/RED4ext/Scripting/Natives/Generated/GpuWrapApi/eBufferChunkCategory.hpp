#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace GpuWrapApi {
enum class eBufferChunkCategory : int8_t
{
    BCC_Staging = 0,
    BCC_Vertex = 1,
    BCC_VertexUAV = 2,
    BCC_Index16Bit = 3,
    BCC_Index32Bit = 4,
    BCC_VertexIndex16Bit = 5,
    BCC_Constant = 6,
    BCC_TypedUAV = 7,
    BCC_Structured = 8,
    BCC_StructuredUAV = 9,
    BCC_StructuredAppendUAV = 10,
    BCC_IndirectUAV = 11,
    BCC_Index16BitUAV = 12,
    BCC_Raw = 13,
    BCC_ShaderTable = 14,
    BCC_Invalid = 15,
};
} // namespace GpuWrapApi
using GpuWrapApieBufferChunkCategory = GpuWrapApi::eBufferChunkCategory;
} // namespace RED4ext

// clang-format on
