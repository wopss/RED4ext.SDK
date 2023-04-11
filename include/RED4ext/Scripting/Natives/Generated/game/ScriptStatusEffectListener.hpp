#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatusEffectListener.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptStatusEffectListener : game::IStatusEffectListener
{
    static constexpr const char* NAME = "gameScriptStatusEffectListener";
    static constexpr const char* ALIAS = "ScriptStatusEffectListener";

};
RED4EXT_ASSERT_SIZE(ScriptStatusEffectListener, 0x40);
} // namespace game
using gameScriptStatusEffectListener = game::ScriptStatusEffectListener;
using ScriptStatusEffectListener = game::ScriptStatusEffectListener;
} // namespace RED4ext

// clang-format on
