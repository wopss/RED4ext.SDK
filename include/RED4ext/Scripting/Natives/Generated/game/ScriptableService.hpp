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
struct ScriptableService : IScriptable
{
    static constexpr const char* NAME = "gameScriptableService";
    static constexpr const char* ALIAS = "ScriptableService";

};
RED4EXT_ASSERT_SIZE(ScriptableService, 0x40);
} // namespace game
using gameScriptableService = game::ScriptableService;
using ScriptableService = game::ScriptableService;
} // namespace RED4ext

// clang-format on
