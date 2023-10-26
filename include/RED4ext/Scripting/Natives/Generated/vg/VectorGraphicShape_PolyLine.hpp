#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/vg/BaseVectorGraphicShape.hpp>

namespace RED4ext
{
namespace vg
{
struct __declspec(align(0x10)) VectorGraphicShape_PolyLine : vg::BaseVectorGraphicShape
{
    static constexpr const char* NAME = "vgVectorGraphicShape_PolyLine";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector2> ints; // C0
    float roke; // D0
    uint8_t unkD4[0xE0 - 0xD4]; // D4
};
RED4EXT_ASSERT_SIZE(VectorGraphicShape_PolyLine, 0xE0);
} // namespace vg
using vgVectorGraphicShape_PolyLine = vg::VectorGraphicShape_PolyLine;
} // namespace RED4ext

// clang-format on
