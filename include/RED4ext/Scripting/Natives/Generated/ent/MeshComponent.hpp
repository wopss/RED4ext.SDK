#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ForcedLodDistance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponentLODMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent
{
struct __declspec(align(0x10)) MeshComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entMeshComponent";
    static constexpr const char* ALIAS = "MeshComponent";

    uint8_t unk140[0x150 - 0x140]; // 140
    RaRef<CMesh> mesh; // 150
    uint8_t unk158[0x178 - 0x158]; // 158
    Vector3 visualScale; // 178
    ERenderingPlane renderingPlane; // 184
    ERenderObjectType objectTypeID; // 188
    uint8_t unk189[0x190 - 0x189]; // 189
    CName meshAppearance; // 190
    uint64_t chunkMask; // 198
    uint32_t numInstances; // 1A0
    float motionBlurScale; // 1A4
    ent::MeshComponentLODMode LODMode; // 1A8
    uint8_t unk1A9[0x1AB - 0x1A9]; // 1A9
    uint8_t order; // 1AB
    shadows::ShadowCastingMode castShadows; // 1AC
    shadows::ShadowCastingMode castLocalShadows; // 1AD
    shadows::ShadowCastingMode castRayTracedGlobalShadows; // 1AE
    shadows::ShadowCastingMode castRayTracedLocalShadows; // 1AF
    uint8_t unk1B0[0x1B2 - 0x1B0]; // 1B0
    ent::ForcedLodDistance forcedLodDistance; // 1B2
    uint8_t unk1B3[0x1D1 - 0x1B3]; // 1B3
    bool overrideMeshNavigationImpact; // 1D1
    NavGenNavigationSetting navigationImpact; // 1D2
    uint8_t version; // 1D4
    uint8_t unk1D5[0x1E0 - 0x1D5]; // 1D5
};
RED4EXT_ASSERT_SIZE(MeshComponent, 0x1E0);
} // namespace ent
using entMeshComponent = ent::MeshComponent;
using MeshComponent = ent::MeshComponent;
} // namespace RED4ext

// clang-format on
