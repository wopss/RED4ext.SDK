#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HudScalingSensitiveWidget
{
    static constexpr const char* NAME = "gameuiHudScalingSensitiveWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x28 - 0x0]; // 0
    ink::WidgetReference widget; // 28
    bool adjustScale; // 40
    bool adjustTranslation; // 41
    bool adjustMargin; // 42
    uint8_t unk43[0x44 - 0x43]; // 43
    ink::Margin targetMarginAtDoubleScale; // 44
    ink::Margin marginToScalecorrectOverride; // 54
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(HudScalingSensitiveWidget, 0x68);
} // namespace game::ui
using gameuiHudScalingSensitiveWidget = game::ui::HudScalingSensitiveWidget;
} // namespace RED4ext

// clang-format on
