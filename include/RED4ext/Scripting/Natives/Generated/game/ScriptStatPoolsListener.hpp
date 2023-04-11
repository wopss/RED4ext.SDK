#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatPoolsListener.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptStatPoolsListener : game::IStatPoolsListener
{
    static constexpr const char* NAME = "gameScriptStatPoolsListener";
    static constexpr const char* ALIAS = "ScriptStatPoolsListener";

};
RED4EXT_ASSERT_SIZE(ScriptStatPoolsListener, 0x40);
} // namespace game
using gameScriptStatPoolsListener = game::ScriptStatPoolsListener;
using ScriptStatPoolsListener = game::ScriptStatPoolsListener;
} // namespace RED4ext

// clang-format on
