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
struct PreloadEffectEvent : red::Event
{
    static constexpr const char* NAME = "entPreloadEffectEvent";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 40
};
RED4EXT_ASSERT_SIZE(PreloadEffectEvent, 0x48);
} // namespace ent
using entPreloadEffectEvent = ent::PreloadEffectEvent;
} // namespace RED4ext

// clang-format on
