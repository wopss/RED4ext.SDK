#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace GpuApi {
enum class eBufferUsageType : int8_t
{
    BUT_Default = 0,
    BUT_Immutable = 1,
    BUT_Readback = 2,
    BUT_Dynamic_Legacy = 3,
    BUT_Transient = 4,
    BUT_Mapped = 5,
    BUT_MAX = 6,
};
} // namespace GpuApi
using GpuApieBufferUsageType = GpuApi::eBufferUsageType;
} // namespace RED4ext

// clang-format on
