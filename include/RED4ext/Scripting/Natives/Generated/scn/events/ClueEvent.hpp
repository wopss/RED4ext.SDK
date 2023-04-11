#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EBraindanceLayer.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct ClueEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsClueEvent";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference clueEntity; // 58
    bool markedOnTimeline; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
    CName clueName; // 98
    game::ui::EBraindanceLayer layer; // A0
    bool overrideFact; // A4
    uint8_t unkA5[0xA8 - 0xA5]; // A5
    CName factName; // A8
};
RED4EXT_ASSERT_SIZE(ClueEvent, 0xB0);
} // namespace scn::events
using scneventsClueEvent = scn::events::ClueEvent;
} // namespace RED4ext

// clang-format on
