#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayFPPControlAnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidActorPlacement.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimationSRRefId.hpp>

namespace RED4ext
{
namespace scn
{
struct PlayRidAnimEvent : scn::PlayFPPControlAnimEvent
{
    static constexpr const char* NAME = "scnPlayRidAnimEvent";
    static constexpr const char* ALIAS = NAME;

    uint32_t ridVersinon; // F8
    scn::RidAnimationSRRefId animResRefId; // FC
    scn::Marker animOriginMarker; // 100
    scn::RidActorPlacement actorPlacement; // 160
    bool actorHasCollision; // 164
    uint8_t unk165[0x168 - 0x165]; // 165
    float blendInTrajectoryBone; // 168
    uint8_t unk16C[0x170 - 0x16C]; // 16C
};
RED4EXT_ASSERT_SIZE(PlayRidAnimEvent, 0x170);
} // namespace scn
using scnPlayRidAnimEvent = scn::PlayRidAnimEvent;
} // namespace RED4ext

// clang-format on
