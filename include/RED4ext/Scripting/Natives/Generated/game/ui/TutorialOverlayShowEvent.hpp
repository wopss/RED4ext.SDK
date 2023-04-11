#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TutorialOverlayShowEvent : red::Event
{
    static constexpr const char* NAME = "gameuiTutorialOverlayShowEvent";
    static constexpr const char* ALIAS = NAME;

    CName itemName; // 40
    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TutorialOverlayShowEvent, 0x70);
} // namespace game::ui
using gameuiTutorialOverlayShowEvent = game::ui::TutorialOverlayShowEvent;
} // namespace RED4ext

// clang-format on
