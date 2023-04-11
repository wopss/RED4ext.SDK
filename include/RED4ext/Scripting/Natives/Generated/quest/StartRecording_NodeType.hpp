#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRecordingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct StartRecording_NodeType : quest::IRecordingNodeType
{
    static constexpr const char* NAME = "questStartRecording_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    CString sectionName; // 38
};
RED4EXT_ASSERT_SIZE(StartRecording_NodeType, 0x58);
} // namespace quest
using questStartRecording_NodeType = quest::StartRecording_NodeType;
} // namespace RED4ext

// clang-format on
