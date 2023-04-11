#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct AdvertGlitchEvent : red::Event
{
    static constexpr const char* NAME = "gameuiAdvertGlitchEvent";
    static constexpr const char* ALIAS = "AdvertGlitchEvent";

    float glitchValue; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AdvertGlitchEvent, 0x48);
} // namespace game::ui
using gameuiAdvertGlitchEvent = game::ui::AdvertGlitchEvent;
using AdvertGlitchEvent = game::ui::AdvertGlitchEvent;
} // namespace RED4ext

// clang-format on
