#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CanvasWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct Window : ink::CanvasWidget
{
    static constexpr const char* NAME = "inkWindow";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x270 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(Window, 0x270);
} // namespace ink
} // namespace RED4ext
