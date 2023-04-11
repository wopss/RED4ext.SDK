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
struct MachineIStateMachineBody : ISerializable
{
    static constexpr const char* NAME = "gamestateMachineIStateMachineBody";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineIStateMachineBody, 0x30);
} // namespace game::state
using gamestateMachineIStateMachineBody = game::state::MachineIStateMachineBody;
} // namespace RED4ext

// clang-format on
