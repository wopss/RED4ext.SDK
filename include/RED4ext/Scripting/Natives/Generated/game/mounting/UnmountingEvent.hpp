#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountingRelationship.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::mounting { struct UnmountingRequest; }

namespace game::mounting
{
struct UnmountingEvent : red::Event
{
    static constexpr const char* NAME = "gamemountingUnmountingEvent";
    static constexpr const char* ALIAS = "UnmountingEvent";

    Handle<game::mounting::UnmountingRequest> request; // 40
    game::mounting::MountingRelationship relationship; // 50
};
RED4EXT_ASSERT_SIZE(UnmountingEvent, 0x78);
} // namespace game::mounting
using gamemountingUnmountingEvent = game::mounting::UnmountingEvent;
using UnmountingEvent = game::mounting::UnmountingEvent;
} // namespace RED4ext

// clang-format on
