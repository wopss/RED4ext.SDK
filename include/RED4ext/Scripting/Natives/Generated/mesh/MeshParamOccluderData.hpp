#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>

namespace RED4ext
{
namespace vis { struct IOccluderResource; }

namespace mesh
{
struct MeshParamOccluderData : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamOccluderData";
    static constexpr const char* ALIAS = NAME;

    Handle<vis::IOccluderResource> occluderResource; // 30
    vis::WorldOccluderType defaultOccluderType; // 40
    uint8_t autoHideDistanceScale; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(MeshParamOccluderData, 0x48);
} // namespace mesh
using meshMeshParamOccluderData = mesh::MeshParamOccluderData;
} // namespace RED4ext

// clang-format on
