#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct ObjectMarkerVisibilityUpdated : red::Event
{
    static constexpr const char* NAME = "gameeventsObjectMarkerVisibilityUpdated";
    static constexpr const char* ALIAS = NAME;

    bool canHaveObjectMarker; // 40
    bool isVisible; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(ObjectMarkerVisibilityUpdated, 0x48);
} // namespace game::events
using gameeventsObjectMarkerVisibilityUpdated = game::events::ObjectMarkerVisibilityUpdated;
} // namespace RED4ext

// clang-format on
