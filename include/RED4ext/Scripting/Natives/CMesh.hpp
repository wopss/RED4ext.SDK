#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Rendering/RenderResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMeshMaterialEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshMaterialBuffer.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

#include <cstdint>

namespace RED4ext
{
struct CMaterialInstance;
struct CResource;
struct IMaterial;
struct IRenderResourceBlob;
namespace mesh
{
struct MeshAppearance;
struct MeshParameter;
} // namespace mesh

struct __declspec(align(0x10)) CMesh : res::StreamedResource
{
    static constexpr const char* NAME = "CMesh";
    static constexpr const char* ALIAS = NAME;

    Box boundingBox;                                            // 40
    Vector3 surfaceAreaPerAxis;                                 // 60
    bool constrainAutoHideDistanceToTerrainHeightMap;           // 6C
    bool forceLoadAllAppearances;                               // 6D
    bool castGlobalShadowsCachedInCook;                         // 6E
    bool castLocalShadowsCachedInCook;                          // 6F
    DynArray<Handle<mesh::MeshParameter>> parameters;           // 70
    DynArray<CName> boneNames;                                  // 80
    DynArray<Matrix> boneRigMatrices;                           // 90
    DynArray<float> boneVertexEpsilons;                         // A0
    DynArray<uint8_t> lodBoneMask;                              // B0
    DynArray<CName> floatTrackNames;                            // C0
    DynArray<float> lodLevelInfo;                               // D0
    DynArray<CMeshMaterialEntry> materialEntries;               // E0
    DynArray<RaRef<IMaterial>> externalMaterials;               // F0
    DynArray<Handle<CMaterialInstance>> localMaterialInstances; // 100
    mesh::MeshMaterialBuffer localMaterialBuffer;               // 110
    DynArray<Ref<IMaterial>> preloadExternalMaterials;          // 1B0
    DynArray<Handle<IMaterial>> preloadLocalMaterialInstances;  // 1C0
    DynArray<Ref<CResource>> inplaceResources;                  // 1D0
    DynArray<Handle<mesh::MeshAppearance>> appearances;         // 1E0
    CRenderMesh* renderResource;                                // 1F0
    Handle<IRenderResourceBlob> renderResourceBlob;             // 1F8
    bool useRayTracingShadowLODBias;                            // 208
    bool castsRayTracedShadowsFromOriginalGeometry;             // 209
    bool isShadowMesh;                                          // 20A
    bool isPlayerShadowMesh;                                    // 20B
    uint8_t unk20C[0x219 - 0x20C];                              // 20C
    ERenderObjectType objectType;                               // 219
    uint8_t unk21A[0x220 - 0x21A];                              // 21A
};
// Game 2.5 (3.0.88.46235): size 0x230 -> 0x220. Class registration 0x1058686 `mov r8d, 0x220`; the 2.31
// constructor's 16-byte member at 0x220 (2.31 0x22460C/0x224605 stores to [r8+0x220]/[r8+0x228]) has no store in
// the 2.5 constructor (0x62506C), whose last member store is 0x6252AE `mov word ptr [r8+0x218]`.
// Reflected offsets unchanged: appearances 0x1E0, renderResourceBlob 0x1F8,
// objectType 0x219; CMesh_FindAppearance 0x4B2258 reads [rcx+0x1E0].
RED4EXT_ASSERT_SIZE(CMesh, 0x220);
RED4EXT_ASSERT_OFFSET(CMesh, appearances, 0x1E0);
RED4EXT_ASSERT_OFFSET(CMesh, renderResource, 0x1F0);
RED4EXT_ASSERT_OFFSET(CMesh, renderResourceBlob, 0x1F8);
RED4EXT_ASSERT_OFFSET(CMesh, objectType, 0x219);
} // namespace RED4ext
