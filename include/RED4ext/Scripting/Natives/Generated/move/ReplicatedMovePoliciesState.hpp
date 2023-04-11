#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/ReplicatedMovePolicies.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace move
{
struct ReplicatedMovePoliciesState
{
    static constexpr const char* NAME = "moveReplicatedMovePoliciesState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<move::ReplicatedMovePolicies> items; // 08
    net::Time lastAppliedActionsTime; // 18
    uint8_t unk20[0x40 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(ReplicatedMovePoliciesState, 0x40);
} // namespace move
using moveReplicatedMovePoliciesState = move::ReplicatedMovePoliciesState;
} // namespace RED4ext

// clang-format on
