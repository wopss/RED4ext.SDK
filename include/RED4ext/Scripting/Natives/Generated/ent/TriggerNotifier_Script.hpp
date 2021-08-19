#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace ent { 
struct TriggerNotifier_Script : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "entTriggerNotifier_Script";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TriggerNotifier_Script, 0xB8);
} // namespace ent
} // namespace RED4ext
