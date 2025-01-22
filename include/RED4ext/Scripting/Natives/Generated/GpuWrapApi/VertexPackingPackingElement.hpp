#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/VertexPackingEStreamType.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/VertexPackingePackingType.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/VertexPackingePackingUsage.hpp>

namespace RED4ext
{
namespace GpuWrapApi
{
struct VertexPackingPackingElement
{
    static constexpr const char* NAME = "GpuWrapApiVertexPackingPackingElement";
    static constexpr const char* ALIAS = NAME;

    GpuWrapApi::VertexPackingePackingType type; // 00
    GpuWrapApi::VertexPackingePackingUsage usage; // 01
    uint8_t usageIndex; // 02
    uint8_t streamIndex; // 03
    GpuWrapApi::VertexPackingEStreamType streamType; // 04
};
RED4EXT_ASSERT_SIZE(VertexPackingPackingElement, 0x5);
} // namespace GpuWrapApi
using GpuWrapApiVertexPackingPackingElement = GpuWrapApi::VertexPackingPackingElement;
} // namespace RED4ext

// clang-format on
