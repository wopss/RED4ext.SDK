#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct UpdateEffectPositionEvent : red::Event
{
    static constexpr const char* NAME = "entUpdateEffectPositionEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(UpdateEffectPositionEvent, 0x40);
} // namespace ent
} // namespace RED4ext
