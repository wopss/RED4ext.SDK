#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/vg/EStyleAttributeType.hpp>

namespace RED4ext
{
namespace vg
{
struct AttributeTypeValuePair : ISerializable
{
    static constexpr const char* NAME = "vgAttributeTypeValuePair";
    static constexpr const char* ALIAS = NAME;

    vg::EStyleAttributeType pe; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    Variant lue; // 38
};
RED4EXT_ASSERT_SIZE(AttributeTypeValuePair, 0x50);
} // namespace vg
using vgAttributeTypeValuePair = vg::AttributeTypeValuePair;
} // namespace RED4ext

// clang-format on
