#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalMeshComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) AppearanceProxyMeshComponent : ent::PhysicalMeshComponent
{
    static constexpr const char* NAME = "entAppearanceProxyMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x250 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(AppearanceProxyMeshComponent, 0x250);
} // namespace ent
using entAppearanceProxyMeshComponent = ent::AppearanceProxyMeshComponent;
} // namespace RED4ext

// clang-format on
