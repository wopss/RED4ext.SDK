// Disable ReSharper virtual destructor check, as the Allocators are just structs with pointers to functions which are
// copied around.
// ReSharper disable CppPolymorphicClassWithNonVirtualPublicDestructor

#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Memory/Pools.hpp>
#include <RED4ext/Relocation.hpp>

#include <cstdint>
#include <type_traits>

namespace RED4ext
{
namespace Memory
{
struct AllocationResult
{
    void* memory;
    size_t size;
};
RED4EXT_ASSERT_SIZE(AllocationResult, 0x10);

struct IAllocator
{
    virtual AllocationResult Alloc(uint64_t aSize) const = 0;                                  // 00
    virtual AllocationResult AllocAligned(uint64_t aSize, uint32_t aAlignment) const = 0;      // 08
    virtual AllocationResult Realloc(AllocationResult& aAllocation, uint64_t aSize) const = 0; // 10
    virtual AllocationResult ReallocAligned(AllocationResult& aAllocation, uint64_t aSize,
                                            uint32_t aAlignment) const = 0; // 16
    virtual void Free(AllocationResult& aAllocation) const = 0;             // 20
    virtual void sub_28(void* a1) const = 0;                                // 28
    virtual const uint32_t GetHandle() const = 0;                           // 30

    [[deprecated("Use 'GetHandle()' instead.")]] const uint32_t GetId() const
    {
        return GetHandle();
    }

    template<typename T, typename = std::enable_if_t<!std::is_pointer_v<T>, T*>>
    [[nodiscard]] T* Alloc() const
    {
        auto result = Alloc(sizeof(T));
        return static_cast<T*>(result.memory);
    }

    void Free(void* aMemory) const
    {
        AllocationResult allocation;
        allocation.memory = aMemory;
        allocation.size = 0;
        Free(allocation);
    }
};
RED4EXT_ASSERT_SIZE(IAllocator, 0x8);

template<typename T>
struct Allocator : IAllocator
{
    static_assert(std::is_base_of_v<TPoolInfo<T>, T>, "An allocator must inherit from 'TPoolInfo'");

    static Allocator<T>* Get()
    {
        static Allocator<T> allocator;
        return &allocator;
    }

    /*
     * All [re]alloc functions have the following typedef:
     *  AllocationResult [Re]Alloc(Vault*, [AllocationResult&], uint64_t, [uint32_t])
     *
     * Because "REDfunc" is using a variable to call them in memory we cannot abuse the __fastcall convention, thus it
     * is necessary to use the following typedef:
     *  void [Re]Alloc(Vault*, AllocationResult*, [AllocationResult&], uint64_t, [uint32_t])
     *
     * Specifing the RDX directly and using void as return type should not cause problems when calling these functions,
     * doing something else the calls will be ill-formed.
     */

    virtual AllocationResult Alloc(uint64_t aSize) const override
    {
        using alloc_t = void(__fastcall*)(Vault*, AllocationResult*, uint64_t);
        static UniversalRelocFunc<alloc_t> alloc(Detail::AddressHashes::Memory_Vault_Alloc);

        auto pool = T::Get();
        auto storage = pool->storage->template GetAllocatorStorage<Vault>();

        AllocationResult result = {};
        alloc(storage, &result, aSize);
        if (!result.memory)
        {
            OOM(aSize, 8);
        }

        return result;
    }

    virtual AllocationResult AllocAligned(uint64_t aSize, uint32_t aAlignment) const override
    {
        using alloc_t = void (*)(Vault*, AllocationResult*, uint64_t, uint32_t);
        static UniversalRelocFunc<alloc_t> alloc(Detail::AddressHashes::Memory_Vault_AllocAligned);

        auto pool = T::Get();
        auto storage = pool->storage->template GetAllocatorStorage<Vault>();

        AllocationResult result = {};
        alloc(storage, &result, aSize, aAlignment);
        if (!result.memory)
        {
            OOM(aSize, aAlignment);
        }

        return result;
    }

    virtual AllocationResult Realloc(AllocationResult& aAllocation, uint64_t aSize) const override
    {
        using realloc_t = void (*)(Vault*, AllocationResult*, AllocationResult&, uint64_t);
        static UniversalRelocFunc<realloc_t> realloc(Detail::AddressHashes::Memory_Vault_Realloc);

        auto pool = T::Get();
        auto storage = pool->storage->template GetAllocatorStorage<Vault>();

        AllocationResult result = {};
        realloc(storage, &result, aAllocation, aSize);
        if (!result.memory && aSize)
        {
            OOM(aSize, 8);
        }

        return result;
    }

    virtual AllocationResult ReallocAligned(AllocationResult& aAllocation, uint64_t aSize,
                                            uint32_t aAlignment) const override
    {
        using realloc_t = void (*)(Vault*, AllocationResult*, AllocationResult&, uint64_t, uint32_t);
        static UniversalRelocFunc<realloc_t> realloc(Detail::AddressHashes::Memory_Vault_ReallocAligned);

        auto pool = T::Get();
        auto storage = pool->storage->template GetAllocatorStorage<Vault>();

        AllocationResult result = {};
        realloc(storage, &result, aAllocation, aSize, aAlignment);
        if (!result.memory && aSize)
        {
            OOM(aSize, aAlignment);
        }

        return result;
    }

    virtual void Free(AllocationResult& aAllocation) const override
    {
        using func_t = void (*)(Vault*, AllocationResult&);
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::Memory_Vault_Free);

        auto pool = T::Get();
        auto storage = pool->storage->template GetAllocatorStorage<Vault>();
        func(storage, aAllocation);
    }

    virtual void sub_28(void* a2) const override
    {
        using func_t = void (*)(Vault*, void*);
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::Memory_Vault_Unk1);

        auto pool = T::Get();
        auto storage = pool->storage->template GetAllocatorStorage<Vault>();
        func(storage, a2);
    }

    virtual const uint32_t GetHandle() const override
    {
        auto pool = T::Get();
        return pool->handle;
    }

    using IAllocator::Alloc;
    using IAllocator::Free;

protected:
    Allocator() = default;
    ~Allocator() = default;

private:
    inline void OOM(uint64_t aSize, uint32_t aAlignment) const
    {
        using oom_t = AllocationResult (*)(PoolStorage*, uint64_t, uint32_t);
        static UniversalRelocFunc<oom_t> oom(Detail::AddressHashes::Memory_PoolStorage_OOM);

        auto pool = T::Get();
        oom(pool->storage, aSize, aAlignment);
    }
};

struct GamepadObserverPoolAllocator : Allocator<GamepadObserverPool>
{
};

struct InputInternalAllocator : Allocator<PoolInputInternal>
{
};

struct RootAllocator : Allocator<PoolRoot>
{
};

struct CPUAllocator : Allocator<PoolCPU>
{
};

struct DefaultAllocator : Allocator<PoolDefault>
{
};

struct LegacyOperatorAllocator : Allocator<PoolLegacyOperator>
{
};

struct FrameAllocator : Allocator<PoolFrame>
{
};

struct DoubleBufferedFrameAllocator : Allocator<PoolDoubleBufferedFrame>
{
};

struct EngineAllocator : Allocator<PoolEngine>
{
};

struct RefCountAllocator : Allocator<PoolRefCount>
{
};

struct GPUAllocator : Allocator<PoolGPU>
{
};

struct BackendAllocator : Allocator<PoolBackend>
{
};

struct DebugAllocator : Allocator<PoolDebug>
{
};

struct CoreAllocator : Allocator<PoolCore>
{
};

struct ScriptAllocator : Allocator<PoolScript>
{
};

struct StreamingAllocator : Allocator<PoolStreaming>
{
};

struct StreamingNodeProxyAllocator : Allocator<PoolStreamingNodeProxy>
{
};

struct StreamingResourceAllocator : Allocator<PoolStreamingResource>
{
};

struct StreamingDataAllocator : Allocator<PoolStreamingData>
{
};

struct ScriptCompilerAllocator : Allocator<PoolScriptCompiler>
{
};

struct ScriptDebuggerAllocator : Allocator<PoolScriptDebugger>
{
};

struct LibTreeAllocator : Allocator<PoolLibTree>
{
};

struct AIAllocator : Allocator<PoolAI>
{
};

struct TelemetryAllocator : Allocator<PoolTelemetry>
{
};

struct PhysicsAllocator : Allocator<PoolPhysics>
{
};

struct PhysicsFilterDataAllocator : Allocator<PoolPhysicsFilterData>
{
};

struct PhysicsQueriesAllocator : Allocator<PoolPhysicsQueries>
{
};

struct PhysicsQueriesInternalAllocator : Allocator<PoolPhysicsQueriesInternal>
{
};

struct PhysicsAsyncQueryTokenAllocator : Allocator<PoolPhysicsAsyncQueryToken>
{
};

struct PhysicsAsyncQueryTokenNAllocator : Allocator<PoolPhysicsAsyncQueryTokenN>
{
};

struct PhysXAllocator : Allocator<PoolPhysX>
{
};

struct PhysicsDestructionAllocator : Allocator<PoolPhysicsDestruction>
{
};

struct PhysicsCollisionAllocator : Allocator<PoolPhysicsCollision>
{
};

struct PhysicsProxiesAllocator : Allocator<PoolPhysicsProxies>
{
};

struct PhysicsRagdollAllocator : Allocator<PoolPhysicsRagdoll>
{
};

struct PhysicsInternalAllocator : Allocator<PoolPhysicsInternal>
{
};

struct PhysicsTransformBufferAllocator : Allocator<PoolPhysicsTransformBuffer>
{
};

struct PhysicsIDLookupAllocator : Allocator<PoolPhysicsIDLookup>
{
};

struct PhysicsSystemResourcesAllocator : Allocator<PoolPhysicsSystemResources>
{
};

struct PhysicsSystemBodyAllocator : Allocator<PoolPhysicsSystemBody>
{
};

struct PhysicsColliderAllocator : Allocator<PoolPhysicsCollider>
{
};

struct PhysicsClothAllocator : Allocator<PoolPhysicsCloth>
{
};

struct RTTIAllocator : Allocator<PoolRTTI>
{
};

struct RTTIFunctionAllocator : Allocator<PoolRTTIFunction>
{
};

struct RTTIPropertyAllocator : Allocator<PoolRTTIProperty>
{
};

struct TriggersAllocator : Allocator<PoolTriggers>
{
};

struct SplineAllocator : Allocator<PoolSpline>
{
};

struct CurvesAllocator : Allocator<PoolCurves>
{
};

struct AreasAllocator : Allocator<PoolAreas>
{
};

struct EffectAllocator : Allocator<PoolEffect>
{
};

struct IDRegistryAllocator : Allocator<PoolIDRegistry>
{
};

struct EventsAllocator : Allocator<PoolEvents>
{
};

struct EventAllocator : Allocator<PoolEvent>
{
};

struct EventBrokerAllocator : Allocator<PoolEventBroker>
{
};

struct SerializableAllocator : Allocator<PoolSerializable>
{
};

struct ResourceAllocator : Allocator<PoolResource>
{
};

struct ResourceLoadingJobsAllocator : Allocator<PoolResourceLoadingJobs>
{
};

struct InteropAllocator : Allocator<PoolInterop>
{
};

struct StringAllocator : Allocator<PoolString>
{
};

struct NetworkServicesAllocator : Allocator<PoolNetworkServices>
{
};

struct UIAllocator : Allocator<PoolUI>
{
};

struct InkAllocator : Allocator<PoolInk>
{
};

struct Ink_UncategorizedAllocator : Allocator<PoolInk_Uncategorized>
{
};

struct Ink_WidgetsAllocator : Allocator<PoolInk_Widgets>
{
};

struct Ink_LibraryAllocator : Allocator<PoolInk_Library>
{
};

struct Ink_EventsAllocator : Allocator<PoolInk_Events>
{
};

struct Ink_BindingAllocator : Allocator<PoolInk_Binding>
{
};

struct Ink_AnimationsAllocator : Allocator<PoolInk_Animations>
{
};

struct Ink_RenderingAllocator : Allocator<PoolInk_Rendering>
{
};

struct Ink_EffectsAllocator : Allocator<PoolInk_Effects>
{
};

struct Ink_BrushesAllocator : Allocator<PoolInk_Brushes>
{
};

struct Ink_StylesAllocator : Allocator<PoolInk_Styles>
{
};

struct Ink_ControllersAllocator : Allocator<PoolInk_Controllers>
{
};

struct Ink_LayersAllocator : Allocator<PoolInk_Layers>
{
};

struct Ink_Layers_StateMachineAllocator : Allocator<PoolInk_Layers_StateMachine>
{
};

struct Ink_Layers_WorldLayerAllocator : Allocator<PoolInk_Layers_WorldLayer>
{
};

struct Ink_Layers_MenuLayerAllocator : Allocator<PoolInk_Layers_MenuLayer>
{
};

struct Ink_Layers_LoadingScreenAllocator : Allocator<PoolInk_Layers_LoadingScreen>
{
};

struct Ink_Layers_SystemNotificatiAllocator : Allocator<PoolInk_Layers_SystemNotificati>
{
};

struct Ink_Layers_GameNotificationAllocator : Allocator<PoolInk_Layers_GameNotification>
{
};

struct Ink_Layers_ViewportWrapperAllocator : Allocator<PoolInk_Layers_ViewportWrapper>
{
};

struct Ink_Layers_EventBrokerAllocator : Allocator<PoolInk_Layers_EventBroker>
{
};

struct Ink_JobsAllocator : Allocator<PoolInk_Jobs>
{
};

struct Ink_TextAllocator : Allocator<PoolInk_Text>
{
};

struct Ink_HitTestAllocator : Allocator<PoolInk_HitTest>
{
};

struct Ink_SystemAllocator : Allocator<PoolInk_System>
{
};

struct Ink_ScriptsAllocator : Allocator<PoolInk_Scripts>
{
};

struct Ink_MappinsAllocator : Allocator<PoolInk_Mappins>
{
};

struct Ink_MinimapGeometryAllocator : Allocator<PoolInk_MinimapGeometry>
{
};

struct Ink_OffscreenAllocator : Allocator<PoolInk_Offscreen>
{
};

struct Ink_SpawningAllocator : Allocator<PoolInk_Spawning>
{
};

struct Ink_ResourcesAllocator : Allocator<PoolInk_Resources>
{
};

struct Ink_VideosAllocator : Allocator<PoolInk_Videos>
{
};

struct Ink_BackendAllocator : Allocator<PoolInk_Backend>
{
};

struct Ink_DebugAllocator : Allocator<PoolInk_Debug>
{
};

struct NetworkSessionRecordingToolAllocator : Allocator<PoolNetworkSessionRecordingTool>
{
};

struct NetworkAllocator : Allocator<PoolNetwork>
{
};

struct MultiplayerAllocator : Allocator<PoolMultiplayer>
{
};

struct TextureAllocator : Allocator<PoolTexture>
{
};

struct MeshAllocator : Allocator<PoolMesh>
{
};

struct BinkAllocator : Allocator<PoolBink>
{
};

struct FontAllocator : Allocator<PoolFont>
{
};

struct FreeTypeAllocator : Allocator<PoolFreeType>
{
};

struct FontCacheAllocator : Allocator<PoolFontCache>
{
};

struct GlyphCacheAllocator : Allocator<PoolGlyphCache>
{
};

struct RenderDebugAllocator : Allocator<PoolRenderDebug>
{
};

struct GIDebugAllocator : Allocator<PoolGIDebug>
{
};

struct GPUProfilingAllocator : Allocator<PoolGPUProfiling>
{
};

struct Rendering_Allocator : Allocator<PoolRendering_>
{
};

struct FrameRenderingAllocator : Allocator<PoolFrameRendering>
{
};

struct DoubleBufferedFrameRenderinAllocator : Allocator<PoolDoubleBufferedFrameRenderin>
{
};

struct RenderingCoreAllocator : Allocator<PoolRenderingCore>
{
};

struct SurfaceCacheAllocator : Allocator<PoolSurfaceCache>
{
};

struct ShaderCacheAllocator : Allocator<PoolShaderCache>
{
};

struct ShaderCacheShadersAllocator : Allocator<PoolShaderCacheShaders>
{
};

struct ShaderCacheDataAllocator : Allocator<PoolShaderCacheData>
{
};

struct ShaderCompilationAllocator : Allocator<PoolShaderCompilation>
{
};

struct PSOAllocator : Allocator<PoolPSO>
{
};

struct ShaderCacheData_ShaderBinarAllocator : Allocator<PoolShaderCacheData_ShaderBinar>
{
};

struct RenderProxyAllocator : Allocator<PoolRenderProxy>
{
};

struct RenderProxyInternals_MeshAllocator : Allocator<PoolRenderProxyInternals_Mesh>
{
};

struct RenderProxy_CustomDataAllocator : Allocator<PoolRenderProxy_CustomData>
{
};

struct RenderProxy_InstanceDataAllocator : Allocator<PoolRenderProxy_InstanceData>
{
};

struct RenderProxy_HandlesAllocator : Allocator<PoolRenderProxy_Handles>
{
};

struct RenderResourcesAllocator : Allocator<PoolRenderResources>
{
};

struct RenderMeshAllocator : Allocator<PoolRenderMesh>
{
};

struct RenderDynamicTextureAllocator : Allocator<PoolRenderDynamicTexture>
{
};

struct MaterialsAllocator : Allocator<PoolMaterials>
{
};

struct RenderMaterialAllocator : Allocator<PoolRenderMaterial>
{
};

struct MaterialTechniquesAllocator : Allocator<PoolMaterialTechniques>
{
};

struct MaterialStagePassDataAllocator : Allocator<PoolMaterialStagePassData>
{
};

struct MaterialStagePassCacheAllocator : Allocator<PoolMaterialStagePassCache>
{
};

struct RenderMaterialParamsAllocator : Allocator<PoolRenderMaterialParams>
{
};

struct MaterialExtractedDataAllocator : Allocator<PoolMaterialExtractedData>
{
};

struct MaterialModifierAllocator : Allocator<PoolMaterialModifier>
{
};

struct DecalsAllocator : Allocator<PoolDecals>
{
};

struct ParticleDataAllocator : Allocator<PoolParticleData>
{
};

struct RenderGraphAllocator : Allocator<PoolRenderGraph>
{
};

struct FlowAllocator : Allocator<PoolFlowAllocator>
{
};

struct VideoPlayerAllocator : Allocator<PoolVideoPlayer>
{
};

struct RenderDataAllocator : Allocator<PoolRenderData>
{
};

struct GIAllocator : Allocator<PoolGI>
{
};

struct RenderBlobsAllocator : Allocator<PoolRenderBlobs>
{
};

struct RenderBlobsBuffersAllocator : Allocator<PoolRenderBlobsBuffers>
{
};

struct RenderSceneAllocator : Allocator<PoolRenderScene>
{
};

struct RenderScene_ProxiesAllocator : Allocator<PoolRenderScene_Proxies>
{
};

struct RenderScene_ProxyDataAllocator : Allocator<PoolRenderScene_ProxyData>
{
};

struct RenderScene_PendingOpsAllocator : Allocator<PoolRenderScene_PendingOps>
{
};

struct RenderScene_RuntimeSystemAllocator : Allocator<PoolRenderScene_RuntimeSystem>
{
};

struct VisBVHAllocator : Allocator<PoolVisBVH>
{
};

struct SkinningDataAllocator : Allocator<PoolSkinningData>
{
};

struct FrameInfoAllocator : Allocator<PoolFrameInfo>
{
};

struct FoliageAllocator : Allocator<PoolFoliage>
{
};

struct BatchersAllocator : Allocator<PoolBatchers>
{
};

struct RenderCommandHandlerAllocator : Allocator<PoolRenderCommandHandler>
{
};

struct PostProcessAndEffectsAllocator : Allocator<PoolPostProcessAndEffects>
{
};

struct EnvironmentAllocator : Allocator<PoolEnvironment>
{
};

struct ImageProcessingAllocator : Allocator<PoolImageProcessing>
{
};

struct RenderingUIAllocator : Allocator<PoolRenderingUI>
{
};

struct ReflectionProbesAllocator : Allocator<PoolReflectionProbes>
{
};

struct LightingAllocator : Allocator<PoolLighting>
{
};

struct DataRegistryAllocator : Allocator<PoolDataRegistry>
{
};

struct CamerasAllocator : Allocator<PoolCameras>
{
};

struct RaytraceAllocator : Allocator<PoolRaytrace>
{
};

struct VisibilitySystemAllocator : Allocator<PoolVisibilitySystem>
{
};

struct VisibilitySceneAllocator : Allocator<PoolVisibilityScene>
{
};

struct OccluderShapesAllocator : Allocator<PoolOccluderShapes>
{
};

struct InkRenderingAllocator : Allocator<PoolInkRendering>
{
};

struct InkRendering_UncategorizedAllocator : Allocator<PoolInkRendering_Uncategorized>
{
};

struct InkRendering_OneFrameRenderAllocator : Allocator<PoolInkRendering_OneFrameRender>
{
};

struct InkRendering_EffectsAllocator : Allocator<PoolInkRendering_Effects>
{
};

struct InkRendering_MathAllocator : Allocator<PoolInkRendering_Math>
{
};

struct InkRendering_TextAllocator : Allocator<PoolInkRendering_Text>
{
};

struct InkRendering_WorldAllocator : Allocator<PoolInkRendering_World>
{
};

struct InkRendering_TexturesAllocator : Allocator<PoolInkRendering_Textures>
{
};

struct InkRendering_FSCCompositionAllocator : Allocator<PoolInkRendering_FSCComposition>
{
};

struct InkRendering_CompositionAllocator : Allocator<PoolInkRendering_Composition>
{
};

struct InkRendering_DrawStackAllocator : Allocator<PoolInkRendering_DrawStack>
{
};

struct AI_BehaviourAllocator : Allocator<PoolAI_Behaviour>
{
};

struct AI_InstancesAllocator : Allocator<PoolAI_Instances>
{
};

struct AI_ScriptAllocator : Allocator<PoolAI_Script>
{
};

struct AI_SystemsAllocator : Allocator<PoolAI_Systems>
{
};

struct AI_AttitudesAllocator : Allocator<PoolAI_Attitudes>
{
};

struct AI_InfluenceMapAllocator : Allocator<PoolAI_InfluenceMap>
{
};

struct AI_SmartObjectsAllocator : Allocator<PoolAI_SmartObjects>
{
};

struct AI_SensesAllocator : Allocator<PoolAI_Senses>
{
};

struct AI_ComponentsAllocator : Allocator<PoolAI_Components>
{
};

struct ComponentAllocator : Allocator<PoolComponent>
{
};

struct AI_MovementAllocator : Allocator<PoolAI_Movement>
{
};

struct AI_MovementPoliciesAllocator : Allocator<PoolAI_MovementPolicies>
{
};

struct AI_WorkspotsAllocator : Allocator<PoolAI_Workspots>
{
};

struct AI_GuardAreasAllocator : Allocator<PoolAI_GuardAreas>
{
};

struct AI_TargetTrackingAllocator : Allocator<PoolAI_TargetTracking>
{
};

struct AI_TweakActionsAllocator : Allocator<PoolAI_TweakActions>
{
};

struct AI_VehiclesAllocator : Allocator<PoolAI_Vehicles>
{
};

struct AI_LegacyAllocator : Allocator<PoolAI_Legacy>
{
};

struct AI_SORuntimeDataAllocator : Allocator<PoolAI_SORuntimeData>
{
};

struct AI_SOCompiledResourcesAllocator : Allocator<PoolAI_SOCompiledResources>
{
};

struct AI_SOCoversAllocator : Allocator<PoolAI_SOCovers>
{
};

struct AI_SOAnimDBAllocator : Allocator<PoolAI_SOAnimDB>
{
};

struct AI_SONodesAllocator : Allocator<PoolAI_SONodes>
{
};

struct AI_SORawResourcesAllocator : Allocator<PoolAI_SORawResources>
{
};

struct _DebugContextsAllocator : Allocator<Pool_DebugContexts>
{
};

struct JSONAllocator : Allocator<PoolJSON>
{
};

struct ScenesAllocator : Allocator<PoolScenes>
{
};

struct SceneSystemAllocator : Allocator<PoolSceneSystem>
{
};

struct SceneResourcesAllocator : Allocator<PoolSceneResources>
{
};

struct HTTPAllocator : Allocator<PoolHTTP>
{
};

struct HTTP_CurlAllocator : Allocator<PoolHTTP_Curl>
{
};

struct HTTP_UWPAllocator : Allocator<PoolHTTP_UWP>
{
};

struct HTTP_PS4Allocator : Allocator<PoolHTTP_PS4>
{
};

struct NodeAllocator : Allocator<PoolNode>
{
};

struct TicketAllocator : Allocator<PoolTicket>
{
};

struct FoliageNodeAllocator : Allocator<PoolFoliageNode>
{
};

struct InteriorMapAllocator : Allocator<PoolInteriorMap>
{
};

struct MinimapAllocator : Allocator<PoolMinimap>
{
};

struct WeatherAllocator : Allocator<PoolWeather>
{
};

struct MarkerAllocator : Allocator<PoolMarker>
{
};

struct NodeSourceAllocator : Allocator<PoolNodeSource>
{
};

struct NodeInstanceAllocator : Allocator<PoolNodeInstance>
{
};

struct IDPathRegistryAllocator : Allocator<PoolIDPathRegistry>
{
};

struct IDStringRegistryAllocator : Allocator<PoolIDStringRegistry>
{
};

struct IDStringBufferAllocator : Allocator<PoolIDStringBuffer>
{
};

struct CompiledSetupInfoAllocator : Allocator<PoolCompiledSetupInfo>
{
};

struct MeshLocalBoundsCacheAllocator : Allocator<PoolMeshLocalBoundsCache>
{
};

struct StreamingQueryAllocator : Allocator<PoolStreamingQuery>
{
};

struct SaveDataAllocator : Allocator<PoolSaveData>
{
};

struct GameServicesAllocator : Allocator<PoolGameServices>
{
};

struct MultiplayerServerAllocator : Allocator<PoolMultiplayerServer>
{
};

struct ArchiveAllocator : Allocator<PoolArchive>
{
};

struct EntityResourceAllocator : Allocator<PoolEntityResource>
{
};

struct EntityAssemblerAllocator : Allocator<PoolEntityAssembler>
{
};

struct EntityAppearanceAllocator : Allocator<PoolEntityAppearance>
{
};

struct EntityParametersAllocator : Allocator<PoolEntityParameters>
{
};

struct EntityParameterGarmentAllocator : Allocator<PoolEntityParameterGarment>
{
};

struct EntityParameterCorpseAllocator : Allocator<PoolEntityParameterCorpse>
{
};

struct EntityParameterHitRepresentAllocator : Allocator<PoolEntityParameterHitRepresent>
{
};

struct EntityAllocator : Allocator<PoolEntity>
{
};

struct DismembermentAllocator : Allocator<PoolDismemberment>
{
};

struct Dismemberment_DataBaseAllocator : Allocator<PoolDismemberment_DataBase>
{
};

struct Dismemberment_LookupAllocator : Allocator<PoolDismemberment_Lookup>
{
};

struct Dismemberment_RenderDataAllocator : Allocator<PoolDismemberment_RenderData>
{
};

struct NavigationAllocator : Allocator<PoolNavigation>
{
};

struct NavmeshNavigationAllocator : Allocator<PoolNavmeshNavigation>
{
};

struct PathfindingNavigationAllocator : Allocator<PoolPathfindingNavigation>
{
};

struct TrafficNavigationAllocator : Allocator<PoolTrafficNavigation>
{
};

struct InfluenceMapNavigationAllocator : Allocator<PoolInfluenceMapNavigation>
{
};

struct OffmeshlinkNavigationAllocator : Allocator<PoolOffmeshlinkNavigation>
{
};

struct NavigationComponentsAllocator : Allocator<PoolNavigationComponents>
{
};

struct NavigationScriptsAllocator : Allocator<PoolNavigationScripts>
{
};

struct TrafficLanesAllocator : Allocator<PoolTrafficLanes>
{
};

struct TrafficStaticCollisionsAllocator : Allocator<PoolTrafficStaticCollisions>
{
};

struct TrafficDynamicCollisionsAllocator : Allocator<PoolTrafficDynamicCollisions>
{
};

struct TrafficCrowdAvoidanceAllocator : Allocator<PoolTrafficCrowdAvoidance>
{
};

struct TrafficCrowdPathsAllocator : Allocator<PoolTrafficCrowdPaths>
{
};

struct TrafficCrowdMarblesAllocator : Allocator<PoolTrafficCrowdMarbles>
{
};

struct TrafficCrowdLocomotionAllocator : Allocator<PoolTrafficCrowdLocomotion>
{
};

struct TrafficSlotsAllocator : Allocator<PoolTrafficSlots>
{
};

struct TrafficSpotsAllocator : Allocator<PoolTrafficSpots>
{
};

struct TrafficGridAllocator : Allocator<PoolTrafficGrid>
{
};

struct TrafficNullAreasAllocator : Allocator<PoolTrafficNullAreas>
{
};

struct TrafficPersistentLanesAllocator : Allocator<PoolTrafficPersistentLanes>
{
};

struct TrafficCollisionMapAllocator : Allocator<PoolTrafficCollisionMap>
{
};

struct TrafficLookupAllocator : Allocator<PoolTrafficLookup>
{
};

struct TrafficDynamicMovementAllocator : Allocator<PoolTrafficDynamicMovement>
{
};

struct TrafficDynamicMovement_PedeAllocator : Allocator<PoolTrafficDynamicMovement_Pede>
{
};

struct TrafficDynamicMovement_VehiAllocator : Allocator<PoolTrafficDynamicMovement_Vehi>
{
};

struct TDM_V_RepresentationAllocator : Allocator<TDM_V_Representation>
{
};

struct TDM_V_SegmentsAllocator : Allocator<TDM_V_Segments>
{
};

struct TDM_V_LookupsAllocator : Allocator<TDM_V_Lookups>
{
};

struct TDM_P_RepresentationAllocator : Allocator<TDM_P_Representation>
{
};

struct NavigationDebugAllocator : Allocator<PoolNavigationDebug>
{
};

struct TrafficDebugAllocator : Allocator<PoolTrafficDebug>
{
};

struct TextAllocator : Allocator<PoolText>
{
};

struct Text_RichDecoratorAllocator : Allocator<PoolText_RichDecorator>
{
};

struct Text_MarkupAllocator : Allocator<PoolText_Markup>
{
};

struct Text_LayoutAllocator : Allocator<PoolText_Layout>
{
};

struct Text_Layout_BreakAllocator : Allocator<PoolText_Layout_Break>
{
};

struct Text_Layout_BlockAllocator : Allocator<PoolText_Layout_Block>
{
};

struct Text_Layout_ModelAllocator : Allocator<PoolText_Layout_Model>
{
};

struct Text_Layout_ViewAllocator : Allocator<PoolText_Layout_View>
{
};

struct Text_Layout_DirectionAllocator : Allocator<PoolText_Layout_Direction>
{
};

struct Text_ShaperAllocator : Allocator<PoolText_Shaper>
{
};

struct Text_TypographyAllocator : Allocator<PoolText_Typography>
{
};

struct Text_FontAllocator : Allocator<PoolText_Font>
{
};

struct Text_FormatterAllocator : Allocator<PoolText_Formatter>
{
};

struct Text_ParamsAllocator : Allocator<PoolText_Params>
{
};

struct Text_HBAllocator : Allocator<PoolText_HB>
{
};

struct Text_HB_InternalAllocator : Allocator<PoolText_HB_Internal>
{
};

struct Text_ICUAllocator : Allocator<PoolText_ICU>
{
};

struct Text_ICU_InternalAllocator : Allocator<PoolText_ICU_Internal>
{
};

struct Text_ICU_Data_PackagaeAllocator : Allocator<PoolText_ICU_Data_Packagae>
{
};

struct Text_RunAllocator : Allocator<PoolText_Run>
{
};

struct Text_GlyphCacheAllocator : Allocator<PoolText_GlyphCache>
{
};

struct Text_UTF16Allocator : Allocator<PoolText_UTF16>
{
};

struct GMPL_ObjectsAllocator : Allocator<PoolGMPL_Objects>
{
};

struct GMPLAllocator : Allocator<PoolGMPL>
{
};

struct GMPL_ComponentsAllocator : Allocator<PoolGMPL_Components>
{
};

struct GMPL_Components_ScriptableCAllocator : Allocator<PoolGMPL_Components_ScriptableC>
{
};

struct GMPL_Components_EntitySpawnAllocator : Allocator<PoolGMPL_Components_EntitySpawn>
{
};

struct GMPL_AbstractAllocator : Allocator<PoolGMPL_Abstract>
{
};

struct GMPL_PopulationAllocator : Allocator<PoolGMPL_Population>
{
};

struct GMPL_Population_PuppetsAllocator : Allocator<PoolGMPL_Population_Puppets>
{
};

struct GMPL_Population_CommunityAllocator : Allocator<PoolGMPL_Population_Community>
{
};

struct GMPL_Population_DataAllocator : Allocator<PoolGMPL_Population_Data>
{
};

struct GMPL_Population_StreamableDAllocator : Allocator<PoolGMPL_Population_StreamableD>
{
};

struct GMPL_Population_SystemAllocator : Allocator<PoolGMPL_Population_System>
{
};

struct GMPL_Population_Community_SAllocator : Allocator<PoolGMPL_Population_Community_S>
{
};

struct GMPL_Population_CrowdAllocator : Allocator<PoolGMPL_Population_Crowd>
{
};

struct GMPL_Population_DistantCrowAllocator : Allocator<PoolGMPL_Population_DistantCrow>
{
};

struct GMPL_VehiclesAllocator : Allocator<PoolGMPL_Vehicles>
{
};

struct GMPL_Vehicles_ObjectAllocator : Allocator<PoolGMPL_Vehicles_Object>
{
};

struct GMPL_Vehicles_SystemAllocator : Allocator<PoolGMPL_Vehicles_System>
{
};

struct GMPL_Vehicles_AudioAllocator : Allocator<PoolGMPL_Vehicles_Audio>
{
};

struct GMPL_Vehicles_BaseObjectAllocator : Allocator<PoolGMPL_Vehicles_BaseObject>
{
};

struct GMPL_Vehicles_ComponentsAllocator : Allocator<PoolGMPL_Vehicles_Components>
{
};

struct GMPL_Vehicles_DestructionAllocator : Allocator<PoolGMPL_Vehicles_Destruction>
{
};

struct GMPL_Vehicles_FXAllocator : Allocator<PoolGMPL_Vehicles_FX>
{
};

struct GMPL_Vehicles_PhysicsAllocator : Allocator<PoolGMPL_Vehicles_Physics>
{
};

struct GMPL_Vehicles_AutopilotAllocator : Allocator<PoolGMPL_Vehicles_Autopilot>
{
};

struct GMPL_Vehicle_CamerasAllocator : Allocator<PoolGMPL_Vehicle_Cameras>
{
};

struct GMPL_Vehicle_Cameras_ManageAllocator : Allocator<PoolGMPL_Vehicle_Cameras_Manage>
{
};

struct GMPL_Vehicle_Cameras_TPPComAllocator : Allocator<PoolGMPL_Vehicle_Cameras_TPPCom>
{
};

struct GMPL_ItemsAllocator : Allocator<PoolGMPL_Items>
{
};

struct GMPL_Items_InventoryAllocator : Allocator<PoolGMPL_Items_Inventory>
{
};

struct GMPL_Items_ObjectAllocator : Allocator<PoolGMPL_Items_Object>
{
};

struct GMPL_Items_LootAllocator : Allocator<PoolGMPL_Items_Loot>
{
};

struct GMPL_Items_FactoryAllocator : Allocator<PoolGMPL_Items_Factory>
{
};

struct GMPL_Items_AttachmentSlotsAllocator : Allocator<PoolGMPL_Items_AttachmentSlots>
{
};

struct GMPL_ScriptAllocator : Allocator<PoolGMPL_Script>
{
};

struct GMPL_Script_ScriptableSysteAllocator : Allocator<PoolGMPL_Script_ScriptableSyste>
{
};

struct GMPL_Script_ScripsOptimizatAllocator : Allocator<PoolGMPL_Script_ScripsOptimizat>
{
};

struct GMPL_RPGAllocator : Allocator<PoolGMPL_RPG>
{
};

struct GMPL_RPG_StatsAllocator : Allocator<PoolGMPL_RPG_Stats>
{
};

struct GMPL_RPG_StatPoolsAllocator : Allocator<PoolGMPL_RPG_StatPools>
{
};

struct GMPL_RPG_StatsBundlesAllocator : Allocator<PoolGMPL_RPG_StatsBundles>
{
};

struct GMPL_RPG_StatDepotAllocator : Allocator<PoolGMPL_RPG_StatDepot>
{
};

struct GMPL_RPG_StatModifiersAllocator : Allocator<PoolGMPL_RPG_StatModifiers>
{
};

struct GMPL_RPG_StatsCallbacksAllocator : Allocator<PoolGMPL_RPG_StatsCallbacks>
{
};

struct GMPL_RPG_StatWrappersAllocator : Allocator<PoolGMPL_RPG_StatWrappers>
{
};

struct GMPL_RPG_StatPoolRequestsAllocator : Allocator<PoolGMPL_RPG_StatPoolRequests>
{
};

struct GMPL_RPG_StatPoolListenersAllocator : Allocator<PoolGMPL_RPG_StatPoolListeners>
{
};

struct GMPL_RPG_StatPoolDataAllocator : Allocator<PoolGMPL_RPG_StatPoolData>
{
};

struct GMPL_RPG_EffectorsAllocator : Allocator<PoolGMPL_RPG_Effectors>
{
};

struct GMPL_RPG_WeakspotsAllocator : Allocator<PoolGMPL_RPG_Weakspots>
{
};

struct GMPL_RPG_GameplayLogicPackaAllocator : Allocator<PoolGMPL_RPG_GameplayLogicPacka>
{
};

struct GMPL_DevicesAllocator : Allocator<PoolGMPL_Devices>
{
};

struct GMPL_Devices_ActionsAllocator : Allocator<PoolGMPL_Devices_Actions>
{
};

struct GMPL_Devices_DataAllocator : Allocator<PoolGMPL_Devices_Data>
{
};

struct GMPL_Devices_Data_CookAllocator : Allocator<PoolGMPL_Devices_Data_Cook>
{
};

struct GMPL_Devices_Data_HMapAllocator : Allocator<PoolGMPL_Devices_Data_HMap>
{
};

struct GMPL_Devices_MiscAllocator : Allocator<PoolGMPL_Devices_Misc>
{
};

struct GMPL_Devices_VisibilityAllocator : Allocator<PoolGMPL_Devices_Visibility>
{
};

struct GMPL_InteractionsAllocator : Allocator<PoolGMPL_Interactions>
{
};

struct GMPL_MappinAllocator : Allocator<PoolGMPL_Mappin>
{
};

struct GMPL_MappinStaticAllocator : Allocator<PoolGMPL_MappinStatic>
{
};

struct GMPL_MappinDynamicAllocator : Allocator<PoolGMPL_MappinDynamic>
{
};

struct GMPL_MappinGPSAllocator : Allocator<PoolGMPL_MappinGPS>
{
};

struct GMPL_MappinOtherAllocator : Allocator<PoolGMPL_MappinOther>
{
};

struct GMPL_PSAllocator : Allocator<PoolGMPL_PS>
{
};

struct GMPL_QuestAllocator : Allocator<PoolGMPL_Quest>
{
};

struct GMPL_QuestStaticAllocator : Allocator<PoolGMPL_QuestStatic>
{
};

struct GMPL_QuestDynamicAllocator : Allocator<PoolGMPL_QuestDynamic>
{
};

struct GMPL_QuestJournalAllocator : Allocator<PoolGMPL_QuestJournal>
{
};

struct GMPL_QuestFDBAllocator : Allocator<PoolGMPL_QuestFDB>
{
};

struct GMPL_SaveAllocator : Allocator<PoolGMPL_Save>
{
};

struct GMPL_TDBAllocator : Allocator<PoolGMPL_TDB>
{
};

struct GMPL_TDB_LoaderAllocator : Allocator<PoolGMPL_TDB_Loader>
{
};

struct GMPL_TDB_DataAllocator : Allocator<PoolGMPL_TDB_Data>
{
};

struct GMPL_TDB_RecordsAllocator : Allocator<PoolGMPL_TDB_Records>
{
};

struct GMPL_TDB_FlatMapAllocator : Allocator<PoolGMPL_TDB_FlatMap>
{
};

struct GMPL_TDB_RecordMapAllocator : Allocator<PoolGMPL_TDB_RecordMap>
{
};

struct GMPL_TDB_RecordTypeMapAllocator : Allocator<PoolGMPL_TDB_RecordTypeMap>
{
};

struct GMPL_TDB_QueryToRecordMapAllocator : Allocator<PoolGMPL_TDB_QueryToRecordMap>
{
};

struct GMPL_TDB_GroupTagsMapAllocator : Allocator<PoolGMPL_TDB_GroupTagsMap>
{
};

struct GMPL_SmallAllocator : Allocator<PoolGMPL_Small>
{
};

struct GMPL_BlackboardsAllocator : Allocator<PoolGMPL_Blackboards>
{
};

struct GMPL_EffectAllocator : Allocator<PoolGMPL_Effect>
{
};

struct GMPL_TimeAllocator : Allocator<PoolGMPL_Time>
{
};

struct GMPL_Time_DilationAllocator : Allocator<PoolGMPL_Time_Dilation>
{
};

struct GMPL_Time_DelayAllocator : Allocator<PoolGMPL_Time_Delay>
{
};

struct GMPL_Time_SystemAllocator : Allocator<PoolGMPL_Time_System>
{
};

struct GMPL_DynamicIDAllocator : Allocator<PoolGMPL_DynamicID>
{
};

struct GMPL_InputAllocator : Allocator<PoolGMPL_Input>
{
};

struct GMPL_SpatialQueryAllocator : Allocator<PoolGMPL_SpatialQuery>
{
};

struct GMPL_CameraAllocator : Allocator<PoolGMPL_Camera>
{
};

struct GMPL_DestructionAllocator : Allocator<PoolGMPL_Destruction>
{
};

struct GMPL_HitAllocator : Allocator<PoolGMPL_Hit>
{
};

struct GMPL_MountingAllocator : Allocator<PoolGMPL_Mounting>
{
};

struct GMPL_MovingPlatformAllocator : Allocator<PoolGMPL_MovingPlatform>
{
};

struct GMPL_PrereqAllocator : Allocator<PoolGMPL_Prereq>
{
};

struct GMPL_ProjectileAllocator : Allocator<PoolGMPL_Projectile>
{
};

struct GMPL_ScanningAllocator : Allocator<PoolGMPL_Scanning>
{
};

struct GMPL_TransformAnimAllocator : Allocator<PoolGMPL_TransformAnim>
{
};

struct GMPL_TransformAnim_PlayDataAllocator : Allocator<PoolGMPL_TransformAnim_PlayData>
{
};

struct GMPL_TransformAnim_PersisteAllocator : Allocator<PoolGMPL_TransformAnim_Persiste>
{
};

struct GMPL_TargetingAllocator : Allocator<PoolGMPL_Targeting>
{
};

struct GMPL_Targeting_SystemAllocator : Allocator<PoolGMPL_Targeting_System>
{
};

struct GMPL_Targeting_System_MainAllocator : Allocator<PoolGMPL_Targeting_System_Main>
{
};

struct GMPL_Targeting_System_TickAllocator : Allocator<PoolGMPL_Targeting_System_Tick>
{
};

struct GMPL_Targeting_ComponentsAllocator : Allocator<PoolGMPL_Targeting_Components>
{
};

struct GMPL_Targeting_FilterAllocator : Allocator<PoolGMPL_Targeting_Filter>
{
};

struct GMPL_Targeting_AimAssistAllocator : Allocator<PoolGMPL_Targeting_AimAssist>
{
};

struct GMPL_Targeting_SmartGunAllocator : Allocator<PoolGMPL_Targeting_SmartGun>
{
};

struct GMPL_Targeting_TargetStructAllocator : Allocator<PoolGMPL_Targeting_TargetStruct>
{
};

struct GMPL_Targeting_UserAllocator : Allocator<PoolGMPL_Targeting_User>
{
};

struct GMPL_VisionModeAllocator : Allocator<PoolGMPL_VisionMode>
{
};

struct GMPL_WeaponAllocator : Allocator<PoolGMPL_Weapon>
{
};

struct GMPL_SpawnAllocator : Allocator<PoolGMPL_Spawn>
{
};

struct GMPL_LightAllocator : Allocator<PoolGMPL_Light>
{
};

struct GMPL_FxAllocator : Allocator<PoolGMPL_Fx>
{
};

struct GMPL_MicroAllocator : Allocator<PoolGMPL_Micro>
{
};

struct GMPL_PlayerSystemAllocator : Allocator<PoolGMPL_PlayerSystem>
{
};

struct GMPL_PSMAllocator : Allocator<PoolGMPL_PSM>
{
};

struct GMPL_PingSystemAllocator : Allocator<PoolGMPL_PingSystem>
{
};

struct GMPL_AIDirectorAllocator : Allocator<PoolGMPL_AIDirector>
{
};

struct GMPL_CooldownSystemAllocator : Allocator<PoolGMPL_CooldownSystem>
{
};

struct GMPL_EnvironmentDamageSysteAllocator : Allocator<PoolGMPL_EnvironmentDamageSyste>
{
};

struct GMPL_PhotoModeAllocator : Allocator<PoolGMPL_PhotoMode>
{
};

struct GMPL_LevelAssignmentAllocator : Allocator<PoolGMPL_LevelAssignment>
{
};

struct GMPL_FootstepSystemAllocator : Allocator<PoolGMPL_FootstepSystem>
{
};

struct GMPL_NarrationPlateAllocator : Allocator<PoolGMPL_NarrationPlate>
{
};

struct GMPL_CharacterCustomizationAllocator : Allocator<PoolGMPL_CharacterCustomization>
{
};

struct GMPL_PhantomAllocator : Allocator<PoolGMPL_Phantom>
{
};

struct GMPL_ObjectCarrySystemAllocator : Allocator<PoolGMPL_ObjectCarrySystem>
{
};

struct GOGRewardsAllocator : Allocator<PoolGOGRewards>
{
};

struct AnimSystemAllocator : Allocator<PoolAnimSystem>
{
};

struct AnimResourcesAllocator : Allocator<PoolAnimResources>
{
};

struct AnimInstancesAllocator : Allocator<PoolAnimInstances>
{
};

struct AnimMiscAllocator : Allocator<PoolAnimMisc>
{
};

struct AnimBufferStreamingAllocator : Allocator<PoolAnimBufferStreaming>
{
};

struct AnimBuffersAllocator : Allocator<PoolAnimBuffers>
{
};

struct AnimBuffers_DecompressedAllocator : Allocator<PoolAnimBuffers_Decompressed>
{
};

struct AnimBuffers_CompressedAllocator : Allocator<PoolAnimBuffers_Compressed>
{
};

struct AnimGraphsAllocator : Allocator<PoolAnimGraphs>
{
};

struct AnimFacialAllocator : Allocator<PoolAnimFacial>
{
};

struct AnimSetsAllocator : Allocator<PoolAnimSets>
{
};

struct AnimMotionExtractionAllocator : Allocator<PoolAnimMotionExtraction>
{
};

struct AnimRigsAllocator : Allocator<PoolAnimRigs>
{
};

struct AnimSetsEventsAllocator : Allocator<PoolAnimSetsEvents>
{
};

struct AnimStreamingAllocator : Allocator<PoolAnimStreaming>
{
};

struct AnimFallbackFrameAllocator : Allocator<PoolAnimFallbackFrame>
{
};

struct AnimGraphInstancesAllocator : Allocator<PoolAnimGraphInstances>
{
};

struct AnimObjectsAllocator : Allocator<PoolAnimObjects>
{
};

struct AnimComponentsAllocator : Allocator<PoolAnimComponents>
{
};

struct AnimWrapperManagerAllocator : Allocator<PoolAnimWrapperManager>
{
};

struct AnimMetaPosesAllocator : Allocator<PoolAnimMetaPoses>
{
};

struct AnimMetaRigsAllocator : Allocator<PoolAnimMetaRigs>
{
};

struct AnimPoseAndEventsCacheAllocator : Allocator<PoolAnimPoseAndEventsCache>
{
};

struct AnimRuntimeSystemAllocator : Allocator<PoolAnimRuntimeSystem>
{
};

struct AnimPosesAllocator : Allocator<PoolAnimPoses>
{
};

struct AnimRagdollAllocator : Allocator<PoolAnimRagdoll>
{
};

struct AnimGraphUpdateAllocator : Allocator<PoolAnimGraphUpdate>
{
};

struct AnimDanglesAllocator : Allocator<PoolAnimDangles>
{
};

struct AnimDatabasesAllocator : Allocator<PoolAnimDatabases>
{
};

struct AnimCommunicationAllocator : Allocator<PoolAnimCommunication>
{
};

struct AnimFeaturesAllocator : Allocator<PoolAnimFeatures>
{
};

struct AnimLookAtsAllocator : Allocator<PoolAnimLookAts>
{
};

struct AnimTargetsAllocator : Allocator<PoolAnimTargets>
{
};

struct AnimIKAllocator : Allocator<PoolAnimIK>
{
};

struct AnimSplineAllocator : Allocator<PoolAnimSpline>
{
};

struct AnimExtraDataAllocator : Allocator<PoolAnimExtraData>
{
};

struct AnimCommandsAllocator : Allocator<PoolAnimCommands>
{
};

struct AnimWorkspotsAllocator : Allocator<PoolAnimWorkspots>
{
};

struct AnimMemoryAllocator : Allocator<PoolAnimMemory>
{
};

struct AnimMotionProviderAllocator : Allocator<PoolAnimMotionProvider>
{
};

struct AnimGraphResourceContainerAllocator : Allocator<PoolAnimGraphResourceContainer>
{
};

struct AnimUncategorizedAllocator : Allocator<PoolAnimUncategorized>
{
};

struct AnimDebugAllocator : Allocator<PoolAnimDebug>
{
};

struct GalaxyAllocator : Allocator<PoolGalaxy>
{
};

struct FunctionalTestsAllocator : Allocator<PoolFunctionalTests>
{
};

struct MultiplayerGameplayAllocator : Allocator<PoolMultiplayerGameplay>
{
};

struct WorkspotsAllocator : Allocator<PoolWorkspots>
{
};

struct WorkspotSocketCacheAllocator : Allocator<PoolWorkspotSocketCache>
{
};

struct WorkspotSystemAllocator : Allocator<PoolWorkspotSystem>
{
};

struct WorkspotSystemCommandsAllocator : Allocator<PoolWorkspotSystemCommands>
{
};

struct WorkspotInstancesAllocator : Allocator<PoolWorkspotInstances>
{
};

struct WorkspotInstIeratorsAllocator : Allocator<PoolWorkspotInstIerators>
{
};

struct WorkspotDefaultAllocator : Allocator<PoolWorkspotDefault>
{
};

struct WorkspotResourcesAllocator : Allocator<PoolWorkspotResources>
{
};

struct WorkspotResTreeAllocator : Allocator<PoolWorkspotResTree>
{
};

struct WorkspotResTreeEntriesAllocator : Allocator<PoolWorkspotResTreeEntries>
{
};

struct WorkspotResTreeDataAllocator : Allocator<PoolWorkspotResTreeData>
{
};

struct WorkspotResGraphAllocator : Allocator<PoolWorkspotResGraph>
{
};

struct LocLocalizedTextAllocator : Allocator<PoolLocLocalizedText>
{
};

struct AudioAllocator : Allocator<PoolAudio>
{
};

struct ReplicatedEntitySystemAllocator : Allocator<PoolReplicatedEntitySystem>
{
};

struct WwiseAllocator : Allocator<PoolWwise>
{
};

struct AudioMetadataAllocator : Allocator<PoolAudioMetadata>
{
};

struct AudioGeometryAllocator : Allocator<PoolAudioGeometry>
{
};

struct AudioSystemsAllocator : Allocator<PoolAudioSystems>
{
};

struct AudioSystemsGroupItemsAllocator : Allocator<PoolAudioSystemsGroupItems>
{
};

struct AudioEmittersAllocator : Allocator<PoolAudioEmitters>
{
};

struct AudioDecoratorsAllocator : Allocator<PoolAudioDecorators>
{
};

struct AudioPropertyStreamAllocator : Allocator<PoolAudioPropertyStream>
{
};

struct AudioPositionStreamAllocator : Allocator<PoolAudioPositionStream>
{
};

struct LocalizationAndVoAllocator : Allocator<PoolLocalizationAndVo>
{
};

struct AudioAmbientsAllocator : Allocator<PoolAudioAmbients>
{
};

struct AudioGroupingAllocator : Allocator<PoolAudioGrouping>
{
};

struct AudioSystemInterfacesAllocator : Allocator<PoolAudioSystemInterfaces>
{
};

struct AudioWeaponsAllocator : Allocator<PoolAudioWeapons>
{
};

struct AudioMusicAndRadioAllocator : Allocator<PoolAudioMusicAndRadio>
{
};

struct SoundComponentAllocator : Allocator<PoolSoundComponent>
{
};

struct AudioMixingAndSceneAllocator : Allocator<PoolAudioMixingAndScene>
{
};

struct AudioReverbAllocator : Allocator<PoolAudioReverb>
{
};

struct AudioAcousticNodesAllocator : Allocator<PoolAudioAcousticNodes>
{
};

struct AudioAcousticNodeConnectionAllocator : Allocator<PoolAudioAcousticNodeConnection>
{
};

struct AudioAcousticNodeOctreesAllocator : Allocator<PoolAudioAcousticNodeOctrees>
{
};

struct AudioAcousticsPathfindingAllocator : Allocator<PoolAudioAcousticsPathfinding>
{
};

struct AudioAcousticZonesAllocator : Allocator<PoolAudioAcousticZones>
{
};

struct AudioAcousticStreamingAllocator : Allocator<PoolAudioAcousticStreaming>
{
};

struct ReplicationAllocator : Allocator<PoolReplication>
{
};

struct ReplicationProfilerAllocator : Allocator<PoolReplicationProfiler>
{
};

struct ReplicationRTTIAllocator : Allocator<PoolReplicationRTTI>
{
};

struct InputAllocator : Allocator<PoolInput>
{
};

struct InGameConfigAllocator : Allocator<PoolInGameConfig>
{
};

struct InGameConfigResourceAllocator : Allocator<PoolInGameConfigResource>
{
};

struct ImageAllocator : Allocator<PoolImage>
{
};

struct CompressionAllocator : Allocator<PoolCompression>
{
};

struct AsyncIOAllocator : Allocator<PoolAsyncIO>
{
};

struct Jobs2Allocator : Allocator<PoolJobs2>
{
};

struct Jobs2DebugAllocator : Allocator<PoolJobs2Debug>
{
};

struct Jobs2DispatcherAllocator : Allocator<PoolJobs2Dispatcher>
{
};

struct Jobs2QueueLowPriorityAllocator : Allocator<PoolJobs2QueueLowPriority>
{
};

struct Jobs2QueueNormalPriorityAllocator : Allocator<PoolJobs2QueueNormalPriority>
{
};

struct Jobs2QueueHighPriorityAllocator : Allocator<PoolJobs2QueueHighPriority>
{
};

struct Jobs2QueueBackgroundPrioritAllocator : Allocator<PoolJobs2QueueBackgroundPriorit>
{
};

struct Jobs2CountersAllocator : Allocator<PoolJobs2Counters>
{
};

struct Jobs2WaitingListEntriesAllocator : Allocator<PoolJobs2WaitingListEntries>
{
};

struct Jobs2ParallelForSharedCountAllocator : Allocator<PoolJobs2ParallelForSharedCount>
{
};

struct Jobs2ParallelForJobEntriesAllocator : Allocator<PoolJobs2ParallelForJobEntries>
{
};

struct Jobs2DataAllocator : Allocator<PoolJobs2Data>
{
};

struct JobScopeAllocator : Allocator<PoolJobScope>
{
};

struct GPUTexturesAllocator : Allocator<PoolGPUTextures>
{
};

struct GPUBuffersAllocator : Allocator<PoolGPUBuffers>
{
};

struct GPUInPlaceRenderDataAllocator : Allocator<PoolGPUInPlaceRenderData>
{
};

struct GpuApiAllocator : Allocator<PoolGpuApi>
{
};

struct TinyAllocator : Allocator<PoolTiny>
{
};

struct DeviceDataAllocator : Allocator<PoolDeviceData>
{
};

struct RenderStateCacheAllocator : Allocator<PoolRenderStateCache>
{
};

struct VendorApiAllocator : Allocator<PoolVendorApi>
{
};

struct CommandListsAllocator : Allocator<PoolCommandLists>
{
};

struct CommandListCBAllocator : Allocator<PoolCommandListCB>
{
};

struct ResRefExtraAllocator : Allocator<PoolResRefExtra>
{
};

struct QueriesAllocator : Allocator<PoolQueries>
{
};

struct ResidencyMgrAllocator : Allocator<PoolResidencyMgr>
{
};

struct PSOCacheAllocator : Allocator<PoolPSOCache>
{
};

struct D3D12Allocator : Allocator<PoolD3D12Allocator>
{
};

struct SmallBuffersPoolsAllocator : Allocator<PoolSmallBuffersPools>
{
};

struct BreadcrumbsAllocator : Allocator<PoolBreadcrumbs>
{
};

struct Breadcrumbs_MarkersAllocator : Allocator<PoolBreadcrumbs_Markers>
{
};

struct Breadcrumbs_MarkersUsedAllocator : Allocator<PoolBreadcrumbs_MarkersUsed>
{
};

struct GPUMirrorAllocator : Allocator<PoolGPUMirror>
{
};

struct MirrorTexturesAllocator : Allocator<PoolMirrorTextures>
{
};

struct GPUM_TG_UnknownAllocator : Allocator<GPUM_TG_Unknown>
{
};

struct MirrorTexturesGenericAllocator : Allocator<PoolMirrorTexturesGeneric>
{
};

struct GPUM_TG_Generic_ColorAllocator : Allocator<GPUM_TG_Generic_Color>
{
};

struct GPUM_TG_Generic_GrayscaleAllocator : Allocator<GPUM_TG_Generic_Grayscale>
{
};

struct GPUM_TG_Generic_NormalAllocator : Allocator<GPUM_TG_Generic_Normal>
{
};

struct GPUM_TG_Generic_DataAllocator : Allocator<GPUM_TG_Generic_Data>
{
};

struct GPUM_TG_Generic_UIAllocator : Allocator<GPUM_TG_Generic_UI>
{
};

struct GPUM_TG_Generic_FontAllocator : Allocator<GPUM_TG_Generic_Font>
{
};

struct GPUM_TG_Generic_LUTAllocator : Allocator<GPUM_TG_Generic_LUT>
{
};

struct GPUM_TG_Generic_MorphBlendAllocator : Allocator<GPUM_TG_Generic_MorphBlend>
{
};

struct MirrorTexturesMultilayerAllocator : Allocator<PoolMirrorTexturesMultilayer>
{
};

struct GPUM_TG_Multilayer_ColorAllocator : Allocator<GPUM_TG_Multilayer_Color>
{
};

struct GPUM_TG_Multilayer_NormalAllocator : Allocator<GPUM_TG_Multilayer_Normal>
{
};

struct GPUM_TG_Multilayer_GrayscaleAllocator : Allocator<GPUM_TG_Multilayer_Grayscale>
{
};

struct GPUM_TG_Multilayer_MicroblendAllocator : Allocator<GPUM_TG_Multilayer_Microblend>
{
};

struct GPUM_TG_Multilayer_MLMaskAllocator : Allocator<GPUM_TG_Multilayer_MLMask>
{
};

struct MirrorTexturesSystemAllocator : Allocator<PoolMirrorTexturesSystem>
{
};

struct GPUM_TG_System_GenericAllocator : Allocator<GPUM_TG_System_Generic>
{
};

struct GPUM_TG_System_RenderTargetAllocator : Allocator<GPUM_TG_System_RenderTarget>
{
};

struct GPUM_TG_System_RenderTargetFlowAllocator : Allocator<GPUM_TG_System_RenderTargetFlow>
{
};

struct GPUM_TG_System_RenderTargetUIAllocator : Allocator<GPUM_TG_System_RenderTargetUI>
{
};

struct GPUM_TG_System_RenderTargetUI_AAllocator : Allocator<GPUM_TG_System_RenderTargetUI_A>
{
};

struct GPUM_TG_System_RenderTargetUI_PAllocator : Allocator<GPUM_TG_System_RenderTargetUI_P>
{
};

struct GPUM_TG_System_RenderTargetUI_MAllocator : Allocator<GPUM_TG_System_RenderTargetUI_M>
{
};

struct GPUM_TG_System_RenderTargetUI_HAllocator : Allocator<GPUM_TG_System_RenderTargetUI_H>
{
};

struct GPUM_TG_System_RenderTargetUI_CAllocator : Allocator<GPUM_TG_System_RenderTargetUI_C>
{
};

struct GPUM_TG_System_RayTracingAllocator : Allocator<GPUM_TG_System_RayTracing>
{
};

struct GPUM_TG_System_GameplayFXAllocator : Allocator<GPUM_TG_System_GameplayFX>
{
};

struct GPUM_TG_System_PostProcessAllocator : Allocator<GPUM_TG_System_PostProcess>
{
};

struct GPUM_TG_System_EnvironmentAllocator : Allocator<GPUM_TG_System_Environment>
{
};

struct GPUM_TG_System_EnvProbeAllocator : Allocator<GPUM_TG_System_EnvProbe>
{
};

struct GPUM_TG_System_ShadowsAllocator : Allocator<GPUM_TG_System_Shadows>
{
};

struct GPUM_TG_System_TerrainAllocator : Allocator<GPUM_TG_System_Terrain>
{
};

struct GPUM_TG_System_GIAllocator : Allocator<GPUM_TG_System_GI>
{
};

struct GPUM_TG_System_MultilayerProxyAllocator : Allocator<GPUM_TG_System_MultilayerProxy>
{
};

struct GPUM_TG_System_VideoAllocator : Allocator<GPUM_TG_System_Video>
{
};

struct GPUM_TG_System_GarmentAllocator : Allocator<GPUM_TG_System_Garment>
{
};

struct GPUM_TG_System_MorphTargetsAllocator : Allocator<GPUM_TG_System_MorphTargets>
{
};

struct MirrorBuffersAllocator : Allocator<PoolMirrorBuffers>
{
};

struct GPUM_Buffer_UnknownAllocator : Allocator<GPUM_Buffer_Unknown>
{
};

struct GPUM_Buffer_SystemAllocator : Allocator<GPUM_Buffer_System>
{
};

struct GPUM_Buffer_MeshResourceAllocator : Allocator<GPUM_Buffer_MeshResource>
{
};

struct GPUM_Buffer_MeshCustomAllocator : Allocator<GPUM_Buffer_MeshCustom>
{
};

struct GPUM_Buffer_AutoSpawnerAllocator : Allocator<GPUM_Buffer_AutoSpawner>
{
};

struct GPUM_Buffer_DebugAllocator : Allocator<GPUM_Buffer_Debug>
{
};

struct GPUM_Buffer_DPLAllocator : Allocator<GPUM_Buffer_DPL>
{
};

struct GPUM_Buffer_WeatherAllocator : Allocator<GPUM_Buffer_Weather>
{
};

struct GPUM_Buffer_ReflectionProbeAllocator : Allocator<GPUM_Buffer_ReflectionProbe>
{
};

struct GPUM_Buffer_SkinningAllocator : Allocator<GPUM_Buffer_Skinning>
{
};

struct GPUM_Buffer_LightsAllocator : Allocator<GPUM_Buffer_Lights>
{
};

struct GPUM_Buffer_VideoAllocator : Allocator<GPUM_Buffer_Video>
{
};

struct GPUM_Buffer_ParticlesAllocator : Allocator<GPUM_Buffer_Particles>
{
};

struct GPUM_Buffer_GIAllocator : Allocator<GPUM_Buffer_GI>
{
};

struct GPUM_Buffer_GIManagerAllocator : Allocator<GPUM_Buffer_GIManager>
{
};

struct GPUM_Buffer_GIManagerLitProbesAllocator : Allocator<GPUM_Buffer_GIManagerLitProbes>
{
};

struct GPUM_Buffer_GIManagerLookupAllocator : Allocator<GPUM_Buffer_GIManagerLookup>
{
};

struct GPUM_Buffer_GIManagerInterpolatAllocator : Allocator<GPUM_Buffer_GIManagerInterpolat>
{
};

struct GPUM_Buffer_GIManagerLitBricksAllocator : Allocator<GPUM_Buffer_GIManagerLitBricks>
{
};

struct GPUM_Buffer_GIManagerLightsAllocator : Allocator<GPUM_Buffer_GIManagerLights>
{
};

struct GPUM_Buffer_GIManagerEnvVolumeAllocator : Allocator<GPUM_Buffer_GIManagerEnvVolume>
{
};

struct GPUM_Buffer_GIProxyAllocator : Allocator<GPUM_Buffer_GIProxy>
{
};

struct GPUM_Buffer_GIProxyBrickAllocator : Allocator<GPUM_Buffer_GIProxyBrick>
{
};

struct GPUM_Buffer_GIProxySurfelAllocator : Allocator<GPUM_Buffer_GIProxySurfel>
{
};

struct GPUM_Buffer_GIProxyProbesAllocator : Allocator<GPUM_Buffer_GIProxyProbes>
{
};

struct GPUM_Buffer_GIProxyFactorsAllocator : Allocator<GPUM_Buffer_GIProxyFactors>
{
};

struct GPUM_Buffer_GIProxyAccelerationAllocator : Allocator<GPUM_Buffer_GIProxyAcceleration>
{
};

struct GPUM_Buffer_RaytracingAllocator : Allocator<GPUM_Buffer_Raytracing>
{
};

struct GPUM_Buffer_RaytracingUploadAllocator : Allocator<GPUM_Buffer_RaytracingUpload>
{
};

struct GPUM_Buffer_RaytracingASAllocator : Allocator<GPUM_Buffer_RaytracingAS>
{
};

struct GPUM_Buffer_DecalsAllocator : Allocator<GPUM_Buffer_Decals>
{
};

struct GPUM_Buffer_InstancesAllocator : Allocator<GPUM_Buffer_Instances>
{
};

struct GPUM_Buffer_MaterialsAllocator : Allocator<GPUM_Buffer_Materials>
{
};

struct GPUM_Buffer_MultilayerAllocator : Allocator<GPUM_Buffer_Multilayer>
{
};

struct GPUM_Buffer_FrameResourcesAllocator : Allocator<GPUM_Buffer_FrameResources>
{
};

struct GPUM_Buffer_MiscAllocator : Allocator<GPUM_Buffer_Misc>
{
};

struct GPUM_Buffer_MorphTargetsAllocator : Allocator<GPUM_Buffer_MorphTargets>
{
};
} // namespace Memory
} // namespace RED4ext
