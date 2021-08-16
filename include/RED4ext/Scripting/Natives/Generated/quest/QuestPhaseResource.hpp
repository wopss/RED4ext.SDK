#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/QuestPrefabEntry.hpp>

namespace RED4ext
{
namespace quest { 
struct QuestPhaseResource : graph::GraphResource
{
    static constexpr const char* NAME = "questQuestPhaseResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::QuestPrefabEntry> phasePrefabs; // 50
};
RED4EXT_ASSERT_SIZE(QuestPhaseResource, 0x60);
} // namespace quest
} // namespace RED4ext
