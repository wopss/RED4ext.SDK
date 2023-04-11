#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRecordingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct StopRecording_NodeType : quest::IRecordingNodeType
{
    static constexpr const char* NAME = "questStopRecording_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StopRecording_NodeType, 0x30);
} // namespace quest
using questStopRecording_NodeType = quest::StopRecording_NodeType;
} // namespace RED4ext

// clang-format on
