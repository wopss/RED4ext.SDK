#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PopupPosition.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace game
{
struct PopupSettings
{
    static constexpr const char* NAME = "gamePopupSettings";
    static constexpr const char* ALIAS = "PopupSettings";

    bool closeAtInput; // 00
    bool pauseGame; // 01
    bool fullscreen; // 02
    uint8_t unk03[0x4 - 0x3]; // 3
    game::PopupPosition position; // 04
    bool hideInMenu; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    ink::Margin margin; // 0C
};
RED4EXT_ASSERT_SIZE(PopupSettings, 0x1C);
} // namespace game
using gamePopupSettings = game::PopupSettings;
using PopupSettings = game::PopupSettings;
} // namespace RED4ext

// clang-format on
