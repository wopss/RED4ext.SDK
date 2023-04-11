#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MiscAICommandNodeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct ScriptedAICommandParams : quest::MiscAICommandNodeParams
{
    static constexpr const char* NAME = "questScriptedAICommandParams";
    static constexpr const char* ALIAS = "ScriptedAICommandParams";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptedAICommandParams, 0x58);
} // namespace quest
using questScriptedAICommandParams = quest::ScriptedAICommandParams;
using ScriptedAICommandParams = quest::ScriptedAICommandParams;
} // namespace RED4ext

// clang-format on
