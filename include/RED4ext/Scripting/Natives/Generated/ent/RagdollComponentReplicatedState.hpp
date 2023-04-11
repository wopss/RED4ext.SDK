#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace ent
{
struct RagdollComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "entRagdollComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<Transform> transforms; // 20
    bool isSleeping; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(RagdollComponentReplicatedState, 0x38);
} // namespace ent
using entRagdollComponentReplicatedState = ent::RagdollComponentReplicatedState;
} // namespace RED4ext

// clang-format on
