#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/vg/BaseVectorGraphicShape.hpp>

namespace RED4ext
{
namespace vg
{
struct __declspec(align(0x10)) VectorGraphicShape_Text : vg::BaseVectorGraphicShape
{
    static constexpr const char* NAME = "vgVectorGraphicShape_Text";
    static constexpr const char* ALIAS = NAME;

    CString xt; // C0
};
RED4EXT_ASSERT_SIZE(VectorGraphicShape_Text, 0xE0);
} // namespace vg
using vgVectorGraphicShape_Text = vg::VectorGraphicShape_Text;
} // namespace RED4ext

// clang-format on
