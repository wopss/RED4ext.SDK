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
#include <RED4ext/Scripting/Natives/Generated/scn/DynamicAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EntityAcquisitionPlan.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/FindEntityInContextParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/FindNetworkPlayerParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/LipsyncAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidCyberwareAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidDeformationAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidFacialAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/VoicetagId.hpp>

namespace RED4ext
{
namespace scn
{
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
    uint8_t unkDC[0xE0 - 0xDC]; // DC
    CString playerName; // E0
};
RED4EXT_ASSERT_SIZE(PlayerActorDef, 0x100);
} // namespace scn
using scnPlayerActorDef = scn::PlayerActorDef;
} // namespace RED4ext

// clang-format on
