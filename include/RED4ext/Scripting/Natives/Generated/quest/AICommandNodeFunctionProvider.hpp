#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace quest
{
struct AICommandNodeFunctionProvider : IScriptable
{
    static constexpr const char* NAME = "questAICommandNodeFunctionProvider";
    static constexpr const char* ALIAS = "AICommandNodeFunctionProvider";

};
RED4EXT_ASSERT_SIZE(AICommandNodeFunctionProvider, 0x40);
} // namespace quest
using questAICommandNodeFunctionProvider = quest::AICommandNodeFunctionProvider;
using AICommandNodeFunctionProvider = quest::AICommandNodeFunctionProvider;
} // namespace RED4ext

// clang-format on
