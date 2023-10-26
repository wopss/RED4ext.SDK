#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CinematicAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CommunityParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DynamicAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EntityAcquisitionPlan.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/FindEntityInContextParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/FindEntityInWorldParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/LipsyncAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidCyberwareAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidDeformationAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidFacialAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SpawnDespawnEntityParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SpawnSetParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SpawnerParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/VoicetagId.hpp>

namespace RED4ext
{
struct CResource;

namespace scn
{
struct __declspec(align(0x10)) ActorDef
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
    RaRef<CResource> holocallInitScn; // 1A0
    scn::LipsyncAnimSetSRRefId lipsyncAnimSet; // 1A8
    uint8_t unk1AC[0x1B0 - 0x1AC]; // 1AC
    CString actorName; // 1B0
    TweakDBID specCharacterRecordId; // 1D0
    CName specAppearance; // 1D8
};
RED4EXT_ASSERT_SIZE(ActorDef, 0x1E0);
} // namespace scn
using scnActorDef = scn::ActorDef;
} // namespace RED4ext

// clang-format on
