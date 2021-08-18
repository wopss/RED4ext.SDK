#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InputHintData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct UpdateInputHintEvent : red::Event
{
    static constexpr const char* NAME = "gameuiUpdateInputHintEvent";
    static constexpr const char* ALIAS = "UpdateInputHintEvent";

    game::ui::InputHintData data; // 40
    bool show; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
    CName targetHintContainer; // 98
};
RED4EXT_ASSERT_SIZE(UpdateInputHintEvent, 0xA0);
} // namespace game::ui
using UpdateInputHintEvent = game::ui::UpdateInputHintEvent;
} // namespace RED4ext
