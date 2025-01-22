#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace GpuWrapApi {
enum class VertexPackingEStreamType : uint8_t
{
    ST_PerVertex = 0,
    ST_PerInstance = 1,
    ST_Max = 2,
    ST_Invalid = 255,
};
} // namespace GpuWrapApi
using GpuWrapApiVertexPackingEStreamType = GpuWrapApi::VertexPackingEStreamType;
} // namespace RED4ext

// clang-format on
