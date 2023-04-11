#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IBehaviourManager_NodeType; }
namespace work { struct IWorkspotQuestAction; }

namespace quest
{
struct BehaviourManagerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questBehaviourManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppet; // 48
    Handle<work::IWorkspotQuestAction> type; // 80
    Handle<quest::IBehaviourManager_NodeType> newType; // 90
};
RED4EXT_ASSERT_SIZE(BehaviourManagerNodeDefinition, 0xA0);
} // namespace quest
using questBehaviourManagerNodeDefinition = quest::BehaviourManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
