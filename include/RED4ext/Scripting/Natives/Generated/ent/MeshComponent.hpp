#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponentLODMode.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent { 
struct MeshComponent : ent::IVisualComponent
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
    bool castShadows; // 1AC
    bool castLocalShadows; // 1AD
    uint8_t unk1AE[0x1C1 - 0x1AE]; // 1AE
    bool overrideMeshNavigationImpact; // 1C1
    NavGenNavigationSetting navigationImpact; // 1C2
    uint8_t unk1C4[0x1D0 - 0x1C4]; // 1C4
};
RED4EXT_ASSERT_SIZE(MeshComponent, 0x1D0);
} // namespace ent
using MeshComponent = ent::MeshComponent;
} // namespace RED4ext
