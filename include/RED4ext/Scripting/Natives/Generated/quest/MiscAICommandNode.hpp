#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ConfigurableAICommandNode.hpp>

namespace RED4ext
{
namespace quest { struct AICommandParams; }

namespace quest
{
struct MiscAICommandNode : quest::ConfigurableAICommandNode
{
    static constexpr const char* NAME = "questMiscAICommandNode";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 48
    CName function; // 80
    Handle<quest::AICommandParams> params; // 88
};
RED4EXT_ASSERT_SIZE(MiscAICommandNode, 0x98);
} // namespace quest
using questMiscAICommandNode = quest::MiscAICommandNode;
} // namespace RED4ext

// clang-format on
