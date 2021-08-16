#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/HUDEntryVisibilityData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest { 
struct HUDEntryVisibilityEvent : red::Event
{
    static constexpr const char* NAME = "questHUDEntryVisibilityEvent";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::HUDEntryVisibilityData> dataEntries; // 40
};
RED4EXT_ASSERT_SIZE(HUDEntryVisibilityEvent, 0x50);
} // namespace quest
} // namespace RED4ext
