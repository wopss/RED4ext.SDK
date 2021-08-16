#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/CinematicAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/CommunityParams.hpp>
#include <RED4ext/Types/generated/scn/DynamicAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/EntityAcquisitionPlan.hpp>
#include <RED4ext/Types/generated/scn/FindEntityInEntityParams.hpp>
#include <RED4ext/Types/generated/scn/FindEntityInNodeParams.hpp>
#include <RED4ext/Types/generated/scn/FindEntityInWorldParams.hpp>
#include <RED4ext/Types/generated/scn/PropId.hpp>
#include <RED4ext/Types/generated/scn/RidAnimSetSRRefId.hpp>
#include <RED4ext/Types/generated/scn/SpawnDespawnEntityParams.hpp>
#include <RED4ext/Types/generated/scn/SpawnSetParams.hpp>
#include <RED4ext/Types/generated/scn/SpawnerParams.hpp>

namespace RED4ext
{
namespace scn { 
struct PropDef
{
    static constexpr const char* NAME = "scnPropDef";
    static constexpr const char* ALIAS = NAME;

    scn::EntityAcquisitionPlan entityAcquisitionPlan; // 00
    scn::FindEntityInEntityParams findEntityInEntityParams; // 04
    uint8_t unk2C[0x30 - 0x2C]; // 2C
    scn::SpawnDespawnEntityParams spawnDespawnParams; // 30
    scn::SpawnSetParams spawnSetParams; // 90
    scn::CommunityParams communityParams; // A8
    scn::SpawnerParams spawnerParams; // C0
    scn::FindEntityInNodeParams findEntityInNodeParams; // D0
    scn::FindEntityInWorldParams findEntityInWorldParams; // E0
    scn::PropId propId; // 120
    uint8_t unk124[0x128 - 0x124]; // 124
    CString propName; // 128
    TweakDBID specPropRecordId; // 148
    DynArray<scn::RidAnimSetSRRefId> animSets; // 150
    DynArray<scn::CinematicAnimSetSRRefId> cinematicAnimSets; // 160
    DynArray<scn::DynamicAnimSetSRRefId> dynamicAnimSets; // 170
};
RED4EXT_ASSERT_SIZE(PropDef, 0x180);
} // namespace scn
} // namespace RED4ext
