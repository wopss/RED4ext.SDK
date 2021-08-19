#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EOrientation.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink { 
struct GridWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkGridWidget";
    static constexpr const char* ALIAS = NAME;

    ink::EOrientation orientation; // 220
    uint8_t unk221[0x224 - 0x221]; // 221
    ink::Margin childPadding; // 224
    Vector2 childSizeStep; // 234
    uint8_t unk23C[0x270 - 0x23C]; // 23C
};
RED4EXT_ASSERT_SIZE(GridWidget, 0x270);
} // namespace ink
} // namespace RED4ext
