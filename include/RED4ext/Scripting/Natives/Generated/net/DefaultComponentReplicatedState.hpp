#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace net
{
struct DefaultComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "netDefaultComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DefaultComponentReplicatedState, 0x20);
} // namespace net
using netDefaultComponentReplicatedState = net::DefaultComponentReplicatedState;
} // namespace RED4ext

// clang-format on
