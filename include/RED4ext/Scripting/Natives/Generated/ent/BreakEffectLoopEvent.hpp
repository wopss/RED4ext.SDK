#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct BreakEffectLoopEvent : red::Event
{
    static constexpr const char* NAME = "entBreakEffectLoopEvent";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 40
};
RED4EXT_ASSERT_SIZE(BreakEffectLoopEvent, 0x48);
} // namespace ent
} // namespace RED4ext
