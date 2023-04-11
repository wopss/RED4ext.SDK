#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink { struct Widget; }

namespace game::ui
{
struct TutorialAreaSpawnEvent : red::Event
{
    static constexpr const char* NAME = "gameuiTutorialAreaSpawnEvent";
    static constexpr const char* ALIAS = NAME;

    CName bracketID; // 40
    uint32_t areaID; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    WeakHandle<ink::Widget> widget; // 50
};
RED4EXT_ASSERT_SIZE(TutorialAreaSpawnEvent, 0x60);
} // namespace game::ui
using gameuiTutorialAreaSpawnEvent = game::ui::TutorialAreaSpawnEvent;
} // namespace RED4ext

// clang-format on
