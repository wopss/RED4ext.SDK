#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/QuestPrefabEntry.hpp>

namespace RED4ext
{
struct CResource;

namespace quest
{
struct QuestPhaseResource : graph::GraphResource
{
    static constexpr const char* NAME = "questQuestPhaseResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::QuestPrefabEntry> phasePrefabs; // 50
    DynArray<Ref<CResource>> inplacePhases; // 60
};
RED4EXT_ASSERT_SIZE(QuestPhaseResource, 0x70);
} // namespace quest
using questQuestPhaseResource = quest::QuestPhaseResource;
} // namespace RED4ext

// clang-format on
