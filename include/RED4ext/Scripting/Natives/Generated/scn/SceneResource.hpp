#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorDef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DebugSymbols.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EffectDef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EffectInstance.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EntryPoint.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ExecutionTag.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ExecutionTagEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ExitPoint.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InterruptionScenario.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/LocalMarker.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NotablePoint.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayerActorDef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropDef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ReferencePointDef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidResourceHandler.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SRRefCollection.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneCategoryTag.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneSolutionHash.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVOInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/WorkspotInstance.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/LocStoreEmbedded.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/Store.hpp>

namespace RED4ext
{
namespace scn { struct SceneGraph; }
namespace scn { struct WorkspotData; }

namespace scn
{
struct SceneResource : CResource
{
    static constexpr const char* NAME = "scnSceneResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::EntryPoint> entryPoints; // 40
    DynArray<scn::ExitPoint> exitPoints; // 50
    DynArray<scn::NotablePoint> notablePoints; // 60
    DynArray<scn::ExecutionTagEntry> executionTagEntries; // 70
    DynArray<scn::ActorDef> actors; // 80
    DynArray<scn::PlayerActorDef> playerActors; // 90
    DynArray<scn::LocalMarker> localMarkers; // A0
    DynArray<scn::PropDef> props; // B0
    DynArray<scn::RidResourceHandler> ridResources; // C0
    DynArray<Handle<scn::WorkspotData>> workspots; // D0
    DynArray<scn::WorkspotInstance> workspotInstances; // E0
    DynArray<scn::SceneVOInfo> voInfo; // F0
    DynArray<scn::EffectDef> effectDefinitions; // 100
    DynArray<scn::EffectInstance> effectInstances; // 110
    DynArray<scn::ExecutionTag> executionTags; // 120
    DynArray<scn::ReferencePointDef> referencePoints; // 130
    DynArray<scn::InterruptionScenario> interruptionScenarios; // 140
    scn::SRRefCollection resouresReferences; // 150
    Handle<scn::SceneGraph> sceneGraph; // 230
    scn::screenplay::Store screenplayStore; // 240
    scn::loc::LocStoreEmbedded locStore; // 260
    uint32_t version; // 280
    uint8_t unk284[0x288 - 0x284]; // 284
    scn::SceneSolutionHash sceneSolutionHash; // 288
    scn::SceneCategoryTag sceneCategoryTag; // 290
    uint8_t unk291[0x298 - 0x291]; // 291
    scn::DebugSymbols debugSymbols; // 298
};
RED4EXT_ASSERT_SIZE(SceneResource, 0x2D8);
} // namespace scn
using scnSceneResource = scn::SceneResource;
} // namespace RED4ext

// clang-format on
