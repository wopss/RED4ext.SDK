#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/scn/SceneEvent.hpp>
#include <RED4ext/Types/generated/scn/events/SpawnEntityEventParams.hpp>

namespace RED4ext
{
namespace scn::events { 
struct SpawnEntityEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsSpawnEntityEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
    scn::events::SpawnEntityEventParams params; // 60
};
RED4EXT_ASSERT_SIZE(SpawnEntityEvent, 0x120);
} // namespace scn::events
} // namespace RED4ext
