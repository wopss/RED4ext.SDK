#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineeventResetPhysicalRepresentation : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventResetPhysicalRepresentation";
    static constexpr const char* ALIAS = "PSMResetPhysicalRepresentation";

};
RED4EXT_ASSERT_SIZE(MachineeventResetPhysicalRepresentation, 0x40);
} // namespace game::state
using gamestateMachineeventResetPhysicalRepresentation = game::state::MachineeventResetPhysicalRepresentation;
using PSMResetPhysicalRepresentation = game::state::MachineeventResetPhysicalRepresentation;
} // namespace RED4ext

// clang-format on
