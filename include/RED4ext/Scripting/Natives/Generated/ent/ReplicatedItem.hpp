#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace ent
{
struct ReplicatedItem
{
    static constexpr const char* NAME = "entReplicatedItem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    WeakHandle<ent::Entity> entity; // 08
    net::Time netTime; // 18
};
RED4EXT_ASSERT_SIZE(ReplicatedItem, 0x20);
} // namespace ent
using entReplicatedItem = ent::ReplicatedItem;
} // namespace RED4ext

// clang-format on
