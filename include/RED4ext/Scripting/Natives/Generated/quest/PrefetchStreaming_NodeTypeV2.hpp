#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IWorldDataManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct PrefetchStreaming_NodeTypeV2 : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questPrefetchStreaming_NodeTypeV2";
    static constexpr const char* ALIAS = NAME;

    NodeRef prefetchPositionRef; // 38
    float maxDistance; // 40
    bool useStreamingOcclusion; // 44
    bool forceEnable; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
};
RED4EXT_ASSERT_SIZE(PrefetchStreaming_NodeTypeV2, 0x48);
} // namespace quest
using questPrefetchStreaming_NodeTypeV2 = quest::PrefetchStreaming_NodeTypeV2;
} // namespace RED4ext

// clang-format on
