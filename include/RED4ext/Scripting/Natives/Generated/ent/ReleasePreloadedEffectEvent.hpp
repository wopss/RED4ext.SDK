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
struct ReleasePreloadedEffectEvent : red::Event
{
    static constexpr const char* NAME = "entReleasePreloadedEffectEvent";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 40
};
RED4EXT_ASSERT_SIZE(ReleasePreloadedEffectEvent, 0x48);
} // namespace ent
using entReleasePreloadedEffectEvent = ent::ReleasePreloadedEffectEvent;
} // namespace RED4ext

// clang-format on
