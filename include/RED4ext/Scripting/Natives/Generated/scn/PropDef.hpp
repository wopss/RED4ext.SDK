#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CinematicAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CommunityParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DynamicAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EntityAcquisitionPlan.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/FindEntityInEntityParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/FindEntityInNodeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/FindEntityInWorldParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimSetSRRefId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SpawnDespawnEntityParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SpawnSetParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SpawnerParams.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) PropDef
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
using scnPropDef = scn::PropDef;
} // namespace RED4ext

// clang-format on
