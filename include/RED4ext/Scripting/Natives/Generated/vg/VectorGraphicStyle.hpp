#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/vg/AttributeTypeValuePair.hpp>

namespace RED4ext
{
namespace vg
{
struct VectorGraphicStyle : ISerializable
{
    static constexpr const char* NAME = "vgVectorGraphicStyle";
    static constexpr const char* ALIAS = NAME;

    DynArray<vg::AttributeTypeValuePair> attributes; // 30
};
RED4EXT_ASSERT_SIZE(VectorGraphicStyle, 0x40);
} // namespace vg
using vgVectorGraphicStyle = vg::VectorGraphicStyle;
} // namespace RED4ext

// clang-format on
