#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IRecordingNodeType; }

namespace quest
{
struct RecordingNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questRecordingNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IRecordingNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(RecordingNodeDefinition, 0x58);
} // namespace quest
using questRecordingNodeDefinition = quest::RecordingNodeDefinition;
} // namespace RED4ext

// clang-format on
