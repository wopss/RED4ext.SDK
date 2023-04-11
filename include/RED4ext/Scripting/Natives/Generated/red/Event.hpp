#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace red
{
struct Event : IScriptable
{
    static constexpr const char* NAME = "redEvent";
    static constexpr const char* ALIAS = "Event";

};
RED4EXT_ASSERT_SIZE(Event, 0x40);
} // namespace red
using redEvent = red::Event;
using Event = red::Event;
} // namespace RED4ext

// clang-format on
