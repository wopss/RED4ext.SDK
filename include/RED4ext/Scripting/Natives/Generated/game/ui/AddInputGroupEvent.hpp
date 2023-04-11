#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InputHintGroupData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct AddInputGroupEvent : red::Event
{
    static constexpr const char* NAME = "gameuiAddInputGroupEvent";
    static constexpr const char* ALIAS = "AddInputGroupEvent";

    game::ui::InputHintGroupData data; // 40
    CName groupId; // 90
    CName targetHintContainer; // 98
};
RED4EXT_ASSERT_SIZE(AddInputGroupEvent, 0xA0);
} // namespace game::ui
using gameuiAddInputGroupEvent = game::ui::AddInputGroupEvent;
using AddInputGroupEvent = game::ui::AddInputGroupEvent;
} // namespace RED4ext

// clang-format on
