#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/bb/ScriptID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::bb { struct ScriptDefinition; }

namespace game
{
struct BlackboardChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameBlackboardChangedEvent";
    static constexpr const char* ALIAS = "BlackboardChangedEvent";

    Handle<game::bb::ScriptDefinition> definition; // 40
    game::bb::ScriptID id; // 50
};
RED4EXT_ASSERT_SIZE(BlackboardChangedEvent, 0x60);
} // namespace game
using gameBlackboardChangedEvent = game::BlackboardChangedEvent;
using BlackboardChangedEvent = game::BlackboardChangedEvent;
} // namespace RED4ext

// clang-format on
