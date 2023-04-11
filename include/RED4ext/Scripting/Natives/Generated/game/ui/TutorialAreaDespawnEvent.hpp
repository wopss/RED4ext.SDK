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
struct TutorialAreaDespawnEvent : red::Event
{
    static constexpr const char* NAME = "gameuiTutorialAreaDespawnEvent";
    static constexpr const char* ALIAS = NAME;

    CName bracketID; // 40
    uint32_t areaID; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(TutorialAreaDespawnEvent, 0x50);
} // namespace game::ui
using gameuiTutorialAreaDespawnEvent = game::ui::TutorialAreaDespawnEvent;
} // namespace RED4ext

// clang-format on
