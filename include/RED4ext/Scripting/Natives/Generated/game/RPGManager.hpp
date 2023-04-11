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
struct RPGManager : IScriptable
{
    static constexpr const char* NAME = "gameRPGManager";
    static constexpr const char* ALIAS = "RPGManager";

};
RED4EXT_ASSERT_SIZE(RPGManager, 0x40);
} // namespace game
using gameRPGManager = game::RPGManager;
using RPGManager = game::RPGManager;
} // namespace RED4ext

// clang-format on
