#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMeshMaterialEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshMaterialBuffer.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CMaterialInstance;
struct CResource;
struct IMaterial;
struct IRenderResourceBlob;
namespace mesh { struct MeshAppearance; }
namespace mesh { struct MeshParameter; }

struct CMesh : res::StreamedResource
{
    static constexpr const char* NAME = "CMesh";
    static constexpr const char* ALIAS = NAME;

    Box boundingBox; // 40
    Vector3 surfaceAreaPerAxis; // 60
    bool constrainAutoHideDistanceToTerrainHeightMap; // 6C
    bool forceLoadAllAppearances; // 6D
    bool castGlobalShadowsCachedInCook; // 6E
    bool castLocalShadowsCachedInCook; // 6F
    DynArray<Handle<mesh::MeshParameter>> parameters; // 70
    DynArray<CName> boneNames; // 80
    DynArray<Matrix> boneRigMatrices; // 90
    DynArray<float> boneVertexEpsilons; // A0
    DynArray<uint8_t> lodBoneMask; // B0
    DynArray<CName> floatTrackNames; // C0
    DynArray<float> lodLevelInfo; // D0
    DynArray<CMeshMaterialEntry> materialEntries; // E0
    DynArray<RaRef<IMaterial>> externalMaterials; // F0
    DynArray<Handle<CMaterialInstance>> localMaterialInstances; // 100
    mesh::MeshMaterialBuffer localMaterialBuffer; // 110
    DynArray<Ref<IMaterial>> preloadExternalMaterials; // 1B0
    DynArray<Handle<IMaterial>> preloadLocalMaterialInstances; // 1C0
    DynArray<Ref<CResource>> inplaceResources; // 1D0
    DynArray<Handle<mesh::MeshAppearance>> appearances; // 1E0
    uint8_t unk1F0[0x1F8 - 0x1F0]; // 1F0
    Handle<IRenderResourceBlob> renderResourceBlob; // 1F8
    uint8_t unk208[0x211 - 0x208]; // 208
    ERenderObjectType objectType; // 211
    uint8_t unk212[0x230 - 0x212]; // 212
};
RED4EXT_ASSERT_SIZE(CMesh, 0x230);
} // namespace RED4ext
