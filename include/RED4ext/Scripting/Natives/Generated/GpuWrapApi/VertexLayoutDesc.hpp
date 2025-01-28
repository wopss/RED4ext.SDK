#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/VertexPacking/PackingElement.hpp>

namespace RED4ext
{
namespace GpuWrapApi
{
struct VertexLayoutDesc
{
    static constexpr const char* NAME = "GpuWrapApiVertexLayoutDesc";
    static constexpr const char* ALIAS = NAME;

    StaticArray<GpuWrapApi::VertexPacking::PackingElement, 32> elements; // 00
    StaticArray<uint8_t, 8> slotStrides; // A4
    uint32_t slotMask; // B0
    uint32_t hash; // B4
};
RED4EXT_ASSERT_SIZE(VertexLayoutDesc, 0xB8);
} // namespace GpuWrapApi
using GpuWrapApiVertexLayoutDesc = GpuWrapApi::VertexLayoutDesc;
} // namespace RED4ext

// clang-format on
