#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace game { struct ActionInternalEvent; }

namespace game
{
struct ActionEvent : AI::AIEvent
{
    static constexpr const char* NAME = "gameActionEvent";
    static constexpr const char* ALIAS = "ActionEvent";

    CName eventAction; // 50
    Handle<game::ActionInternalEvent> internalEvent; // 58
};
RED4EXT_ASSERT_SIZE(ActionEvent, 0x68);
} // namespace game
using gameActionEvent = game::ActionEvent;
using ActionEvent = game::ActionEvent;
} // namespace RED4ext

// clang-format on
