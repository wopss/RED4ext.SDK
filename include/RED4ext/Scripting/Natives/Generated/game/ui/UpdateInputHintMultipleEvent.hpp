#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InputHintData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct UpdateInputHintMultipleEvent : red::Event
{
    static constexpr const char* NAME = "gameuiUpdateInputHintMultipleEvent";
    static constexpr const char* ALIAS = "UpdateInputHintMultipleEvent";

    DynArray<game::ui::InputHintData> data; // 40
    DynArray<bool> show; // 50
    CName targetHintContainer; // 60
};
RED4EXT_ASSERT_SIZE(UpdateInputHintMultipleEvent, 0x68);
} // namespace game::ui
using gameuiUpdateInputHintMultipleEvent = game::ui::UpdateInputHintMultipleEvent;
using UpdateInputHintMultipleEvent = game::ui::UpdateInputHintMultipleEvent;
} // namespace RED4ext

// clang-format on
