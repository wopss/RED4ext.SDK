#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/DespawnEntityEventParams.hpp>

namespace RED4ext
{
namespace scn::events
{
struct DespawnEntityEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsDespawnEntityEvent";
    static constexpr const char* ALIAS = NAME;

    scn::events::DespawnEntityEventParams params; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(DespawnEntityEvent, 0x60);
} // namespace scn::events
using scneventsDespawnEntityEvent = scn::events::DespawnEntityEvent;
} // namespace RED4ext

// clang-format on
