#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Event.hpp>

namespace RED4ext
{
namespace ink
{
struct LocalizationChangedEvent : ink::Event
{
    static constexpr const char* NAME = "inkLocalizationChangedEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LocalizationChangedEvent, 0x68);
} // namespace ink
using inkLocalizationChangedEvent = ink::LocalizationChangedEvent;
} // namespace RED4ext

// clang-format on
