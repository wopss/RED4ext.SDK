#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ConversationCharacterCondition.hpp>

namespace RED4ext
{
namespace audio
{
struct ConversationItemMetadata
{
    static constexpr const char* NAME = "audioConversationItemMetadata";
    static constexpr const char* ALIAS = NAME;

    CName sceneFile; // 00
    DynArray<audio::ConversationCharacterCondition> characterConditions; // 08
    bool shouldSceneInstanceBeSaved; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(ConversationItemMetadata, 0x20);
} // namespace audio
using audioConversationItemMetadata = audio::ConversationItemMetadata;
} // namespace RED4ext

// clang-format on
