#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace quest
{
struct TriggerNotifier_Quest : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "questTriggerNotifier_Quest";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TriggerNotifier_Quest, 0xB8);
} // namespace quest
using questTriggerNotifier_Quest = quest::TriggerNotifier_Quest;
} // namespace RED4ext

// clang-format on
