#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedItem.hpp>

namespace RED4ext
{
namespace red { struct Event; }

namespace game
{
struct ReplicatedEntityEvent : ent::ReplicatedItem
{
    static constexpr const char* NAME = "gameReplicatedEntityEvent";
    static constexpr const char* ALIAS = NAME;

    Handle<red::Event> value; // 20
};
RED4EXT_ASSERT_SIZE(ReplicatedEntityEvent, 0x30);
} // namespace game
using gameReplicatedEntityEvent = game::ReplicatedEntityEvent;
} // namespace RED4ext

// clang-format on
