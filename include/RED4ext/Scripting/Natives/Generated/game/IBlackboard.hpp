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
struct IBlackboard : IScriptable
{
    static constexpr const char* NAME = "gameIBlackboard";
    static constexpr const char* ALIAS = "IBlackboard";

};
RED4EXT_ASSERT_SIZE(IBlackboard, 0x40);
} // namespace game
using gameIBlackboard = game::IBlackboard;
using IBlackboard = game::IBlackboard;
} // namespace RED4ext

// clang-format on
