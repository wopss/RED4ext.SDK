#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EOrientation.hpp>

namespace RED4ext
{
namespace ink { 
struct UniformGridWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkUniformGridWidget";
    static constexpr const char* ALIAS = NAME;

    uint32_t wrappingWidgetCount; // 220
    ink::EOrientation orientation; // 224
    uint8_t unk225[0x230 - 0x225]; // 225
};
RED4EXT_ASSERT_SIZE(UniformGridWidget, 0x230);
} // namespace ink
} // namespace RED4ext
