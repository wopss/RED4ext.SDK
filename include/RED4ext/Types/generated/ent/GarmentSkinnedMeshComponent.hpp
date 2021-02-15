#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/SkinnedMeshComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct GarmentSkinnedMeshComponent : ent::SkinnedMeshComponent
{
    static constexpr const char* NAME = "entGarmentSkinnedMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk260[0x2B0 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(GarmentSkinnedMeshComponent, 0x2B0);
} // namespace ent
} // namespace RED4ext
