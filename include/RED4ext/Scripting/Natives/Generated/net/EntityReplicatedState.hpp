#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IEntityState.hpp>

namespace RED4ext
{
namespace net
{
struct EntityReplicatedState : net::IEntityState
{
    static constexpr const char* NAME = "netEntityReplicatedState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EntityReplicatedState, 0x50);
} // namespace net
using netEntityReplicatedState = net::EntityReplicatedState;
} // namespace RED4ext

// clang-format on
