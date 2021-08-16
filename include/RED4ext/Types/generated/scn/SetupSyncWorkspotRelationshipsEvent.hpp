#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/SceneEvent.hpp>
#include <RED4ext/Types/generated/scn/SceneWorkspotInstanceId.hpp>

namespace RED4ext
{
namespace scn { 
struct SetupSyncWorkspotRelationshipsEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnSetupSyncWorkspotRelationshipsEvent";
    static constexpr const char* ALIAS = NAME;

    StaticArray<scn::SceneWorkspotInstanceId, 4> syncedWorkspotIds; // 58
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(SetupSyncWorkspotRelationshipsEvent, 0x70);
} // namespace scn
} // namespace RED4ext
