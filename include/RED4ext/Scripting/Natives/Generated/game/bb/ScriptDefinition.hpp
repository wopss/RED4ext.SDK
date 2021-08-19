#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::bb { 
struct ScriptDefinition : IScriptable
{
    static constexpr const char* NAME = "gamebbScriptDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xA0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptDefinition, 0xA0);
} // namespace game::bb
} // namespace RED4ext
