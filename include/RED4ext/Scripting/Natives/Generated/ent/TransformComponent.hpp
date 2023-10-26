#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) TransformComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entTransformComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformComponent, 0x120);
} // namespace ent
using entTransformComponent = ent::TransformComponent;
} // namespace RED4ext

// clang-format on
