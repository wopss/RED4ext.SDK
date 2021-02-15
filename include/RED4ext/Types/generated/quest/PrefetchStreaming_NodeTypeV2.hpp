#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/IWorldDataManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct PrefetchStreaming_NodeTypeV2 : quest::IWorldDataManagerNodeType
{
    static constexpr const char* NAME = "questPrefetchStreaming_NodeTypeV2";
    static constexpr const char* ALIAS = NAME;

    NodeRef prefetchPositionRef; // 38
    bool useStreamingOcclusion; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float maxDistance; // 44
};
RED4EXT_ASSERT_SIZE(PrefetchStreaming_NodeTypeV2, 0x48);
} // namespace quest
} // namespace RED4ext
