#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::hit
{
struct RepresentationEventsToggleHitShapeEvent : red::Event
{
    static constexpr const char* NAME = "gamehitRepresentationEventsToggleHitShapeEvent";
    static constexpr const char* ALIAS = "ToggleHitShapeEvent";

    CName hitShapeName; // 40
    bool enable; // 48
    bool hierarchical; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
};
RED4EXT_ASSERT_SIZE(RepresentationEventsToggleHitShapeEvent, 0x50);
} // namespace game::hit
using gamehitRepresentationEventsToggleHitShapeEvent = game::hit::RepresentationEventsToggleHitShapeEvent;
using ToggleHitShapeEvent = game::hit::RepresentationEventsToggleHitShapeEvent;
} // namespace RED4ext

// clang-format on
