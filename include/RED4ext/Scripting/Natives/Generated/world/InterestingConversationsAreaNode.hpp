#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ConversationSavingStrategy.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace scn { struct InterestingConversationsResource; }
namespace world { struct ConversationData; }
namespace world { struct ConversationGroupData; }

namespace world
{
struct InterestingConversationsAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldInterestingConversationsAreaNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<scn::InterestingConversationsResource>> conversationGroups; // 70
    DynArray<Handle<world::ConversationGroupData>> conversationResources; // 80
    DynArray<Handle<world::ConversationData>> conversations; // 90
    DynArray<NodeRef> workspots; // A0
    audio::ConversationSavingStrategy savingStrategy; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(InterestingConversationsAreaNode, 0xB8);
} // namespace world
using worldInterestingConversationsAreaNode = world::InterestingConversationsAreaNode;
} // namespace RED4ext

// clang-format on
