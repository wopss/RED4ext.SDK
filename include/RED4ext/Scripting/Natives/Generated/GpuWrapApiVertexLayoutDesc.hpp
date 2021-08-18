#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApiVertexPackingPackingElement.hpp>

namespace RED4ext
{
struct GpuWrapApiVertexLayoutDesc
{
    static constexpr const char* NAME = "GpuWrapApiVertexLayoutDesc";
    static constexpr const char* ALIAS = NAME;

    StaticArray<GpuWrapApiVertexPackingPackingElement, 32> elements; // 00
    StaticArray<uint8_t, 8> slotStrides; // A4
    uint32_t slotMask; // B0
    uint32_t hash; // B4
};
RED4EXT_ASSERT_SIZE(GpuWrapApiVertexLayoutDesc, 0xB8);
} // namespace RED4ext
