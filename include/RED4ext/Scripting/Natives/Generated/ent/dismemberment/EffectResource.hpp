#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/PlacementE.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/ResourceSetMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundTypeE.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyPartE.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace ent::dismemberment
{
struct __declspec(align(0x10)) EffectResource : ISerializable
{
    static constexpr const char* NAME = "entdismembermentEffectResource";
    static constexpr const char* ALIAS = NAME;

    CName Name; // 30
    DynArray<CName> AppearanceNames; // 38
    physics::RagdollBodyPartE BodyPartMask; // 48
    ent::dismemberment::PlacementE Placement; // 4C
    ent::dismemberment::ResourceSetMask ResourceSets; // 4E
    ent::dismemberment::WoundTypeE WoundType; // 50
    uint8_t unk52[0x60 - 0x52]; // 52
    Transform Offset; // 60
    RaRef<world::Effect> Effect; // 80
    bool MatchToWoundByName; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(EffectResource, 0x90);
} // namespace ent::dismemberment
using entdismembermentEffectResource = ent::dismemberment::EffectResource;
} // namespace RED4ext

// clang-format on
