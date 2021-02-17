#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IPhoneManagerNodeType; }

namespace quest { 
struct PhoneManagerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questPhoneManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IPhoneManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(PhoneManagerNodeDefinition, 0x58);
} // namespace quest
} // namespace RED4ext
