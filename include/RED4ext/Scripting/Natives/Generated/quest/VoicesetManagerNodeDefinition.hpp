#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IVoicesetManager_NodeType; }

namespace quest
{
struct VoicesetManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questVoicesetManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IVoicesetManager_NodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(VoicesetManagerNodeDefinition, 0x58);
} // namespace quest
using questVoicesetManagerNodeDefinition = quest::VoicesetManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
