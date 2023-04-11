#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptionOperation; }
namespace scn { struct InterestingConversationsResource; }

namespace world
{
struct ConversationGroupData : ISerializable
{
    static constexpr const char* NAME = "worldConversationGroupData";
    static constexpr const char* ALIAS = NAME;

    Ref<scn::InterestingConversationsResource> conversationGroup; // 30
    DynArray<Handle<scn::IInterruptionOperation>> interruptionOperations; // 48
    bool ignoreLocalLimit; // 58
    bool ignoreGlobalLimit; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
};
RED4EXT_ASSERT_SIZE(ConversationGroupData, 0x60);
} // namespace world
using worldConversationGroupData = world::ConversationGroupData;
} // namespace RED4ext

// clang-format on
