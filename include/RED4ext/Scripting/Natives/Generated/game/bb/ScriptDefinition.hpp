#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::bb
{
struct ScriptDefinition : IScriptable
{
    static constexpr const char* NAME = "gamebbScriptDefinition";
    static constexpr const char* ALIAS = "BlackboardDefinition";

    uint8_t unk40[0xA0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptDefinition, 0xA0);
} // namespace game::bb
using gamebbScriptDefinition = game::bb::ScriptDefinition;
using BlackboardDefinition = game::bb::ScriptDefinition;
} // namespace RED4ext

// clang-format on
