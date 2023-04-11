#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct SignalUserData : IScriptable
{
    static constexpr const char* NAME = "gameSignalUserData";
    static constexpr const char* ALIAS = "SignalUserData";

};
RED4EXT_ASSERT_SIZE(SignalUserData, 0x40);
} // namespace game
using gameSignalUserData = game::SignalUserData;
using SignalUserData = game::SignalUserData;
} // namespace RED4ext

// clang-format on
