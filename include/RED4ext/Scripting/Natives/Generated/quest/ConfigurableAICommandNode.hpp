#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandNodeBase.hpp>

namespace RED4ext
{
namespace quest
{
struct ConfigurableAICommandNode : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questConfigurableAICommandNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ConfigurableAICommandNode, 0x48);
} // namespace quest
using questConfigurableAICommandNode = quest::ConfigurableAICommandNode;
} // namespace RED4ext

// clang-format on
