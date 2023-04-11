#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct PreUninitializeEvent : red::Event
{
    static constexpr const char* NAME = "entPreUninitializeEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PreUninitializeEvent, 0x40);
} // namespace ent
using entPreUninitializeEvent = ent::PreUninitializeEvent;
} // namespace RED4ext

// clang-format on
