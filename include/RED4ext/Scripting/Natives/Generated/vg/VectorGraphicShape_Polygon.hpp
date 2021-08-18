#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/vg/BaseVectorGraphicShape.hpp>

namespace RED4ext
{
namespace vg { 
struct VectorGraphicShape_Polygon : vg::BaseVectorGraphicShape
{
    static constexpr const char* NAME = "vgVectorGraphicShape_Polygon";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector2> ints; // C0
};
RED4EXT_ASSERT_SIZE(VectorGraphicShape_Polygon, 0xD0);
} // namespace vg
} // namespace RED4ext
