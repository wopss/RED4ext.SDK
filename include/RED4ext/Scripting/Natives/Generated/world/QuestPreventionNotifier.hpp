#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/QuestPreventionNotifierActivation.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/QuestPreventionNotifierType.hpp>

namespace RED4ext
{
namespace world
{
struct QuestPreventionNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldQuestPreventionNotifier";
    static constexpr const char* ALIAS = NAME;

    world::QuestPreventionNotifierActivation activation; // B8
    world::QuestPreventionNotifierType type; // B9
    uint8_t unkBA[0xC0 - 0xBA]; // BA
};
RED4EXT_ASSERT_SIZE(QuestPreventionNotifier, 0xC0);
} // namespace world
using worldQuestPreventionNotifier = world::QuestPreventionNotifier;
} // namespace RED4ext

// clang-format on
