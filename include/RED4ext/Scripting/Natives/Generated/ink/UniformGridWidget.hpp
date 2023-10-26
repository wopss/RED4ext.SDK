#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EOrientation.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) UniformGridWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkUniformGridWidget";
    static constexpr const char* ALIAS = "inkUniformGrid";

    uint32_t wrappingWidgetCount; // 230
    ink::EOrientation orientation; // 234
    uint8_t unk235[0x240 - 0x235]; // 235
};
RED4EXT_ASSERT_SIZE(UniformGridWidget, 0x240);
} // namespace ink
using inkUniformGridWidget = ink::UniformGridWidget;
using inkUniformGrid = ink::UniformGridWidget;
} // namespace RED4ext

// clang-format on
