#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/ActorId.hpp>
#include <RED4ext/Types/generated/scn/CinematicAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/DynamicAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/EntityAcquisitionPlan.hpp>
#include <RED4ext/Types/generated/scn/FindEntityInContextParams.hpp>
#include <RED4ext/Types/generated/scn/FindNetworkPlayerParams.hpp>
#include <RED4ext/Types/generated/scn/LipsyncAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/RidCyberwareAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/RidDeformationAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/RidFacialAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/SRRefId.hpp>
#include <RED4ext/Types/generated/scn/VoicetagId.hpp>

namespace RED4ext
{
namespace scn { 
struct PlayerActorDef
{
    static constexpr const char* NAME = "scnPlayerActorDef";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName specTemplate; // 08
    TweakDBID specCharacterRecordId; // 10
    CName specAppearance; // 18
    scn::VoicetagId voicetagId; // 20
    DynArray<scn::SRRefId> animSets; // 28
    DynArray<scn::RidFacialAnimSetSRRefId> facialAnimSets; // 38
    DynArray<scn::RidCyberwareAnimSetSRRefId> cyberwareAnimSets; // 48
    DynArray<scn::RidDeformationAnimSetSRRefId> deformationAnimSets; // 58
    DynArray<scn::CinematicAnimSetSRRefId> bodyCinematicAnimSets; // 68
    DynArray<scn::CinematicAnimSetSRRefId> facialCinematicAnimSets; // 78
    DynArray<scn::CinematicAnimSetSRRefId> cyberwareCinematicAnimSets; // 88
    DynArray<scn::DynamicAnimSetSRRefId> dynamicAnimSets; // 98
    scn::EntityAcquisitionPlan acquisitionPlan; // A8
    scn::FindNetworkPlayerParams findNetworkPlayerParams; // AC
    scn::FindEntityInContextParams findActorInContextParams; // B0
    scn::LipsyncAnimSetSRRefId lipsyncAnimSet; // D8
    CString playerName; // E8
};
RED4EXT_ASSERT_SIZE(PlayerActorDef, 0x108);
} // namespace scn
} // namespace RED4ext
