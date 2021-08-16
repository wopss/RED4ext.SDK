#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct ScriptableSystem : IScriptable
{
    static constexpr const char* NAME = "gameScriptableSystem";
    static constexpr const char* ALIAS = "ScriptableSystem";

    uint8_t unk40[0x2D8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptableSystem, 0x2D8);
} // namespace game
using ScriptableSystem = game::ScriptableSystem;
} // namespace RED4ext
