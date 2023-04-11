#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedItem.hpp>

namespace RED4ext
{
namespace game
{
struct ReplicatedAnimEvent : ent::ReplicatedItem
{
    static constexpr const char* NAME = "gameReplicatedAnimEvent";
    static constexpr const char* ALIAS = NAME;

    CName name; // 20
};
RED4EXT_ASSERT_SIZE(ReplicatedAnimEvent, 0x28);
} // namespace game
using gameReplicatedAnimEvent = game::ReplicatedAnimEvent;
} // namespace RED4ext

// clang-format on
