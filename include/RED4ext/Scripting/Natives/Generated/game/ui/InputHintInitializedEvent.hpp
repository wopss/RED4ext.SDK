#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InputHintInitializedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiInputHintInitializedEvent";
    static constexpr const char* ALIAS = "InputHintInitializedEvent";

    CName targetHintContainer; // 40
};
RED4EXT_ASSERT_SIZE(InputHintInitializedEvent, 0x48);
} // namespace game::ui
using InputHintInitializedEvent = game::ui::InputHintInitializedEvent;
} // namespace RED4ext
