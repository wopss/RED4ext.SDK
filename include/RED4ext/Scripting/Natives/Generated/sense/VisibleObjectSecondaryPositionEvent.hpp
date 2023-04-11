#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace sense
{
struct VisibleObjectSecondaryPositionEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibleObjectSecondaryPositionEvent";
    static constexpr const char* ALIAS = "VisibleObjectSecondaryPositionEvent";

    Vector3 offset; // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(VisibleObjectSecondaryPositionEvent, 0x50);
} // namespace sense
using senseVisibleObjectSecondaryPositionEvent = sense::VisibleObjectSecondaryPositionEvent;
using VisibleObjectSecondaryPositionEvent = sense::VisibleObjectSecondaryPositionEvent;
} // namespace RED4ext

// clang-format on
