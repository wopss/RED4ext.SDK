#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/entSkinnedMeshComponent.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ent::SkinnedMeshComponent, 0x270);
using entSkinnedMeshComponent = ent::SkinnedMeshComponent;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ForcedLodDistance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinTargetComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponentLODMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent
{
struct __declspec(align(0x10)) SkinnedMeshComponent : ent::ISkinTargetComponent
{
    static constexpr const char* NAME = "entSkinnedMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1E0[0x228 - 0x1E0]; // 1E0
    RaRef<CMesh> mesh; // 228
    CName meshAppearance; // 230
    CName renderingPlaneAnimationParam; // 238
    CName visibilityAnimationParam; // 240
    uint64_t chunkMask; // 248
    NavGenNavigationSetting navigationImpact; // 250
    ent::MeshComponentLODMode LODMode; // 252
    uint8_t unk253[0x255 - 0x253]; // 253
    uint8_t order; // 255
    shadows::ShadowCastingMode castShadows; // 256
    shadows::ShadowCastingMode castLocalShadows; // 257
    bool useProxyMeshAsShadowMesh; // 258
    bool acceptDismemberment; // 259
    bool overrideMeshNavigationImpact; // 25A
    uint8_t unk25B[0x25D - 0x25B]; // 25B
    ent::ForcedLodDistance forcedLodDistance; // 25D
    uint8_t unk25E[0x268 - 0x25E]; // 25E
    uint8_t version; // 268
    uint8_t unk269[0x270 - 0x269]; // 269
};
RED4EXT_ASSERT_SIZE(SkinnedMeshComponent, 0x270);
} // namespace ent
using entSkinnedMeshComponent = ent::SkinnedMeshComponent;
} // namespace RED4ext
*/

// clang-format on
