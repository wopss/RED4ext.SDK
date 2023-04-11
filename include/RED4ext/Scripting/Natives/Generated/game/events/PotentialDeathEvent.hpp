#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::events
{
struct PotentialDeathEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsPotentialDeathEvent";
    static constexpr const char* ALIAS = "gamePotentialDeathEvent";

    WeakHandle<game::Object> instigator; // 40
};
RED4EXT_ASSERT_SIZE(PotentialDeathEvent, 0x50);
} // namespace game::events
using gameeventsPotentialDeathEvent = game::events::PotentialDeathEvent;
using gamePotentialDeathEvent = game::events::PotentialDeathEvent;
} // namespace RED4ext

// clang-format on
