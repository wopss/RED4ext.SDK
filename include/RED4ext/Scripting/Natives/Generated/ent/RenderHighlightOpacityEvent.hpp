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
struct RenderHighlightOpacityEvent : red::Event
{
    static constexpr const char* NAME = "entRenderHighlightOpacityEvent";
    static constexpr const char* ALIAS = "HighlightOpacityEvent";

    float opacity; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(RenderHighlightOpacityEvent, 0x48);
} // namespace ent
using entRenderHighlightOpacityEvent = ent::RenderHighlightOpacityEvent;
using HighlightOpacityEvent = ent::RenderHighlightOpacityEvent;
} // namespace RED4ext

// clang-format on
