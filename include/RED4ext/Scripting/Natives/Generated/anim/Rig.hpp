#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/animRig.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(anim::Rig, 0x180);
using animRig = anim::Rig;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatTrackInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/RigPart.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/RigRetarget.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyNames.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace anim { struct IRigIkSetup; }

namespace anim
{
struct Rig : CResource
{
    static constexpr const char* NAME = "animRig";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
    DynArray<CName> boneNames; // 50
    DynArray<QsTransform> referencePoseMS; // 60
    DynArray<int16_t> levelOfDetailStartIndices; // 70
    DynArray<int16_t> distanceCategoryToLodMap; // 80
    int32_t turnOffLOD; // 90
    bool turningOffUpdateAndSample; // 94
    uint8_t unk95[0xB8 - 0x95]; // 95
    DynArray<QsTransform> aPoseLS; // B8
    DynArray<QsTransform> aPoseMS; // C8
    uint8_t unkD8[0xE8 - 0xD8]; // D8
    DynArray<CName> trackNames; // E8
    DynArray<float> referenceTracks; // F8
    DynArray<anim::FloatTrackInfo> rigExtraTracks; // 108
    uint8_t unk118[0x120 - 0x118]; // 118
    red::TagList tags; // 120
    DynArray<anim::RigPart> parts; // 130
    DynArray<anim::RigRetarget> retargets; // 140
    DynArray<Handle<anim::IRigIkSetup>> ikSetups; // 150
    DynArray<physics::RagdollBodyInfo> ragdollDesc; // 160
    DynArray<physics::RagdollBodyNames> ragdollNames; // 170
};
RED4EXT_ASSERT_SIZE(Rig, 0x180);
} // namespace anim
using animRig = anim::Rig;
} // namespace RED4ext
*/

// clang-format on
