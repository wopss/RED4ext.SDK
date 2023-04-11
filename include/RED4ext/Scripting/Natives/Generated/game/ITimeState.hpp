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
struct ITimeState : ISerializable
{
    static constexpr const char* NAME = "gameITimeState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ITimeState, 0x30);
} // namespace game
using gameITimeState = game::ITimeState;
} // namespace RED4ext

// clang-format on
