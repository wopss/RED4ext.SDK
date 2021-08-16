#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/IStatusEffectListener.hpp>

namespace RED4ext
{
namespace game { 
struct ScriptStatusEffectListener : game::IStatusEffectListener
{
    static constexpr const char* NAME = "gameScriptStatusEffectListener";
    static constexpr const char* ALIAS = "ScriptStatusEffectListener";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptStatusEffectListener, 0x48);
} // namespace game
using ScriptStatusEffectListener = game::ScriptStatusEffectListener;
} // namespace RED4ext
