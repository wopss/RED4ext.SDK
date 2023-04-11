#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct SignalUserDataDefinition : ISerializable
{
    static constexpr const char* NAME = "gameSignalUserDataDefinition";
    static constexpr const char* ALIAS = "SignalUserDataDefinition";

};
RED4EXT_ASSERT_SIZE(SignalUserDataDefinition, 0x30);
} // namespace game
using gameSignalUserDataDefinition = game::SignalUserDataDefinition;
using SignalUserDataDefinition = game::SignalUserDataDefinition;
} // namespace RED4ext

// clang-format on
