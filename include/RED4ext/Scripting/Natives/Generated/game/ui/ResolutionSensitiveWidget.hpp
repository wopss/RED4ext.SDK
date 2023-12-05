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
struct ResolutionSensitiveWidget
{
    static constexpr const char* NAME = "gameuiResolutionSensitiveWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
    ink::WidgetReference widget; // 18
    ink::Margin marginToScalecorrectOverride; // 30
};
RED4EXT_ASSERT_SIZE(ResolutionSensitiveWidget, 0x40);
} // namespace game::ui
using gameuiResolutionSensitiveWidget = game::ui::ResolutionSensitiveWidget;
} // namespace RED4ext

// clang-format on
