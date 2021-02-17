#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/ISkinTargetComponent.hpp>
#include <RED4ext/Types/generated/red/TagList.hpp>

namespace RED4ext
{
struct MorphTargetMesh;

namespace ent { 
struct MorphTargetSkinnedMeshComponent : ent::ISkinTargetComponent
{
    static constexpr const char* NAME = "entMorphTargetSkinnedMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1E0[0x200 - 0x1E0]; // 1E0
    RaRef<MorphTargetMesh> morphResource; // 200
    uint8_t unk208[0x238 - 0x208]; // 208
    CName meshAppearance; // 238
    uint64_t chunkMask; // 240
    uint8_t unk248[0x2E8 - 0x248]; // 248
    CName renderingPlaneAnimationParam; // 2E8
    CName visibilityAnimationParam; // 2F0
    uint8_t unk2F8[0x308 - 0x2F8]; // 2F8
    red::TagList tags; // 308
    uint8_t unk318[0x34C - 0x318]; // 318
    bool castShadows; // 34C
    bool acceptDismemberment; // 34D
    bool HACK_isMaterialPriorityBumped; // 34E
    bool castLocalShadows; // 34F
    uint8_t unk350[0x360 - 0x350]; // 350
};
RED4EXT_ASSERT_SIZE(MorphTargetSkinnedMeshComponent, 0x360);
} // namespace ent
} // namespace RED4ext
