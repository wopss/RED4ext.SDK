#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio { 
struct ConversationCharacterCondition
{
    static constexpr const char* NAME = "audioConversationCharacterCondition";
    static constexpr const char* ALIAS = NAME;

    CName voiceTag; // 00
    uint64_t characterRecordId; // 08
    CName actorContextName; // 10
    uint64_t actorsInitialWorkspotNodeRefHash; // 18
};
RED4EXT_ASSERT_SIZE(ConversationCharacterCondition, 0x20);
} // namespace audio
} // namespace RED4ext
