#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedItem.hpp>

namespace RED4ext
{
namespace move { struct Policies; }

namespace move { 
struct ReplicatedMovePolicies : ent::ReplicatedItem
{
    static constexpr const char* NAME = "moveReplicatedMovePolicies";
    static constexpr const char* ALIAS = NAME;

    uint64_t key; // 20
    Handle<move::Policies> policies; // 28
};
RED4EXT_ASSERT_SIZE(ReplicatedMovePolicies, 0x38);
} // namespace move
} // namespace RED4ext
