#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/garment/MeshParamGarmentChunkData.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace garment
{
struct MeshParamGarment : mesh::MeshParameter
{
    static constexpr const char* NAME = "garmentMeshParamGarment";
    static constexpr const char* ALIAS = NAME;

    DynArray<garment::MeshParamGarmentChunkData> chunks; // 30
};
RED4EXT_ASSERT_SIZE(MeshParamGarment, 0x40);
} // namespace garment
using garmentMeshParamGarment = garment::MeshParamGarment;
} // namespace RED4ext

// clang-format on
