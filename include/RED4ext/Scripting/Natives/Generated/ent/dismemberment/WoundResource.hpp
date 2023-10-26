#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/CullObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundDecal.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundMeshes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundTypeE.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyPartE.hpp>

namespace RED4ext
{
struct CResource;

namespace ent::dismemberment
{
struct __declspec(align(0x10)) WoundResource : ISerializable
{
    static constexpr const char* NAME = "entdismembermentWoundResource";
    static constexpr const char* ALIAS = NAME;

    CName Name; // 30
    ent::dismemberment::WoundTypeE WoundType; // 38
    uint8_t unk3A[0x3C - 0x3A]; // 3A
    physics::RagdollBodyPartE BodyPart; // 3C
    ent::dismemberment::CullObject CullObject; // 40
    float GarmentMorphStrength; // 90
    bool UseProceduralCut; // 94
    bool UseSingleMeshForRagdoll; // 95
    bool IsCritical; // 96
    bool CensorshipValid; // 97
    DynArray<ent::dismemberment::WoundMeshes> Resources; // 98
    DynArray<ent::dismemberment::WoundDecal> Decals; // A8
    DynArray<uint64_t> CensoredPaths; // B8
    DynArray<RaRef<CResource>> CensoredCookedPaths; // C8
    uint8_t unkD8[0xE0 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(WoundResource, 0xE0);
} // namespace ent::dismemberment
using entdismembermentWoundResource = ent::dismemberment::WoundResource;
} // namespace RED4ext

// clang-format on
