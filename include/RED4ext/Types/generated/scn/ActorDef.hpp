#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/ActorId.hpp>
#include <RED4ext/Types/generated/scn/CinematicAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/CommunityParams.hpp>
#include <RED4ext/Types/generated/scn/DynamicAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/EntityAcquisitionPlan.hpp>
#include <RED4ext/Types/generated/scn/FindEntityInContextParams.hpp>
#include <RED4ext/Types/generated/scn/FindEntityInWorldParams.hpp>
#include <RED4ext/Types/generated/scn/LipsyncAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/RidCyberwareAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/RidDeformationAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/RidFacialAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/SRRefId.hpp>
#include <RED4ext/Types/generated/scn/SpawnDespawnEntityParams.hpp>
#include <RED4ext/Types/generated/scn/SpawnSetParams.hpp>
#include <RED4ext/Types/generated/scn/SpawnerParams.hpp>
#include <RED4ext/Types/generated/scn/VoicetagId.hpp>

namespace RED4ext
{
namespace scn { 
struct ActorDef
{
    static constexpr const char* NAME = "scnActorDef";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    scn::VoicetagId voicetagId; // 08
    scn::EntityAcquisitionPlan acquisitionPlan; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
    scn::FindEntityInContextParams findActorInContextParams; // 18
    scn::FindEntityInWorldParams findActorInWorldParams; // 40
    scn::SpawnDespawnEntityParams spawnDespawnParams; // 80
    scn::SpawnSetParams spawnSetParams; // E0
    scn::CommunityParams communityParams; // F8
    scn::SpawnerParams spawnerParams; // 110
    DynArray<scn::SRRefId> animSets; // 120
    DynArray<scn::RidFacialAnimSetSRRefId> facialAnimSets; // 130
    DynArray<scn::RidCyberwareAnimSetSRRefId> cyberwareAnimSets; // 140
    DynArray<scn::RidDeformationAnimSetSRRefId> deformationAnimSets; // 150
    DynArray<scn::CinematicAnimSetSRRefId> bodyCinematicAnimSets; // 160
    DynArray<scn::CinematicAnimSetSRRefId> facialCinematicAnimSets; // 170
    DynArray<scn::CinematicAnimSetSRRefId> cyberwareCinematicAnimSets; // 180
    DynArray<scn::DynamicAnimSetSRRefId> dynamicAnimSets; // 190
    scn::LipsyncAnimSetSRRefId lipsyncAnimSet; // 1A0
    CString actorName; // 1B0
    TweakDBID specCharacterRecordId; // 1D0
    CName specAppearance; // 1D8
};
RED4EXT_ASSERT_SIZE(ActorDef, 0x1E0);
} // namespace scn
} // namespace RED4ext
