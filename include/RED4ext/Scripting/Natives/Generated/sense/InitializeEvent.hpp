#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct InitializeEvent : red::Event
{
    static constexpr const char* NAME = "senseInitializeEvent";
    static constexpr const char* ALIAS = "SenseInitializeEvent";

};
RED4EXT_ASSERT_SIZE(InitializeEvent, 0x40);
} // namespace sense
using senseInitializeEvent = sense::InitializeEvent;
using SenseInitializeEvent = sense::InitializeEvent;
} // namespace RED4ext

// clang-format on
