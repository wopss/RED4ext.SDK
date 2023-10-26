#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>

namespace RED4ext
{
namespace vg { struct VectorGraphicStyle; }

namespace vg
{
struct __declspec(align(0x10)) BaseVectorGraphicShape : ISerializable
{
    static constexpr const char* NAME = "vgBaseVectorGraphicShape";
    static constexpr const char* ALIAS = NAME;

    Matrix calTransform; // 30
    Handle<vg::VectorGraphicStyle> yle; // 70
    uint8_t unk80[0xC0 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(BaseVectorGraphicShape, 0xC0);
} // namespace vg
using vgBaseVectorGraphicShape = vg::BaseVectorGraphicShape;
} // namespace RED4ext

// clang-format on
