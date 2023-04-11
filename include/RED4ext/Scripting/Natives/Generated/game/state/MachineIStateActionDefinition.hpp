#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineIStateActionDefinition : ISerializable
{
    static constexpr const char* NAME = "gamestateMachineIStateActionDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineIStateActionDefinition, 0x30);
} // namespace game::state
using gamestateMachineIStateActionDefinition = game::state::MachineIStateActionDefinition;
} // namespace RED4ext

// clang-format on
