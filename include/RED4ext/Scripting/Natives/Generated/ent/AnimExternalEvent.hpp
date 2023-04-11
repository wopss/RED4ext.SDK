#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimExternalEvent : red::Event
{
    static constexpr const char* NAME = "entAnimExternalEvent";
    static constexpr const char* ALIAS = "AnimExternalEvent";

    CName name; // 40
};
RED4EXT_ASSERT_SIZE(AnimExternalEvent, 0x48);
} // namespace ent
using entAnimExternalEvent = ent::AnimExternalEvent;
using AnimExternalEvent = ent::AnimExternalEvent;
} // namespace RED4ext

// clang-format on
