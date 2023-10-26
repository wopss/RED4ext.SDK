#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/AppearanceMatch.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/PhysicsInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundTypeE.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyPartE.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent::dismemberment
{
struct __declspec(align(0x10)) MeshInfo
{
    static constexpr const char* NAME = "entdismembermentMeshInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    RaRef<CMesh> Mesh; // 10
    CName MeshAppearance; // 18
    DynArray<ent::dismemberment::AppearanceMatch> AppearanceMap; // 20
    bool ShouldReceiveDecal; // 30
    uint8_t unk31[0x40 - 0x31]; // 31
    Transform Offset; // 40
    Vector3 Scale; // 60
    physics::RagdollBodyPartE BodyPartMask; // 6C
    ent::dismemberment::WoundTypeE WoundType; // 70
    ent::dismemberment::WoundTypeE CullMesh; // 72
    ent::dismemberment::PhysicsInfo Physics; // 74
    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(MeshInfo, 0x80);
} // namespace ent::dismemberment
using entdismembermentMeshInfo = ent::dismemberment::MeshInfo;
} // namespace RED4ext

// clang-format on
