#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldDataManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingTestCheckpointType.hpp>

namespace RED4ext
{
namespace quest
{
struct StreamingTestCheckpoint_NodeType : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questStreamingTestCheckpoint_NodeType";
    static constexpr const char* ALIAS = NAME;

    world::StreamingTestCheckpointType checkpointType; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(StreamingTestCheckpoint_NodeType, 0x40);
} // namespace quest
using questStreamingTestCheckpoint_NodeType = quest::StreamingTestCheckpoint_NodeType;
} // namespace RED4ext

// clang-format on
