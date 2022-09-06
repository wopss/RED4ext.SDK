#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade { 
struct BoundingShape
{
    static constexpr const char* NAME = "gameuiarcadeBoundingShape";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
    ink::WidgetReference boundingShape; // 18
};
RED4EXT_ASSERT_SIZE(BoundingShape, 0x30);
} // namespace game::ui::arcade
} // namespace RED4ext
