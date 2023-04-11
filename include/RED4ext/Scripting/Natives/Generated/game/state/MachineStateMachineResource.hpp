#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphResource.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineStateMachineResource : graph::GraphResource
{
    static constexpr const char* NAME = "gamestateMachineStateMachineResource";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineStateMachineResource, 0x50);
} // namespace game::state
using gamestateMachineStateMachineResource = game::state::MachineStateMachineResource;
} // namespace RED4ext

// clang-format on
