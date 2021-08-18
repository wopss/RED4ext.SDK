#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace quest { 
struct GatherTriggerNotifier_Quest : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "questGatherTriggerNotifier_Quest";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GatherTriggerNotifier_Quest, 0xB8);
} // namespace quest
} // namespace RED4ext
