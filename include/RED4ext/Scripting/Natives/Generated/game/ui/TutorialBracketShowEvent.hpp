#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TutorialBracketData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TutorialBracketShowEvent : red::Event
{
    static constexpr const char* NAME = "gameuiTutorialBracketShowEvent";
    static constexpr const char* ALIAS = NAME;

    game::TutorialBracketData data; // 40
};
RED4EXT_ASSERT_SIZE(TutorialBracketShowEvent, 0x60);
} // namespace game::ui
using gameuiTutorialBracketShowEvent = game::ui::TutorialBracketShowEvent;
} // namespace RED4ext

// clang-format on
