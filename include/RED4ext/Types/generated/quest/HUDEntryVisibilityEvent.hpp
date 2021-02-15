#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/quest/HUDEntryVisibilityData.hpp>

namespace RED4ext
{
namespace quest { 
struct HUDEntryVisibilityEvent
{
    static constexpr const char* NAME = "questHUDEntryVisibilityEvent";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::HUDEntryVisibilityData> dataEntries; // 00
};
RED4EXT_ASSERT_SIZE(HUDEntryVisibilityEvent, 0x10);
} // namespace quest
} // namespace RED4ext
