#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink
{
struct WorldAttachedEvt : red::Event
{
    static constexpr const char* NAME = "inkWorldAttachedEvt";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WorldAttachedEvt, 0x40);
} // namespace ink
using inkWorldAttachedEvt = ink::WorldAttachedEvt;
} // namespace RED4ext

// clang-format on
