#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/QuestPhaseResource.hpp>

namespace RED4ext
{
namespace quest
{
struct QuestResource : quest::QuestPhaseResource
{
    static constexpr const char* NAME = "questQuestResource";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(QuestResource, 0x70);
} // namespace quest
using questQuestResource = quest::QuestResource;
} // namespace RED4ext

// clang-format on
