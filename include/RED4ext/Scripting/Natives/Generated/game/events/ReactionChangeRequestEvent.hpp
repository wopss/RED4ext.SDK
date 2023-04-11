#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::data { struct ReactionPreset_Record; }

namespace game::events
{
struct ReactionChangeRequestEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsReactionChangeRequestEvent";
    static constexpr const char* ALIAS = "ReactionChangeRequestEvent";

    Handle<game::data::ReactionPreset_Record> reactionPresetRecord; // 40
};
RED4EXT_ASSERT_SIZE(ReactionChangeRequestEvent, 0x50);
} // namespace game::events
using gameeventsReactionChangeRequestEvent = game::events::ReactionChangeRequestEvent;
using ReactionChangeRequestEvent = game::events::ReactionChangeRequestEvent;
} // namespace RED4ext

// clang-format on
