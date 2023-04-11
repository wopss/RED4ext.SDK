#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/attr/Attribute.hpp>

namespace RED4ext
{
namespace attr
{
struct Slider : attr::Attribute
{
    static constexpr const char* NAME = "attrSlider";
    static constexpr const char* ALIAS = NAME;

    float ep; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(Slider, 0x38);
} // namespace attr
using attrSlider = attr::Slider;
} // namespace RED4ext

// clang-format on
