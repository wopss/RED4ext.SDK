#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamBendedRoad : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamBendedRoad";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint16_t> occInds; // 30
    DynArray<Vector4> occVerts; // 40
    DynArray<Vector4> occSkinWeights; // 50
    DynArray<Color> occSkinInds; // 60
    DynArray<DynArray<uint16_t>> collInds; // 70
    DynArray<DynArray<Vector3>> collVerts; // 80
    DynArray<DynArray<uint16_t>> collFaceMatInds; // 90
    DynArray<DynArray<CString>> collFaceMaterialNames; // A0
    DynArray<DynArray<Vector4>> collSkinWeights; // B0
    DynArray<DynArray<Color>> collSkinInds; // C0
    DynArray<CString> collMaterialName; // D0
    DynArray<CString> collFilterPresetName; // E0
};
RED4EXT_ASSERT_SIZE(MeshParamBendedRoad, 0xF0);
} // namespace mesh
using meshMeshParamBendedRoad = mesh::MeshParamBendedRoad;
} // namespace RED4ext

// clang-format on
