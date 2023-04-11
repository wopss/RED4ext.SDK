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
struct ScriptTaskData : IScriptable
{
    static constexpr const char* NAME = "gameScriptTaskData";
    static constexpr const char* ALIAS = "ScriptTaskData";

};
RED4EXT_ASSERT_SIZE(ScriptTaskData, 0x40);
} // namespace game
using gameScriptTaskData = game::ScriptTaskData;
using ScriptTaskData = game::ScriptTaskData;
} // namespace RED4ext

// clang-format on
