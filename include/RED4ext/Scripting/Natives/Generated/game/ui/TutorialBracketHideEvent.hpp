#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct TutorialBracketHideEvent : red::Event
{
    static constexpr const char* NAME = "gameuiTutorialBracketHideEvent";
    static constexpr const char* ALIAS = NAME;

    CName bracketID; // 40
};
RED4EXT_ASSERT_SIZE(TutorialBracketHideEvent, 0x48);
} // namespace game::ui
} // namespace RED4ext
