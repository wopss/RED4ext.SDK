#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
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
#include <cstdint>

namespace RED4ext::anim
{
struct IRigIkSetup;

struct Rig : CResource
{
    static constexpr const char* NAME = "animRig";
    static constexpr const char* ALIAS = NAME;

    // parentIndices(0x40) and referencePoseLS(0x48) share size with boneNames(0x50)
    int16_t* parentIndices;                           // 40
    QsTransform* referencePoseLS;                     // 48
    DynArray<CName> boneNames;                        // 50
    DynArray<QsTransform> referencePoseMS;            // 60
    DynArray<int16_t> levelOfDetailStartIndices;      // 70
    DynArray<int16_t> distanceCategoryToLodMap;       // 80
    int32_t turnOffLOD;                               // 90
    bool turningOffUpdateAndSample;                   // 94
    uint8_t unk95[0xB8 - 0x95];                       // 95
    DynArray<QsTransform> aPoseLS;                    // B8
    DynArray<QsTransform> aPoseMS;                    // C8
    DynArray<CName> boneMetaNames;                    // D8
    DynArray<CName> trackNames;                       // E8
    DynArray<float> referenceTracks;                  // F8
    DynArray<anim::FloatTrackInfo> rigExtraTracks;    // 108
    uint64_t hash;                                    // 118
    red::TagList tags;                                // 120
    DynArray<anim::RigPart> parts;                    // 130
    DynArray<anim::RigRetarget> retargets;            // 140
    DynArray<Handle<anim::IRigIkSetup>> ikSetups;     // 150
    DynArray<physics::RagdollBodyInfo> ragdollDesc;   // 160
    DynArray<physics::RagdollBodyNames> ragdollNames; // 170
};
RED4EXT_ASSERT_SIZE(Rig, 0x180);
} // namespace RED4ext::anim
