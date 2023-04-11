#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink
{
struct IStateMachine : ISerializable
{
    static constexpr const char* NAME = "inkIStateMachine";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IStateMachine, 0x30);
} // namespace ink
using inkIStateMachine = ink::IStateMachine;
} // namespace RED4ext

// clang-format on
