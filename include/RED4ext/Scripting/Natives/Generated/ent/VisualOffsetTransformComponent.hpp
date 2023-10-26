#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TransformComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) VisualOffsetTransformComponent : ent::TransformComponent
{
    static constexpr const char* NAME = "entVisualOffsetTransformComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VisualOffsetTransformComponent, 0x120);
} // namespace ent
using entVisualOffsetTransformComponent = ent::VisualOffsetTransformComponent;
} // namespace RED4ext

// clang-format on
