#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinTargetComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

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
    uint8_t unk318[0x35C - 0x318]; // 318
    bool castShadows; // 35C
    bool acceptDismemberment; // 35D
    bool HACK_isMaterialPriorityBumped; // 35E
    bool castLocalShadows; // 35F
    uint8_t unk360[0x370 - 0x360]; // 360
};
RED4EXT_ASSERT_SIZE(MorphTargetSkinnedMeshComponent, 0x370);
} // namespace ent
} // namespace RED4ext
