#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApiVertexPackingEStreamType.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApiVertexPackingePackingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApiVertexPackingePackingUsage.hpp>

namespace RED4ext
{
struct GpuWrapApiVertexPackingPackingElement
{
    static constexpr const char* NAME = "GpuWrapApiVertexPackingPackingElement";
    static constexpr const char* ALIAS = NAME;

    GpuWrapApiVertexPackingePackingType type; // 00
    GpuWrapApiVertexPackingePackingUsage usage; // 01
    uint8_t usageIndex; // 02
    uint8_t streamIndex; // 03
    GpuWrapApiVertexPackingEStreamType streamType; // 04
};
RED4EXT_ASSERT_SIZE(GpuWrapApiVertexPackingPackingElement, 0x5);
} // namespace RED4ext
