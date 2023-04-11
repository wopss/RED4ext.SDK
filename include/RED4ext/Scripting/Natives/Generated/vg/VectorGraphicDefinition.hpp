#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace vg { struct VectorGraphicShape_Group; }

namespace vg
{
struct VectorGraphicDefinition : ISerializable
{
    static constexpr const char* NAME = "vgVectorGraphicDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<vg::VectorGraphicShape_Group> rootShapeGroup; // 30
    Vector2 dimensions; // 40
};
RED4EXT_ASSERT_SIZE(VectorGraphicDefinition, 0x48);
} // namespace vg
using vgVectorGraphicDefinition = vg::VectorGraphicDefinition;
} // namespace RED4ext

// clang-format on
