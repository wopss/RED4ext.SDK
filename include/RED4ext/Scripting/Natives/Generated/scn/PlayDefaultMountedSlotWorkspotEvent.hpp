#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PuppetVehicleState.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct PlayDefaultMountedSlotWorkspotEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnPlayDefaultMountedSlotWorkspotEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    game::EntityReference parentRef; // 60
    CName slotName; // 98
    scn::PuppetVehicleState puppetVehicleState; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
};
RED4EXT_ASSERT_SIZE(PlayDefaultMountedSlotWorkspotEvent, 0xA8);
} // namespace scn
using scnPlayDefaultMountedSlotWorkspotEvent = scn::PlayDefaultMountedSlotWorkspotEvent;
} // namespace RED4ext

// clang-format on
