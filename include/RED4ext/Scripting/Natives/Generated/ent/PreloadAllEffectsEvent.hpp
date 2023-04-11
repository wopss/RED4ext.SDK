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
struct PreloadAllEffectsEvent : red::Event
{
    static constexpr const char* NAME = "entPreloadAllEffectsEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PreloadAllEffectsEvent, 0x40);
} // namespace ent
using entPreloadAllEffectsEvent = ent::PreloadAllEffectsEvent;
} // namespace RED4ext

// clang-format on
