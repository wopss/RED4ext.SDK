#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayFPPControlAnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidActorPlacement.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimationSRRefId.hpp>

namespace RED4ext
{
namespace scn { 
struct PlayRidAnimEvent : scn::PlayFPPControlAnimEvent
{
    static constexpr const char* NAME = "scnPlayRidAnimEvent";
    static constexpr const char* ALIAS = NAME;

    uint32_t ridVersinon; // F8
    uint8_t unkFC[0x100 - 0xFC]; // FC
    scn::RidAnimationSRRefId animResRefId; // 100
    scn::Marker animOriginMarker; // 110
    scn::RidActorPlacement actorPlacement; // 170
    bool actorHasCollision; // 174
    uint8_t unk175[0x178 - 0x175]; // 175
    float blendInTrajectoryBone; // 178
    uint8_t unk17C[0x180 - 0x17C]; // 17C
};
RED4EXT_ASSERT_SIZE(PlayRidAnimEvent, 0x180);
} // namespace scn
} // namespace RED4ext
