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
struct RenderHighlightEvent : red::Event
{
    static constexpr const char* NAME = "entRenderHighlightEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t fillIndex; // 40
    uint8_t outlineIndex; // 41
    bool seeThroughWalls; // 42
    uint8_t unk43[0x48 - 0x43]; // 43
    CName componentName; // 48
    float opacity; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(RenderHighlightEvent, 0x58);
} // namespace ent
using entRenderHighlightEvent = ent::RenderHighlightEvent;
} // namespace RED4ext

// clang-format on
