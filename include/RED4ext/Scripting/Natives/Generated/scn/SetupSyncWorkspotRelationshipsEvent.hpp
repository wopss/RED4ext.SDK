#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneWorkspotInstanceId.hpp>

namespace RED4ext
{
namespace scn
{
struct SetupSyncWorkspotRelationshipsEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnSetupSyncWorkspotRelationshipsEvent";
    static constexpr const char* ALIAS = NAME;

    StaticArray<scn::SceneWorkspotInstanceId, 4> syncedWorkspotIds; // 58
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(SetupSyncWorkspotRelationshipsEvent, 0x70);
} // namespace scn
using scnSetupSyncWorkspotRelationshipsEvent = scn::SetupSyncWorkspotRelationshipsEvent;
} // namespace RED4ext

// clang-format on
