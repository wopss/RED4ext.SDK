#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/VertexPacking/EStreamType.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/VertexPacking/ePackingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/VertexPacking/ePackingUsage.hpp>

namespace RED4ext
{
namespace GpuWrapApi::VertexPacking
{
struct PackingElement
{
    static constexpr const char* NAME = "GpuWrapApiVertexPackingPackingElement";
    static constexpr const char* ALIAS = NAME;

    GpuWrapApi::VertexPacking::ePackingType type; // 00
    GpuWrapApi::VertexPacking::ePackingUsage usage; // 01
    uint8_t usageIndex; // 02
    uint8_t streamIndex; // 03
    GpuWrapApi::VertexPacking::EStreamType streamType; // 04
};
RED4EXT_ASSERT_SIZE(PackingElement, 0x5);
} // namespace GpuWrapApi::VertexPacking
using GpuWrapApiVertexPackingPackingElement = GpuWrapApi::VertexPacking::PackingElement;
} // namespace RED4ext

// clang-format on
