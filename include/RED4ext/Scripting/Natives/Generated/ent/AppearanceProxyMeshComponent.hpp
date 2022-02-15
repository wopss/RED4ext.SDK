#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalMeshComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct AppearanceProxyMeshComponent : ent::PhysicalMeshComponent
{
    static constexpr const char* NAME = "entAppearanceProxyMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x250 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(AppearanceProxyMeshComponent, 0x250);
} // namespace ent
} // namespace RED4ext
