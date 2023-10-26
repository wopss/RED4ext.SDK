#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }
namespace physics { struct ICollider; }

namespace ent
{
struct __declspec(align(0x10)) SimpleColliderComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entSimpleColliderComponent";
    static constexpr const char* ALIAS = "SimpleColliderComponent";

    DynArray<Handle<physics::ICollider>> colliders; // 120
    Handle<physics::FilterData> filter; // 130
    uint8_t unk140[0x148 - 0x140]; // 140
    DataBuffer compiledBuffer; // 148
};
RED4EXT_ASSERT_SIZE(SimpleColliderComponent, 0x170);
} // namespace ent
using entSimpleColliderComponent = ent::SimpleColliderComponent;
using SimpleColliderComponent = ent::SimpleColliderComponent;
} // namespace RED4ext

// clang-format on
