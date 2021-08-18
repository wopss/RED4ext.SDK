#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh { 
struct MeshParamSpeedTreeWind : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamSpeedTreeWind";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x4550 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(MeshParamSpeedTreeWind, 0x4550);
} // namespace mesh
} // namespace RED4ext
