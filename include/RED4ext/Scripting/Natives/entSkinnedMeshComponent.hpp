#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/RenderProxy.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMesh.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ForcedLodDistance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinTargetComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponentLODMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>

#include <cstdint>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) SkinnedMeshComponent : ent::ISkinTargetComponent
{
    static constexpr const char* NAME = "entSkinnedMeshComponent";
    static constexpr const char* ALIAS = NAME;

    SharedPtr<IRenderProxy> renderProxy;           // 1E0
    Handle<mesh::MeshAppearance> appearanceHandle; // 1F0
    Handle<CMesh> meshHandle;                      // 200
    uint8_t unk1F0[0x228 - 0x210];                 // 210
    RaRef<CMesh> mesh;                             // 228
    CName meshAppearance;                          // 230
    CName renderingPlaneAnimationParam;            // 238
    CName visibilityAnimationParam;                // 240
    uint64_t chunkMask;                            // 248
    NavGenNavigationSetting navigationImpact;      // 250
    ent::MeshComponentLODMode LODMode;             // 252
    uint8_t unk253[0x255 - 0x253];                 // 253
    uint8_t order;                                 // 255
    shadows::ShadowCastingMode castShadows;        // 256
    shadows::ShadowCastingMode castLocalShadows;   // 257
    bool useProxyMeshAsShadowMesh;                 // 258
    bool acceptDismemberment;                      // 259
    bool overrideMeshNavigationImpact;             // 25A
    uint8_t unk25B[0x25D - 0x25B];                 // 25B
    ent::ForcedLodDistance forcedLodDistance;      // 25D
    uint8_t unk25E[0x268 - 0x25E];                 // 25E
    uint8_t version;                               // 268
    uint8_t unk269[0x270 - 0x269];                 // 269
};
RED4EXT_ASSERT_SIZE(SkinnedMeshComponent, 0x270);
} // namespace ent
} // namespace RED4ext
