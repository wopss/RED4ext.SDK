#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/Event.hpp>

namespace RED4ext
{
namespace ink { 
struct LocalizationChangedEvent : ink::Event
{
    static constexpr const char* NAME = "inkLocalizationChangedEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LocalizationChangedEvent, 0x68);
} // namespace ink
} // namespace RED4ext
