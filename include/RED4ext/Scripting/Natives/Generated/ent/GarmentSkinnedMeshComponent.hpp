#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/SkinnedMeshComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct GarmentSkinnedMeshComponent : ent::SkinnedMeshComponent
{
    static constexpr const char* NAME = "entGarmentSkinnedMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk270[0x2D0 - 0x270]; // 270
};
RED4EXT_ASSERT_SIZE(GarmentSkinnedMeshComponent, 0x2D0);
} // namespace ent
} // namespace RED4ext
