#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct FactChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameFactChangedEvent";
    static constexpr const char* ALIAS = "FactChangedEvent";

    CName factName; // 40
};
RED4EXT_ASSERT_SIZE(FactChangedEvent, 0x48);
} // namespace game
using FactChangedEvent = game::FactChangedEvent;
} // namespace RED4ext
