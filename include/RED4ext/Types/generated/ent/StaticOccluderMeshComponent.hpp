#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Color.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Types/generated/vis/WorldOccluderType.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent { 
struct StaticOccluderMeshComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entStaticOccluderMeshComponent";
    static constexpr const char* ALIAS = NAME;

    Ref<CMesh> mesh; // 120
    Vector3 scale; // 138
    Color color; // 144
    vis::WorldOccluderType occluderType; // 148
    uint8_t occluderAutohideDistanceScale; // 149
    uint8_t unk14A[0x160 - 0x14A]; // 14A
};
RED4EXT_ASSERT_SIZE(StaticOccluderMeshComponent, 0x160);
} // namespace ent
} // namespace RED4ext
