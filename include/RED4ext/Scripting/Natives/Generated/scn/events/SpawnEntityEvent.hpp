#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/SpawnEntityEventParams.hpp>

namespace RED4ext
{
namespace scn::events
{
struct SpawnEntityEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsSpawnEntityEvent";
    static constexpr const char* ALIAS = NAME;

    scn::events::SpawnEntityEventParams params; // 58
};
RED4EXT_ASSERT_SIZE(SpawnEntityEvent, 0x80);
} // namespace scn::events
using scneventsSpawnEntityEvent = scn::events::SpawnEntityEvent;
} // namespace RED4ext

// clang-format on
