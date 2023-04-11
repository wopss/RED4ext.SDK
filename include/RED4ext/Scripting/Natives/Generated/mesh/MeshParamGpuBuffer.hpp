#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamGpuBuffer : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamGpuBuffer";
    static constexpr const char* ALIAS = NAME;

    uint32_t stride; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DataBuffer data; // 38
};
RED4EXT_ASSERT_SIZE(MeshParamGpuBuffer, 0x60);
} // namespace mesh
using meshMeshParamGpuBuffer = mesh::MeshParamGpuBuffer;
} // namespace RED4ext

// clang-format on
