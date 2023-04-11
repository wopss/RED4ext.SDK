#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimSetAnimNames.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimSetDynAnimNames.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CinematicAnimSetSRRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DynamicAnimSetSRRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/GameplayAnimSetSRRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/LipsyncAnimSetSRRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimSetSRRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimationContainerSRRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimationSRRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidCameraAnimationSRRef.hpp>

namespace RED4ext
{
namespace scn
{
struct SRRefCollection
{
    static constexpr const char* NAME = "scnSRRefCollection";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::RidAnimationSRRef> ridAnimations; // 00
    DynArray<scn::RidAnimSetSRRef> ridAnimSets; // 10
    DynArray<scn::RidAnimSetSRRef> ridFacialAnimSets; // 20
    DynArray<scn::RidAnimSetSRRef> ridCyberwareAnimSets; // 30
    DynArray<scn::RidAnimSetSRRef> ridDeformationAnimSets; // 40
    DynArray<scn::LipsyncAnimSetSRRef> lipsyncAnimSets; // 50
    DynArray<scn::RidCameraAnimationSRRef> ridCameraAnimations; // 60
    DynArray<scn::CinematicAnimSetSRRef> cinematicAnimSets; // 70
    DynArray<scn::GameplayAnimSetSRRef> gameplayAnimSets; // 80
    DynArray<scn::DynamicAnimSetSRRef> dynamicAnimSets; // 90
    DynArray<scn::AnimSetAnimNames> cinematicAnimNames; // A0
    DynArray<scn::AnimSetAnimNames> gameplayAnimNames; // B0
    DynArray<scn::AnimSetDynAnimNames> dynamicAnimNames; // C0
    DynArray<scn::RidAnimationContainerSRRef> ridAnimationContainers; // D0
};
RED4EXT_ASSERT_SIZE(SRRefCollection, 0xE0);
} // namespace scn
using scnSRRefCollection = scn::SRRefCollection;
} // namespace RED4ext

// clang-format on
