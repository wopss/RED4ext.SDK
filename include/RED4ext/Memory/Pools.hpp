#pragma once

#include <RED4ext/Memory/Vault.hpp>

namespace RED4ext::Memory
{
template<typename T>
struct TPoolInfo : PoolInfo
{
protected:
    TPoolInfo() = default;
    ~TPoolInfo() = default;

    inline static T* Get(const char* aName)
    {
        static auto pool = Vault::Get()->poolRegistry.Get<T>(aName);
        return pool;
    }
};

struct GamepadObserverPool : TPoolInfo<GamepadObserverPool>
{
    static constexpr auto Name = "GamepadObserverPool";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInputInternal : TPoolInfo<PoolInputInternal>
{
    static constexpr auto Name = "PoolInputInternal";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRoot : TPoolInfo<PoolRoot>
{
    static constexpr auto Name = "PoolRoot";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolCPU : TPoolInfo<PoolCPU>
{
    static constexpr auto Name = "PoolCPU";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDefault : TPoolInfo<PoolDefault>
{
    static constexpr auto Name = "PoolDefault";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolLegacyOperator : TPoolInfo<PoolLegacyOperator>
{
    static constexpr auto Name = "PoolLegacyOperator";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFrame : TPoolInfo<PoolFrame>
{
    static constexpr auto Name = "PoolFrame";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDoubleBufferedFrame : TPoolInfo<PoolDoubleBufferedFrame>
{
    static constexpr auto Name = "PoolDoubleBufferedFrame";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEngine : TPoolInfo<PoolEngine>
{
    static constexpr auto Name = "PoolEngine";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRefCount : TPoolInfo<PoolRefCount>
{
    static constexpr auto Name = "PoolRefCount";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGPU : TPoolInfo<PoolGPU>
{
    static constexpr auto Name = "PoolGPU";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolBackend : TPoolInfo<PoolBackend>
{
    static constexpr auto Name = "PoolBackend";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDebug : TPoolInfo<PoolDebug>
{
    static constexpr auto Name = "PoolDebug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolCore : TPoolInfo<PoolCore>
{
    static constexpr auto Name = "PoolCore";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolScript : TPoolInfo<PoolScript>
{
    static constexpr auto Name = "PoolScript";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolStreaming : TPoolInfo<PoolStreaming>
{
    static constexpr auto Name = "PoolStreaming";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolStreamingNodeProxy : TPoolInfo<PoolStreamingNodeProxy>
{
    static constexpr auto Name = "PoolStreamingNodeProxy";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolStreamingResource : TPoolInfo<PoolStreamingResource>
{
    static constexpr auto Name = "PoolStreamingResource";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolStreamingData : TPoolInfo<PoolStreamingData>
{
    static constexpr auto Name = "PoolStreamingData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolScriptCompiler : TPoolInfo<PoolScriptCompiler>
{
    static constexpr auto Name = "PoolScriptCompiler";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolScriptDebugger : TPoolInfo<PoolScriptDebugger>
{
    static constexpr auto Name = "PoolScriptDebugger";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolLibTree : TPoolInfo<PoolLibTree>
{
    static constexpr auto Name = "PoolLibTree";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI : TPoolInfo<PoolAI>
{
    static constexpr auto Name = "PoolAI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTelemetry : TPoolInfo<PoolTelemetry>
{
    static constexpr auto Name = "PoolTelemetry";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysics : TPoolInfo<PoolPhysics>
{
    static constexpr auto Name = "PoolPhysics";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsFilterData : TPoolInfo<PoolPhysicsFilterData>
{
    static constexpr auto Name = "PoolPhysicsFilterData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsQueries : TPoolInfo<PoolPhysicsQueries>
{
    static constexpr auto Name = "PoolPhysicsQueries";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsQueriesInternal : TPoolInfo<PoolPhysicsQueriesInternal>
{
    static constexpr auto Name = "PoolPhysicsQueriesInternal";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsAsyncQueryToken : TPoolInfo<PoolPhysicsAsyncQueryToken>
{
    static constexpr auto Name = "PoolPhysicsAsyncQueryToken";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsAsyncQueryTokenN : TPoolInfo<PoolPhysicsAsyncQueryTokenN>
{
    static constexpr auto Name = "PoolPhysicsAsyncQueryTokenN";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysX : TPoolInfo<PoolPhysX>
{
    static constexpr auto Name = "PoolPhysX";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsDestruction : TPoolInfo<PoolPhysicsDestruction>
{
    static constexpr auto Name = "PoolPhysicsDestruction";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsCollision : TPoolInfo<PoolPhysicsCollision>
{
    static constexpr auto Name = "PoolPhysicsCollision";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsProxies : TPoolInfo<PoolPhysicsProxies>
{
    static constexpr auto Name = "PoolPhysicsProxies";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsRagdoll : TPoolInfo<PoolPhysicsRagdoll>
{
    static constexpr auto Name = "PoolPhysicsRagdoll";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsInternal : TPoolInfo<PoolPhysicsInternal>
{
    static constexpr auto Name = "PoolPhysicsInternal";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsTransformBuffer : TPoolInfo<PoolPhysicsTransformBuffer>
{
    static constexpr auto Name = "PoolPhysicsTransformBuffer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsIDLookup : TPoolInfo<PoolPhysicsIDLookup>
{
    static constexpr auto Name = "PoolPhysicsIDLookup";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsSystemResources : TPoolInfo<PoolPhysicsSystemResources>
{
    static constexpr auto Name = "PoolPhysicsSystemResources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsSystemBody : TPoolInfo<PoolPhysicsSystemBody>
{
    static constexpr auto Name = "PoolPhysicsSystemBody";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsCollider : TPoolInfo<PoolPhysicsCollider>
{
    static constexpr auto Name = "PoolPhysicsCollider";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPhysicsCloth : TPoolInfo<PoolPhysicsCloth>
{
    static constexpr auto Name = "PoolPhysicsCloth";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRTTI : TPoolInfo<PoolRTTI>
{
    static constexpr auto Name = "PoolRTTI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRTTIFunction : TPoolInfo<PoolRTTIFunction>
{
    static constexpr auto Name = "PoolRTTIFunction";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRTTIProperty : TPoolInfo<PoolRTTIProperty>
{
    static constexpr auto Name = "PoolRTTIProperty";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTriggers : TPoolInfo<PoolTriggers>
{
    static constexpr auto Name = "PoolTriggers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSpline : TPoolInfo<PoolSpline>
{
    static constexpr auto Name = "PoolSpline";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolCurves : TPoolInfo<PoolCurves>
{
    static constexpr auto Name = "PoolCurves";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAreas : TPoolInfo<PoolAreas>
{
    static constexpr auto Name = "PoolAreas";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEffect : TPoolInfo<PoolEffect>
{
    static constexpr auto Name = "PoolEffect";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolIDRegistry : TPoolInfo<PoolIDRegistry>
{
    static constexpr auto Name = "PoolIDRegistry";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEvents : TPoolInfo<PoolEvents>
{
    static constexpr auto Name = "PoolEvents";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEvent : TPoolInfo<PoolEvent>
{
    static constexpr auto Name = "PoolEvent";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEventBroker : TPoolInfo<PoolEventBroker>
{
    static constexpr auto Name = "PoolEventBroker";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSerializable : TPoolInfo<PoolSerializable>
{
    static constexpr auto Name = "PoolSerializable";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolResource : TPoolInfo<PoolResource>
{
    static constexpr auto Name = "PoolResource";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolResourceLoadingJobs : TPoolInfo<PoolResourceLoadingJobs>
{
    static constexpr auto Name = "PoolResourceLoadingJobs";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInterop : TPoolInfo<PoolInterop>
{
    static constexpr auto Name = "PoolInterop";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolString : TPoolInfo<PoolString>
{
    static constexpr auto Name = "PoolString";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNetworkServices : TPoolInfo<PoolNetworkServices>
{
    static constexpr auto Name = "PoolNetworkServices";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolUI : TPoolInfo<PoolUI>
{
    static constexpr auto Name = "PoolUI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk : TPoolInfo<PoolInk>
{
    static constexpr auto Name = "PoolInk";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Uncategorized : TPoolInfo<PoolInk_Uncategorized>
{
    static constexpr auto Name = "PoolInk_Uncategorized";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Widgets : TPoolInfo<PoolInk_Widgets>
{
    static constexpr auto Name = "PoolInk_Widgets";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Library : TPoolInfo<PoolInk_Library>
{
    static constexpr auto Name = "PoolInk_Library";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Events : TPoolInfo<PoolInk_Events>
{
    static constexpr auto Name = "PoolInk_Events";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Binding : TPoolInfo<PoolInk_Binding>
{
    static constexpr auto Name = "PoolInk_Binding";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Animations : TPoolInfo<PoolInk_Animations>
{
    static constexpr auto Name = "PoolInk_Animations";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Rendering : TPoolInfo<PoolInk_Rendering>
{
    static constexpr auto Name = "PoolInk_Rendering";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Effects : TPoolInfo<PoolInk_Effects>
{
    static constexpr auto Name = "PoolInk_Effects";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Brushes : TPoolInfo<PoolInk_Brushes>
{
    static constexpr auto Name = "PoolInk_Brushes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Styles : TPoolInfo<PoolInk_Styles>
{
    static constexpr auto Name = "PoolInk_Styles";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Controllers : TPoolInfo<PoolInk_Controllers>
{
    static constexpr auto Name = "PoolInk_Controllers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers : TPoolInfo<PoolInk_Layers>
{
    static constexpr auto Name = "PoolInk_Layers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers_StateMachine : TPoolInfo<PoolInk_Layers_StateMachine>
{
    static constexpr auto Name = "PoolInk_Layers_StateMachine";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers_WorldLayer : TPoolInfo<PoolInk_Layers_WorldLayer>
{
    static constexpr auto Name = "PoolInk_Layers_WorldLayer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers_MenuLayer : TPoolInfo<PoolInk_Layers_MenuLayer>
{
    static constexpr auto Name = "PoolInk_Layers_MenuLayer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers_LoadingScreen : TPoolInfo<PoolInk_Layers_LoadingScreen>
{
    static constexpr auto Name = "PoolInk_Layers_LoadingScreen";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers_SystemNotificati : TPoolInfo<PoolInk_Layers_SystemNotificati>
{
    static constexpr auto Name = "PoolInk_Layers_SystemNotificati";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers_GameNotification : TPoolInfo<PoolInk_Layers_GameNotification>
{
    static constexpr auto Name = "PoolInk_Layers_GameNotification";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers_ViewportWrapper : TPoolInfo<PoolInk_Layers_ViewportWrapper>
{
    static constexpr auto Name = "PoolInk_Layers_ViewportWrapper";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Layers_EventBroker : TPoolInfo<PoolInk_Layers_EventBroker>
{
    static constexpr auto Name = "PoolInk_Layers_EventBroker";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Jobs : TPoolInfo<PoolInk_Jobs>
{
    static constexpr auto Name = "PoolInk_Jobs";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Text : TPoolInfo<PoolInk_Text>
{
    static constexpr auto Name = "PoolInk_Text";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_HitTest : TPoolInfo<PoolInk_HitTest>
{
    static constexpr auto Name = "PoolInk_HitTest";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_System : TPoolInfo<PoolInk_System>
{
    static constexpr auto Name = "PoolInk_System";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Scripts : TPoolInfo<PoolInk_Scripts>
{
    static constexpr auto Name = "PoolInk_Scripts";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Mappins : TPoolInfo<PoolInk_Mappins>
{
    static constexpr auto Name = "PoolInk_Mappins";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_MinimapGeometry : TPoolInfo<PoolInk_MinimapGeometry>
{
    static constexpr auto Name = "PoolInk_MinimapGeometry";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Offscreen : TPoolInfo<PoolInk_Offscreen>
{
    static constexpr auto Name = "PoolInk_Offscreen";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Spawning : TPoolInfo<PoolInk_Spawning>
{
    static constexpr auto Name = "PoolInk_Spawning";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Resources : TPoolInfo<PoolInk_Resources>
{
    static constexpr auto Name = "PoolInk_Resources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Videos : TPoolInfo<PoolInk_Videos>
{
    static constexpr auto Name = "PoolInk_Videos";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Backend : TPoolInfo<PoolInk_Backend>
{
    static constexpr auto Name = "PoolInk_Backend";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInk_Debug : TPoolInfo<PoolInk_Debug>
{
    static constexpr auto Name = "PoolInk_Debug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNetworkSessionRecordingTool : TPoolInfo<PoolNetworkSessionRecordingTool>
{
    static constexpr auto Name = "PoolNetworkSessionRecordingTool";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNetwork : TPoolInfo<PoolNetwork>
{
    static constexpr auto Name = "PoolNetwork";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMultiplayer : TPoolInfo<PoolMultiplayer>
{
    static constexpr auto Name = "PoolMultiplayer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTexture : TPoolInfo<PoolTexture>
{
    static constexpr auto Name = "PoolTexture";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMesh : TPoolInfo<PoolMesh>
{
    static constexpr auto Name = "PoolMesh";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolBink : TPoolInfo<PoolBink>
{
    static constexpr auto Name = "PoolBink";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFont : TPoolInfo<PoolFont>
{
    static constexpr auto Name = "PoolFont";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFreeType : TPoolInfo<PoolFreeType>
{
    static constexpr auto Name = "PoolFreeType";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFontCache : TPoolInfo<PoolFontCache>
{
    static constexpr auto Name = "PoolFontCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGlyphCache : TPoolInfo<PoolGlyphCache>
{
    static constexpr auto Name = "PoolGlyphCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderDebug : TPoolInfo<PoolRenderDebug>
{
    static constexpr auto Name = "PoolRenderDebug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGIDebug : TPoolInfo<PoolGIDebug>
{
    static constexpr auto Name = "PoolGIDebug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGPUProfiling : TPoolInfo<PoolGPUProfiling>
{
    static constexpr auto Name = "PoolGPUProfiling";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRendering_ : TPoolInfo<PoolRendering_>
{
    static constexpr auto Name = "PoolRendering_";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFrameRendering : TPoolInfo<PoolFrameRendering>
{
    static constexpr auto Name = "PoolFrameRendering";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDoubleBufferedFrameRenderin : TPoolInfo<PoolDoubleBufferedFrameRenderin>
{
    static constexpr auto Name = "PoolDoubleBufferedFrameRenderin";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderingCore : TPoolInfo<PoolRenderingCore>
{
    static constexpr auto Name = "PoolRenderingCore";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSurfaceCache : TPoolInfo<PoolSurfaceCache>
{
    static constexpr auto Name = "PoolSurfaceCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolShaderCache : TPoolInfo<PoolShaderCache>
{
    static constexpr auto Name = "PoolShaderCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolShaderCacheShaders : TPoolInfo<PoolShaderCacheShaders>
{
    static constexpr auto Name = "PoolShaderCacheShaders";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolShaderCacheData : TPoolInfo<PoolShaderCacheData>
{
    static constexpr auto Name = "PoolShaderCacheData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolShaderCompilation : TPoolInfo<PoolShaderCompilation>
{
    static constexpr auto Name = "PoolShaderCompilation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPSO : TPoolInfo<PoolPSO>
{
    static constexpr auto Name = "PoolPSO";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolShaderCacheData_ShaderBinar : TPoolInfo<PoolShaderCacheData_ShaderBinar>
{
    static constexpr auto Name = "PoolShaderCacheData_ShaderBinar";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderProxy : TPoolInfo<PoolRenderProxy>
{
    static constexpr auto Name = "PoolRenderProxy";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderProxyInternals_Mesh : TPoolInfo<PoolRenderProxyInternals_Mesh>
{
    static constexpr auto Name = "PoolRenderProxyInternals_Mesh";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderProxy_CustomData : TPoolInfo<PoolRenderProxy_CustomData>
{
    static constexpr auto Name = "PoolRenderProxy_CustomData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderProxy_InstanceData : TPoolInfo<PoolRenderProxy_InstanceData>
{
    static constexpr auto Name = "PoolRenderProxy_InstanceData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderProxy_Handles : TPoolInfo<PoolRenderProxy_Handles>
{
    static constexpr auto Name = "PoolRenderProxy_Handles";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderResources : TPoolInfo<PoolRenderResources>
{
    static constexpr auto Name = "PoolRenderResources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderMesh : TPoolInfo<PoolRenderMesh>
{
    static constexpr auto Name = "PoolRenderMesh";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderDynamicTexture : TPoolInfo<PoolRenderDynamicTexture>
{
    static constexpr auto Name = "PoolRenderDynamicTexture";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMaterials : TPoolInfo<PoolMaterials>
{
    static constexpr auto Name = "PoolMaterials";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderMaterial : TPoolInfo<PoolRenderMaterial>
{
    static constexpr auto Name = "PoolRenderMaterial";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMaterialTechniques : TPoolInfo<PoolMaterialTechniques>
{
    static constexpr auto Name = "PoolMaterialTechniques";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMaterialStagePassData : TPoolInfo<PoolMaterialStagePassData>
{
    static constexpr auto Name = "PoolMaterialStagePassData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMaterialStagePassCache : TPoolInfo<PoolMaterialStagePassCache>
{
    static constexpr auto Name = "PoolMaterialStagePassCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderMaterialParams : TPoolInfo<PoolRenderMaterialParams>
{
    static constexpr auto Name = "PoolRenderMaterialParams";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMaterialExtractedData : TPoolInfo<PoolMaterialExtractedData>
{
    static constexpr auto Name = "PoolMaterialExtractedData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMaterialModifier : TPoolInfo<PoolMaterialModifier>
{
    static constexpr auto Name = "PoolMaterialModifier";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDecals : TPoolInfo<PoolDecals>
{
    static constexpr auto Name = "PoolDecals";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolParticleData : TPoolInfo<PoolParticleData>
{
    static constexpr auto Name = "PoolParticleData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderGraph : TPoolInfo<PoolRenderGraph>
{
    static constexpr auto Name = "PoolRenderGraph";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFlowAllocator : TPoolInfo<PoolFlowAllocator>
{
    static constexpr auto Name = "PoolFlowAllocator";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolVideoPlayer : TPoolInfo<PoolVideoPlayer>
{
    static constexpr auto Name = "PoolVideoPlayer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderData : TPoolInfo<PoolRenderData>
{
    static constexpr auto Name = "PoolRenderData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGI : TPoolInfo<PoolGI>
{
    static constexpr auto Name = "PoolGI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderBlobs : TPoolInfo<PoolRenderBlobs>
{
    static constexpr auto Name = "PoolRenderBlobs";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderBlobsBuffers : TPoolInfo<PoolRenderBlobsBuffers>
{
    static constexpr auto Name = "PoolRenderBlobsBuffers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderScene : TPoolInfo<PoolRenderScene>
{
    static constexpr auto Name = "PoolRenderScene";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderScene_Proxies : TPoolInfo<PoolRenderScene_Proxies>
{
    static constexpr auto Name = "PoolRenderScene_Proxies";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderScene_ProxyData : TPoolInfo<PoolRenderScene_ProxyData>
{
    static constexpr auto Name = "PoolRenderScene_ProxyData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderScene_PendingOps : TPoolInfo<PoolRenderScene_PendingOps>
{
    static constexpr auto Name = "PoolRenderScene_PendingOps";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderScene_RuntimeSystem : TPoolInfo<PoolRenderScene_RuntimeSystem>
{
    static constexpr auto Name = "PoolRenderScene_RuntimeSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolVisBVH : TPoolInfo<PoolVisBVH>
{
    static constexpr auto Name = "PoolVisBVH";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSkinningData : TPoolInfo<PoolSkinningData>
{
    static constexpr auto Name = "PoolSkinningData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFrameInfo : TPoolInfo<PoolFrameInfo>
{
    static constexpr auto Name = "PoolFrameInfo";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFoliage : TPoolInfo<PoolFoliage>
{
    static constexpr auto Name = "PoolFoliage";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolBatchers : TPoolInfo<PoolBatchers>
{
    static constexpr auto Name = "PoolBatchers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderCommandHandler : TPoolInfo<PoolRenderCommandHandler>
{
    static constexpr auto Name = "PoolRenderCommandHandler";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPostProcessAndEffects : TPoolInfo<PoolPostProcessAndEffects>
{
    static constexpr auto Name = "PoolPostProcessAndEffects";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEnvironment : TPoolInfo<PoolEnvironment>
{
    static constexpr auto Name = "PoolEnvironment";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolImageProcessing : TPoolInfo<PoolImageProcessing>
{
    static constexpr auto Name = "PoolImageProcessing";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderingUI : TPoolInfo<PoolRenderingUI>
{
    static constexpr auto Name = "PoolRenderingUI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolReflectionProbes : TPoolInfo<PoolReflectionProbes>
{
    static constexpr auto Name = "PoolReflectionProbes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolLighting : TPoolInfo<PoolLighting>
{
    static constexpr auto Name = "PoolLighting";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDataRegistry : TPoolInfo<PoolDataRegistry>
{
    static constexpr auto Name = "PoolDataRegistry";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolCameras : TPoolInfo<PoolCameras>
{
    static constexpr auto Name = "PoolCameras";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRaytrace : TPoolInfo<PoolRaytrace>
{
    static constexpr auto Name = "PoolRaytrace";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolVisibilitySystem : TPoolInfo<PoolVisibilitySystem>
{
    static constexpr auto Name = "PoolVisibilitySystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolVisibilityScene : TPoolInfo<PoolVisibilityScene>
{
    static constexpr auto Name = "PoolVisibilityScene";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolOccluderShapes : TPoolInfo<PoolOccluderShapes>
{
    static constexpr auto Name = "PoolOccluderShapes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering : TPoolInfo<PoolInkRendering>
{
    static constexpr auto Name = "PoolInkRendering";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_Uncategorized : TPoolInfo<PoolInkRendering_Uncategorized>
{
    static constexpr auto Name = "PoolInkRendering_Uncategorized";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_OneFrameRender : TPoolInfo<PoolInkRendering_OneFrameRender>
{
    static constexpr auto Name = "PoolInkRendering_OneFrameRender";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_Effects : TPoolInfo<PoolInkRendering_Effects>
{
    static constexpr auto Name = "PoolInkRendering_Effects";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_Math : TPoolInfo<PoolInkRendering_Math>
{
    static constexpr auto Name = "PoolInkRendering_Math";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_Text : TPoolInfo<PoolInkRendering_Text>
{
    static constexpr auto Name = "PoolInkRendering_Text";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_World : TPoolInfo<PoolInkRendering_World>
{
    static constexpr auto Name = "PoolInkRendering_World";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_Textures : TPoolInfo<PoolInkRendering_Textures>
{
    static constexpr auto Name = "PoolInkRendering_Textures";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_FSCComposition : TPoolInfo<PoolInkRendering_FSCComposition>
{
    static constexpr auto Name = "PoolInkRendering_FSCComposition";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_Composition : TPoolInfo<PoolInkRendering_Composition>
{
    static constexpr auto Name = "PoolInkRendering_Composition";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInkRendering_DrawStack : TPoolInfo<PoolInkRendering_DrawStack>
{
    static constexpr auto Name = "PoolInkRendering_DrawStack";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Behaviour : TPoolInfo<PoolAI_Behaviour>
{
    static constexpr auto Name = "PoolAI_Behaviour";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Instances : TPoolInfo<PoolAI_Instances>
{
    static constexpr auto Name = "PoolAI_Instances";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Script : TPoolInfo<PoolAI_Script>
{
    static constexpr auto Name = "PoolAI_Script";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Systems : TPoolInfo<PoolAI_Systems>
{
    static constexpr auto Name = "PoolAI_Systems";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Attitudes : TPoolInfo<PoolAI_Attitudes>
{
    static constexpr auto Name = "PoolAI_Attitudes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_InfluenceMap : TPoolInfo<PoolAI_InfluenceMap>
{
    static constexpr auto Name = "PoolAI_InfluenceMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_SmartObjects : TPoolInfo<PoolAI_SmartObjects>
{
    static constexpr auto Name = "PoolAI_SmartObjects";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Senses : TPoolInfo<PoolAI_Senses>
{
    static constexpr auto Name = "PoolAI_Senses";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Components : TPoolInfo<PoolAI_Components>
{
    static constexpr auto Name = "PoolAI_Components";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolComponent : TPoolInfo<PoolComponent>
{
    static constexpr auto Name = "PoolComponent";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Movement : TPoolInfo<PoolAI_Movement>
{
    static constexpr auto Name = "PoolAI_Movement";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_MovementPolicies : TPoolInfo<PoolAI_MovementPolicies>
{
    static constexpr auto Name = "PoolAI_MovementPolicies";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Workspots : TPoolInfo<PoolAI_Workspots>
{
    static constexpr auto Name = "PoolAI_Workspots";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_GuardAreas : TPoolInfo<PoolAI_GuardAreas>
{
    static constexpr auto Name = "PoolAI_GuardAreas";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_TargetTracking : TPoolInfo<PoolAI_TargetTracking>
{
    static constexpr auto Name = "PoolAI_TargetTracking";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_TweakActions : TPoolInfo<PoolAI_TweakActions>
{
    static constexpr auto Name = "PoolAI_TweakActions";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Vehicles : TPoolInfo<PoolAI_Vehicles>
{
    static constexpr auto Name = "PoolAI_Vehicles";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_Legacy : TPoolInfo<PoolAI_Legacy>
{
    static constexpr auto Name = "PoolAI_Legacy";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_SORuntimeData : TPoolInfo<PoolAI_SORuntimeData>
{
    static constexpr auto Name = "PoolAI_SORuntimeData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_SOCompiledResources : TPoolInfo<PoolAI_SOCompiledResources>
{
    static constexpr auto Name = "PoolAI_SOCompiledResources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_SOCovers : TPoolInfo<PoolAI_SOCovers>
{
    static constexpr auto Name = "PoolAI_SOCovers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_SOAnimDB : TPoolInfo<PoolAI_SOAnimDB>
{
    static constexpr auto Name = "PoolAI_SOAnimDB";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_SONodes : TPoolInfo<PoolAI_SONodes>
{
    static constexpr auto Name = "PoolAI_SONodes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAI_SORawResources : TPoolInfo<PoolAI_SORawResources>
{
    static constexpr auto Name = "PoolAI_SORawResources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct Pool_DebugContexts : TPoolInfo<Pool_DebugContexts>
{
    static constexpr auto Name = "Pool_DebugContexts";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJSON : TPoolInfo<PoolJSON>
{
    static constexpr auto Name = "PoolJSON";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolScenes : TPoolInfo<PoolScenes>
{
    static constexpr auto Name = "PoolScenes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSceneSystem : TPoolInfo<PoolSceneSystem>
{
    static constexpr auto Name = "PoolSceneSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSceneResources : TPoolInfo<PoolSceneResources>
{
    static constexpr auto Name = "PoolSceneResources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolHTTP : TPoolInfo<PoolHTTP>
{
    static constexpr auto Name = "PoolHTTP";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolHTTP_Curl : TPoolInfo<PoolHTTP_Curl>
{
    static constexpr auto Name = "PoolHTTP_Curl";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolHTTP_UWP : TPoolInfo<PoolHTTP_UWP>
{
    static constexpr auto Name = "PoolHTTP_UWP";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolHTTP_PS4 : TPoolInfo<PoolHTTP_PS4>
{
    static constexpr auto Name = "PoolHTTP_PS4";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNode : TPoolInfo<PoolNode>
{
    static constexpr auto Name = "PoolNode";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTicket : TPoolInfo<PoolTicket>
{
    static constexpr auto Name = "PoolTicket";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFoliageNode : TPoolInfo<PoolFoliageNode>
{
    static constexpr auto Name = "PoolFoliageNode";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInteriorMap : TPoolInfo<PoolInteriorMap>
{
    static constexpr auto Name = "PoolInteriorMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMinimap : TPoolInfo<PoolMinimap>
{
    static constexpr auto Name = "PoolMinimap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWeather : TPoolInfo<PoolWeather>
{
    static constexpr auto Name = "PoolWeather";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMarker : TPoolInfo<PoolMarker>
{
    static constexpr auto Name = "PoolMarker";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNodeSource : TPoolInfo<PoolNodeSource>
{
    static constexpr auto Name = "PoolNodeSource";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNodeInstance : TPoolInfo<PoolNodeInstance>
{
    static constexpr auto Name = "PoolNodeInstance";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolIDPathRegistry : TPoolInfo<PoolIDPathRegistry>
{
    static constexpr auto Name = "PoolIDPathRegistry";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolIDStringRegistry : TPoolInfo<PoolIDStringRegistry>
{
    static constexpr auto Name = "PoolIDStringRegistry";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolIDStringBuffer : TPoolInfo<PoolIDStringBuffer>
{
    static constexpr auto Name = "PoolIDStringBuffer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolCompiledSetupInfo : TPoolInfo<PoolCompiledSetupInfo>
{
    static constexpr auto Name = "PoolCompiledSetupInfo";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMeshLocalBoundsCache : TPoolInfo<PoolMeshLocalBoundsCache>
{
    static constexpr auto Name = "PoolMeshLocalBoundsCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolStreamingQuery : TPoolInfo<PoolStreamingQuery>
{
    static constexpr auto Name = "PoolStreamingQuery";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSaveData : TPoolInfo<PoolSaveData>
{
    static constexpr auto Name = "PoolSaveData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGameServices : TPoolInfo<PoolGameServices>
{
    static constexpr auto Name = "PoolGameServices";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMultiplayerServer : TPoolInfo<PoolMultiplayerServer>
{
    static constexpr auto Name = "PoolMultiplayerServer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolArchive : TPoolInfo<PoolArchive>
{
    static constexpr auto Name = "PoolArchive";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEntityResource : TPoolInfo<PoolEntityResource>
{
    static constexpr auto Name = "PoolEntityResource";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEntityAssembler : TPoolInfo<PoolEntityAssembler>
{
    static constexpr auto Name = "PoolEntityAssembler";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEntityAppearance : TPoolInfo<PoolEntityAppearance>
{
    static constexpr auto Name = "PoolEntityAppearance";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEntityParameters : TPoolInfo<PoolEntityParameters>
{
    static constexpr auto Name = "PoolEntityParameters";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEntityParameterGarment : TPoolInfo<PoolEntityParameterGarment>
{
    static constexpr auto Name = "PoolEntityParameterGarment";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEntityParameterCorpse : TPoolInfo<PoolEntityParameterCorpse>
{
    static constexpr auto Name = "PoolEntityParameterCorpse";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEntityParameterHitRepresent : TPoolInfo<PoolEntityParameterHitRepresent>
{
    static constexpr auto Name = "PoolEntityParameterHitRepresent";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolEntity : TPoolInfo<PoolEntity>
{
    static constexpr auto Name = "PoolEntity";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDismemberment : TPoolInfo<PoolDismemberment>
{
    static constexpr auto Name = "PoolDismemberment";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDismemberment_DataBase : TPoolInfo<PoolDismemberment_DataBase>
{
    static constexpr auto Name = "PoolDismemberment_DataBase";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDismemberment_Lookup : TPoolInfo<PoolDismemberment_Lookup>
{
    static constexpr auto Name = "PoolDismemberment_Lookup";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDismemberment_RenderData : TPoolInfo<PoolDismemberment_RenderData>
{
    static constexpr auto Name = "PoolDismemberment_RenderData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNavigation : TPoolInfo<PoolNavigation>
{
    static constexpr auto Name = "PoolNavigation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNavmeshNavigation : TPoolInfo<PoolNavmeshNavigation>
{
    static constexpr auto Name = "PoolNavmeshNavigation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPathfindingNavigation : TPoolInfo<PoolPathfindingNavigation>
{
    static constexpr auto Name = "PoolPathfindingNavigation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficNavigation : TPoolInfo<PoolTrafficNavigation>
{
    static constexpr auto Name = "PoolTrafficNavigation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInfluenceMapNavigation : TPoolInfo<PoolInfluenceMapNavigation>
{
    static constexpr auto Name = "PoolInfluenceMapNavigation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolOffmeshlinkNavigation : TPoolInfo<PoolOffmeshlinkNavigation>
{
    static constexpr auto Name = "PoolOffmeshlinkNavigation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNavigationComponents : TPoolInfo<PoolNavigationComponents>
{
    static constexpr auto Name = "PoolNavigationComponents";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNavigationScripts : TPoolInfo<PoolNavigationScripts>
{
    static constexpr auto Name = "PoolNavigationScripts";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficLanes : TPoolInfo<PoolTrafficLanes>
{
    static constexpr auto Name = "PoolTrafficLanes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficStaticCollisions : TPoolInfo<PoolTrafficStaticCollisions>
{
    static constexpr auto Name = "PoolTrafficStaticCollisions";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficDynamicCollisions : TPoolInfo<PoolTrafficDynamicCollisions>
{
    static constexpr auto Name = "PoolTrafficDynamicCollisions";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficCrowdAvoidance : TPoolInfo<PoolTrafficCrowdAvoidance>
{
    static constexpr auto Name = "PoolTrafficCrowdAvoidance";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficCrowdPaths : TPoolInfo<PoolTrafficCrowdPaths>
{
    static constexpr auto Name = "PoolTrafficCrowdPaths";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficCrowdMarbles : TPoolInfo<PoolTrafficCrowdMarbles>
{
    static constexpr auto Name = "PoolTrafficCrowdMarbles";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficCrowdLocomotion : TPoolInfo<PoolTrafficCrowdLocomotion>
{
    static constexpr auto Name = "PoolTrafficCrowdLocomotion";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficSlots : TPoolInfo<PoolTrafficSlots>
{
    static constexpr auto Name = "PoolTrafficSlots";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficSpots : TPoolInfo<PoolTrafficSpots>
{
    static constexpr auto Name = "PoolTrafficSpots";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficGrid : TPoolInfo<PoolTrafficGrid>
{
    static constexpr auto Name = "PoolTrafficGrid";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficNullAreas : TPoolInfo<PoolTrafficNullAreas>
{
    static constexpr auto Name = "PoolTrafficNullAreas";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficPersistentLanes : TPoolInfo<PoolTrafficPersistentLanes>
{
    static constexpr auto Name = "PoolTrafficPersistentLanes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficCollisionMap : TPoolInfo<PoolTrafficCollisionMap>
{
    static constexpr auto Name = "PoolTrafficCollisionMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficLookup : TPoolInfo<PoolTrafficLookup>
{
    static constexpr auto Name = "PoolTrafficLookup";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficDynamicMovement : TPoolInfo<PoolTrafficDynamicMovement>
{
    static constexpr auto Name = "PoolTrafficDynamicMovement";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficDynamicMovement_Pede : TPoolInfo<PoolTrafficDynamicMovement_Pede>
{
    static constexpr auto Name = "PoolTrafficDynamicMovement_Pede";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficDynamicMovement_Vehi : TPoolInfo<PoolTrafficDynamicMovement_Vehi>
{
    static constexpr auto Name = "PoolTrafficDynamicMovement_Vehi";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct TDM_V_Representation : TPoolInfo<TDM_V_Representation>
{
    static constexpr auto Name = "TDM_V_Representation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct TDM_V_Segments : TPoolInfo<TDM_V_Segments>
{
    static constexpr auto Name = "TDM_V_Segments";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct TDM_V_Lookups : TPoolInfo<TDM_V_Lookups>
{
    static constexpr auto Name = "TDM_V_Lookups";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct TDM_P_Representation : TPoolInfo<TDM_P_Representation>
{
    static constexpr auto Name = "TDM_P_Representation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolNavigationDebug : TPoolInfo<PoolNavigationDebug>
{
    static constexpr auto Name = "PoolNavigationDebug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTrafficDebug : TPoolInfo<PoolTrafficDebug>
{
    static constexpr auto Name = "PoolTrafficDebug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText : TPoolInfo<PoolText>
{
    static constexpr auto Name = "PoolText";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_RichDecorator : TPoolInfo<PoolText_RichDecorator>
{
    static constexpr auto Name = "PoolText_RichDecorator";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Markup : TPoolInfo<PoolText_Markup>
{
    static constexpr auto Name = "PoolText_Markup";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Layout : TPoolInfo<PoolText_Layout>
{
    static constexpr auto Name = "PoolText_Layout";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Layout_Break : TPoolInfo<PoolText_Layout_Break>
{
    static constexpr auto Name = "PoolText_Layout_Break";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Layout_Block : TPoolInfo<PoolText_Layout_Block>
{
    static constexpr auto Name = "PoolText_Layout_Block";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Layout_Model : TPoolInfo<PoolText_Layout_Model>
{
    static constexpr auto Name = "PoolText_Layout_Model";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Layout_View : TPoolInfo<PoolText_Layout_View>
{
    static constexpr auto Name = "PoolText_Layout_View";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Layout_Direction : TPoolInfo<PoolText_Layout_Direction>
{
    static constexpr auto Name = "PoolText_Layout_Direction";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Shaper : TPoolInfo<PoolText_Shaper>
{
    static constexpr auto Name = "PoolText_Shaper";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Typography : TPoolInfo<PoolText_Typography>
{
    static constexpr auto Name = "PoolText_Typography";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Font : TPoolInfo<PoolText_Font>
{
    static constexpr auto Name = "PoolText_Font";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Formatter : TPoolInfo<PoolText_Formatter>
{
    static constexpr auto Name = "PoolText_Formatter";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Params : TPoolInfo<PoolText_Params>
{
    static constexpr auto Name = "PoolText_Params";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_HB : TPoolInfo<PoolText_HB>
{
    static constexpr auto Name = "PoolText_HB";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_HB_Internal : TPoolInfo<PoolText_HB_Internal>
{
    static constexpr auto Name = "PoolText_HB_Internal";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_ICU : TPoolInfo<PoolText_ICU>
{
    static constexpr auto Name = "PoolText_ICU";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_ICU_Internal : TPoolInfo<PoolText_ICU_Internal>
{
    static constexpr auto Name = "PoolText_ICU_Internal";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_ICU_Data_Packagae : TPoolInfo<PoolText_ICU_Data_Packagae>
{
    static constexpr auto Name = "PoolText_ICU_Data_Packagae";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_Run : TPoolInfo<PoolText_Run>
{
    static constexpr auto Name = "PoolText_Run";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_GlyphCache : TPoolInfo<PoolText_GlyphCache>
{
    static constexpr auto Name = "PoolText_GlyphCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolText_UTF16 : TPoolInfo<PoolText_UTF16>
{
    static constexpr auto Name = "PoolText_UTF16";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Objects : TPoolInfo<PoolGMPL_Objects>
{
    static constexpr auto Name = "PoolGMPL_Objects";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL : TPoolInfo<PoolGMPL>
{
    static constexpr auto Name = "PoolGMPL";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Components : TPoolInfo<PoolGMPL_Components>
{
    static constexpr auto Name = "PoolGMPL_Components";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Components_ScriptableC : TPoolInfo<PoolGMPL_Components_ScriptableC>
{
    static constexpr auto Name = "PoolGMPL_Components_ScriptableC";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Components_EntitySpawn : TPoolInfo<PoolGMPL_Components_EntitySpawn>
{
    static constexpr auto Name = "PoolGMPL_Components_EntitySpawn";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Abstract : TPoolInfo<PoolGMPL_Abstract>
{
    static constexpr auto Name = "PoolGMPL_Abstract";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population : TPoolInfo<PoolGMPL_Population>
{
    static constexpr auto Name = "PoolGMPL_Population";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population_Puppets : TPoolInfo<PoolGMPL_Population_Puppets>
{
    static constexpr auto Name = "PoolGMPL_Population_Puppets";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population_Community : TPoolInfo<PoolGMPL_Population_Community>
{
    static constexpr auto Name = "PoolGMPL_Population_Community";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population_Data : TPoolInfo<PoolGMPL_Population_Data>
{
    static constexpr auto Name = "PoolGMPL_Population_Data";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population_StreamableD : TPoolInfo<PoolGMPL_Population_StreamableD>
{
    static constexpr auto Name = "PoolGMPL_Population_StreamableD";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population_System : TPoolInfo<PoolGMPL_Population_System>
{
    static constexpr auto Name = "PoolGMPL_Population_System";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population_Community_S : TPoolInfo<PoolGMPL_Population_Community_S>
{
    static constexpr auto Name = "PoolGMPL_Population_Community_S";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population_Crowd : TPoolInfo<PoolGMPL_Population_Crowd>
{
    static constexpr auto Name = "PoolGMPL_Population_Crowd";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Population_DistantCrow : TPoolInfo<PoolGMPL_Population_DistantCrow>
{
    static constexpr auto Name = "PoolGMPL_Population_DistantCrow";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles : TPoolInfo<PoolGMPL_Vehicles>
{
    static constexpr auto Name = "PoolGMPL_Vehicles";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_Object : TPoolInfo<PoolGMPL_Vehicles_Object>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_Object";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_System : TPoolInfo<PoolGMPL_Vehicles_System>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_System";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_Audio : TPoolInfo<PoolGMPL_Vehicles_Audio>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_Audio";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_BaseObject : TPoolInfo<PoolGMPL_Vehicles_BaseObject>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_BaseObject";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_Components : TPoolInfo<PoolGMPL_Vehicles_Components>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_Components";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_Destruction : TPoolInfo<PoolGMPL_Vehicles_Destruction>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_Destruction";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_FX : TPoolInfo<PoolGMPL_Vehicles_FX>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_FX";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_Physics : TPoolInfo<PoolGMPL_Vehicles_Physics>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_Physics";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicles_Autopilot : TPoolInfo<PoolGMPL_Vehicles_Autopilot>
{
    static constexpr auto Name = "PoolGMPL_Vehicles_Autopilot";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicle_Cameras : TPoolInfo<PoolGMPL_Vehicle_Cameras>
{
    static constexpr auto Name = "PoolGMPL_Vehicle_Cameras";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicle_Cameras_Manage : TPoolInfo<PoolGMPL_Vehicle_Cameras_Manage>
{
    static constexpr auto Name = "PoolGMPL_Vehicle_Cameras_Manage";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Vehicle_Cameras_TPPCom : TPoolInfo<PoolGMPL_Vehicle_Cameras_TPPCom>
{
    static constexpr auto Name = "PoolGMPL_Vehicle_Cameras_TPPCom";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Items : TPoolInfo<PoolGMPL_Items>
{
    static constexpr auto Name = "PoolGMPL_Items";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Items_Inventory : TPoolInfo<PoolGMPL_Items_Inventory>
{
    static constexpr auto Name = "PoolGMPL_Items_Inventory";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Items_Object : TPoolInfo<PoolGMPL_Items_Object>
{
    static constexpr auto Name = "PoolGMPL_Items_Object";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Items_Loot : TPoolInfo<PoolGMPL_Items_Loot>
{
    static constexpr auto Name = "PoolGMPL_Items_Loot";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Items_Factory : TPoolInfo<PoolGMPL_Items_Factory>
{
    static constexpr auto Name = "PoolGMPL_Items_Factory";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Items_AttachmentSlots : TPoolInfo<PoolGMPL_Items_AttachmentSlots>
{
    static constexpr auto Name = "PoolGMPL_Items_AttachmentSlots";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Script : TPoolInfo<PoolGMPL_Script>
{
    static constexpr auto Name = "PoolGMPL_Script";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Script_ScriptableSyste : TPoolInfo<PoolGMPL_Script_ScriptableSyste>
{
    static constexpr auto Name = "PoolGMPL_Script_ScriptableSyste";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Script_ScripsOptimizat : TPoolInfo<PoolGMPL_Script_ScripsOptimizat>
{
    static constexpr auto Name = "PoolGMPL_Script_ScripsOptimizat";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG : TPoolInfo<PoolGMPL_RPG>
{
    static constexpr auto Name = "PoolGMPL_RPG";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_Stats : TPoolInfo<PoolGMPL_RPG_Stats>
{
    static constexpr auto Name = "PoolGMPL_RPG_Stats";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatPools : TPoolInfo<PoolGMPL_RPG_StatPools>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatPools";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatsBundles : TPoolInfo<PoolGMPL_RPG_StatsBundles>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatsBundles";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatDepot : TPoolInfo<PoolGMPL_RPG_StatDepot>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatDepot";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatModifiers : TPoolInfo<PoolGMPL_RPG_StatModifiers>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatModifiers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatsCallbacks : TPoolInfo<PoolGMPL_RPG_StatsCallbacks>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatsCallbacks";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatWrappers : TPoolInfo<PoolGMPL_RPG_StatWrappers>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatWrappers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatPoolRequests : TPoolInfo<PoolGMPL_RPG_StatPoolRequests>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatPoolRequests";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatPoolListeners : TPoolInfo<PoolGMPL_RPG_StatPoolListeners>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatPoolListeners";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_StatPoolData : TPoolInfo<PoolGMPL_RPG_StatPoolData>
{
    static constexpr auto Name = "PoolGMPL_RPG_StatPoolData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_Effectors : TPoolInfo<PoolGMPL_RPG_Effectors>
{
    static constexpr auto Name = "PoolGMPL_RPG_Effectors";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_Weakspots : TPoolInfo<PoolGMPL_RPG_Weakspots>
{
    static constexpr auto Name = "PoolGMPL_RPG_Weakspots";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_RPG_GameplayLogicPacka : TPoolInfo<PoolGMPL_RPG_GameplayLogicPacka>
{
    static constexpr auto Name = "PoolGMPL_RPG_GameplayLogicPacka";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Devices : TPoolInfo<PoolGMPL_Devices>
{
    static constexpr auto Name = "PoolGMPL_Devices";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Devices_Actions : TPoolInfo<PoolGMPL_Devices_Actions>
{
    static constexpr auto Name = "PoolGMPL_Devices_Actions";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Devices_Data : TPoolInfo<PoolGMPL_Devices_Data>
{
    static constexpr auto Name = "PoolGMPL_Devices_Data";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Devices_Data_Cook : TPoolInfo<PoolGMPL_Devices_Data_Cook>
{
    static constexpr auto Name = "PoolGMPL_Devices_Data_Cook";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Devices_Data_HMap : TPoolInfo<PoolGMPL_Devices_Data_HMap>
{
    static constexpr auto Name = "PoolGMPL_Devices_Data_HMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Devices_Misc : TPoolInfo<PoolGMPL_Devices_Misc>
{
    static constexpr auto Name = "PoolGMPL_Devices_Misc";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Devices_Visibility : TPoolInfo<PoolGMPL_Devices_Visibility>
{
    static constexpr auto Name = "PoolGMPL_Devices_Visibility";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Interactions : TPoolInfo<PoolGMPL_Interactions>
{
    static constexpr auto Name = "PoolGMPL_Interactions";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Mappin : TPoolInfo<PoolGMPL_Mappin>
{
    static constexpr auto Name = "PoolGMPL_Mappin";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_MappinStatic : TPoolInfo<PoolGMPL_MappinStatic>
{
    static constexpr auto Name = "PoolGMPL_MappinStatic";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_MappinDynamic : TPoolInfo<PoolGMPL_MappinDynamic>
{
    static constexpr auto Name = "PoolGMPL_MappinDynamic";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_MappinGPS : TPoolInfo<PoolGMPL_MappinGPS>
{
    static constexpr auto Name = "PoolGMPL_MappinGPS";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_MappinOther : TPoolInfo<PoolGMPL_MappinOther>
{
    static constexpr auto Name = "PoolGMPL_MappinOther";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_PS : TPoolInfo<PoolGMPL_PS>
{
    static constexpr auto Name = "PoolGMPL_PS";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Quest : TPoolInfo<PoolGMPL_Quest>
{
    static constexpr auto Name = "PoolGMPL_Quest";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_QuestStatic : TPoolInfo<PoolGMPL_QuestStatic>
{
    static constexpr auto Name = "PoolGMPL_QuestStatic";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_QuestDynamic : TPoolInfo<PoolGMPL_QuestDynamic>
{
    static constexpr auto Name = "PoolGMPL_QuestDynamic";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_QuestJournal : TPoolInfo<PoolGMPL_QuestJournal>
{
    static constexpr auto Name = "PoolGMPL_QuestJournal";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_QuestFDB : TPoolInfo<PoolGMPL_QuestFDB>
{
    static constexpr auto Name = "PoolGMPL_QuestFDB";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Save : TPoolInfo<PoolGMPL_Save>
{
    static constexpr auto Name = "PoolGMPL_Save";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB : TPoolInfo<PoolGMPL_TDB>
{
    static constexpr auto Name = "PoolGMPL_TDB";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB_Loader : TPoolInfo<PoolGMPL_TDB_Loader>
{
    static constexpr auto Name = "PoolGMPL_TDB_Loader";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB_Data : TPoolInfo<PoolGMPL_TDB_Data>
{
    static constexpr auto Name = "PoolGMPL_TDB_Data";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB_Records : TPoolInfo<PoolGMPL_TDB_Records>
{
    static constexpr auto Name = "PoolGMPL_TDB_Records";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB_FlatMap : TPoolInfo<PoolGMPL_TDB_FlatMap>
{
    static constexpr auto Name = "PoolGMPL_TDB_FlatMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB_RecordMap : TPoolInfo<PoolGMPL_TDB_RecordMap>
{
    static constexpr auto Name = "PoolGMPL_TDB_RecordMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB_RecordTypeMap : TPoolInfo<PoolGMPL_TDB_RecordTypeMap>
{
    static constexpr auto Name = "PoolGMPL_TDB_RecordTypeMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB_QueryToRecordMap : TPoolInfo<PoolGMPL_TDB_QueryToRecordMap>
{
    static constexpr auto Name = "PoolGMPL_TDB_QueryToRecordMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TDB_GroupTagsMap : TPoolInfo<PoolGMPL_TDB_GroupTagsMap>
{
    static constexpr auto Name = "PoolGMPL_TDB_GroupTagsMap";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Small : TPoolInfo<PoolGMPL_Small>
{
    static constexpr auto Name = "PoolGMPL_Small";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Blackboards : TPoolInfo<PoolGMPL_Blackboards>
{
    static constexpr auto Name = "PoolGMPL_Blackboards";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Effect : TPoolInfo<PoolGMPL_Effect>
{
    static constexpr auto Name = "PoolGMPL_Effect";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Time : TPoolInfo<PoolGMPL_Time>
{
    static constexpr auto Name = "PoolGMPL_Time";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Time_Dilation : TPoolInfo<PoolGMPL_Time_Dilation>
{
    static constexpr auto Name = "PoolGMPL_Time_Dilation";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Time_Delay : TPoolInfo<PoolGMPL_Time_Delay>
{
    static constexpr auto Name = "PoolGMPL_Time_Delay";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Time_System : TPoolInfo<PoolGMPL_Time_System>
{
    static constexpr auto Name = "PoolGMPL_Time_System";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_DynamicID : TPoolInfo<PoolGMPL_DynamicID>
{
    static constexpr auto Name = "PoolGMPL_DynamicID";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Input : TPoolInfo<PoolGMPL_Input>
{
    static constexpr auto Name = "PoolGMPL_Input";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_SpatialQuery : TPoolInfo<PoolGMPL_SpatialQuery>
{
    static constexpr auto Name = "PoolGMPL_SpatialQuery";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Camera : TPoolInfo<PoolGMPL_Camera>
{
    static constexpr auto Name = "PoolGMPL_Camera";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Destruction : TPoolInfo<PoolGMPL_Destruction>
{
    static constexpr auto Name = "PoolGMPL_Destruction";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Hit : TPoolInfo<PoolGMPL_Hit>
{
    static constexpr auto Name = "PoolGMPL_Hit";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Mounting : TPoolInfo<PoolGMPL_Mounting>
{
    static constexpr auto Name = "PoolGMPL_Mounting";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_MovingPlatform : TPoolInfo<PoolGMPL_MovingPlatform>
{
    static constexpr auto Name = "PoolGMPL_MovingPlatform";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Prereq : TPoolInfo<PoolGMPL_Prereq>
{
    static constexpr auto Name = "PoolGMPL_Prereq";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Projectile : TPoolInfo<PoolGMPL_Projectile>
{
    static constexpr auto Name = "PoolGMPL_Projectile";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Scanning : TPoolInfo<PoolGMPL_Scanning>
{
    static constexpr auto Name = "PoolGMPL_Scanning";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TransformAnim : TPoolInfo<PoolGMPL_TransformAnim>
{
    static constexpr auto Name = "PoolGMPL_TransformAnim";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TransformAnim_PlayData : TPoolInfo<PoolGMPL_TransformAnim_PlayData>
{
    static constexpr auto Name = "PoolGMPL_TransformAnim_PlayData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_TransformAnim_Persiste : TPoolInfo<PoolGMPL_TransformAnim_Persiste>
{
    static constexpr auto Name = "PoolGMPL_TransformAnim_Persiste";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting : TPoolInfo<PoolGMPL_Targeting>
{
    static constexpr auto Name = "PoolGMPL_Targeting";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_System : TPoolInfo<PoolGMPL_Targeting_System>
{
    static constexpr auto Name = "PoolGMPL_Targeting_System";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_System_Main : TPoolInfo<PoolGMPL_Targeting_System_Main>
{
    static constexpr auto Name = "PoolGMPL_Targeting_System_Main";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_System_Tick : TPoolInfo<PoolGMPL_Targeting_System_Tick>
{
    static constexpr auto Name = "PoolGMPL_Targeting_System_Tick";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_Components : TPoolInfo<PoolGMPL_Targeting_Components>
{
    static constexpr auto Name = "PoolGMPL_Targeting_Components";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_Filter : TPoolInfo<PoolGMPL_Targeting_Filter>
{
    static constexpr auto Name = "PoolGMPL_Targeting_Filter";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_AimAssist : TPoolInfo<PoolGMPL_Targeting_AimAssist>
{
    static constexpr auto Name = "PoolGMPL_Targeting_AimAssist";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_SmartGun : TPoolInfo<PoolGMPL_Targeting_SmartGun>
{
    static constexpr auto Name = "PoolGMPL_Targeting_SmartGun";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_TargetStruct : TPoolInfo<PoolGMPL_Targeting_TargetStruct>
{
    static constexpr auto Name = "PoolGMPL_Targeting_TargetStruct";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Targeting_User : TPoolInfo<PoolGMPL_Targeting_User>
{
    static constexpr auto Name = "PoolGMPL_Targeting_User";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_VisionMode : TPoolInfo<PoolGMPL_VisionMode>
{
    static constexpr auto Name = "PoolGMPL_VisionMode";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Weapon : TPoolInfo<PoolGMPL_Weapon>
{
    static constexpr auto Name = "PoolGMPL_Weapon";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Spawn : TPoolInfo<PoolGMPL_Spawn>
{
    static constexpr auto Name = "PoolGMPL_Spawn";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Light : TPoolInfo<PoolGMPL_Light>
{
    static constexpr auto Name = "PoolGMPL_Light";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Fx : TPoolInfo<PoolGMPL_Fx>
{
    static constexpr auto Name = "PoolGMPL_Fx";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Micro : TPoolInfo<PoolGMPL_Micro>
{
    static constexpr auto Name = "PoolGMPL_Micro";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_PlayerSystem : TPoolInfo<PoolGMPL_PlayerSystem>
{
    static constexpr auto Name = "PoolGMPL_PlayerSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_PSM : TPoolInfo<PoolGMPL_PSM>
{
    static constexpr auto Name = "PoolGMPL_PSM";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_PingSystem : TPoolInfo<PoolGMPL_PingSystem>
{
    static constexpr auto Name = "PoolGMPL_PingSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_AIDirector : TPoolInfo<PoolGMPL_AIDirector>
{
    static constexpr auto Name = "PoolGMPL_AIDirector";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_CooldownSystem : TPoolInfo<PoolGMPL_CooldownSystem>
{
    static constexpr auto Name = "PoolGMPL_CooldownSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_EnvironmentDamageSyste : TPoolInfo<PoolGMPL_EnvironmentDamageSyste>
{
    static constexpr auto Name = "PoolGMPL_EnvironmentDamageSyste";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_PhotoMode : TPoolInfo<PoolGMPL_PhotoMode>
{
    static constexpr auto Name = "PoolGMPL_PhotoMode";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_LevelAssignment : TPoolInfo<PoolGMPL_LevelAssignment>
{
    static constexpr auto Name = "PoolGMPL_LevelAssignment";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_FootstepSystem : TPoolInfo<PoolGMPL_FootstepSystem>
{
    static constexpr auto Name = "PoolGMPL_FootstepSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_NarrationPlate : TPoolInfo<PoolGMPL_NarrationPlate>
{
    static constexpr auto Name = "PoolGMPL_NarrationPlate";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_CharacterCustomization : TPoolInfo<PoolGMPL_CharacterCustomization>
{
    static constexpr auto Name = "PoolGMPL_CharacterCustomization";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_Phantom : TPoolInfo<PoolGMPL_Phantom>
{
    static constexpr auto Name = "PoolGMPL_Phantom";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGMPL_ObjectCarrySystem : TPoolInfo<PoolGMPL_ObjectCarrySystem>
{
    static constexpr auto Name = "PoolGMPL_ObjectCarrySystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGOGRewards : TPoolInfo<PoolGOGRewards>
{
    static constexpr auto Name = "PoolGOGRewards";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimSystem : TPoolInfo<PoolAnimSystem>
{
    static constexpr auto Name = "PoolAnimSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimResources : TPoolInfo<PoolAnimResources>
{
    static constexpr auto Name = "PoolAnimResources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimInstances : TPoolInfo<PoolAnimInstances>
{
    static constexpr auto Name = "PoolAnimInstances";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimMisc : TPoolInfo<PoolAnimMisc>
{
    static constexpr auto Name = "PoolAnimMisc";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimBufferStreaming : TPoolInfo<PoolAnimBufferStreaming>
{
    static constexpr auto Name = "PoolAnimBufferStreaming";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimBuffers : TPoolInfo<PoolAnimBuffers>
{
    static constexpr auto Name = "PoolAnimBuffers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimBuffers_Decompressed : TPoolInfo<PoolAnimBuffers_Decompressed>
{
    static constexpr auto Name = "PoolAnimBuffers_Decompressed";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimBuffers_Compressed : TPoolInfo<PoolAnimBuffers_Compressed>
{
    static constexpr auto Name = "PoolAnimBuffers_Compressed";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimGraphs : TPoolInfo<PoolAnimGraphs>
{
    static constexpr auto Name = "PoolAnimGraphs";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimFacial : TPoolInfo<PoolAnimFacial>
{
    static constexpr auto Name = "PoolAnimFacial";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimSets : TPoolInfo<PoolAnimSets>
{
    static constexpr auto Name = "PoolAnimSets";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimMotionExtraction : TPoolInfo<PoolAnimMotionExtraction>
{
    static constexpr auto Name = "PoolAnimMotionExtraction";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimRigs : TPoolInfo<PoolAnimRigs>
{
    static constexpr auto Name = "PoolAnimRigs";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimSetsEvents : TPoolInfo<PoolAnimSetsEvents>
{
    static constexpr auto Name = "PoolAnimSetsEvents";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimStreaming : TPoolInfo<PoolAnimStreaming>
{
    static constexpr auto Name = "PoolAnimStreaming";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimFallbackFrame : TPoolInfo<PoolAnimFallbackFrame>
{
    static constexpr auto Name = "PoolAnimFallbackFrame";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimGraphInstances : TPoolInfo<PoolAnimGraphInstances>
{
    static constexpr auto Name = "PoolAnimGraphInstances";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimObjects : TPoolInfo<PoolAnimObjects>
{
    static constexpr auto Name = "PoolAnimObjects";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimComponents : TPoolInfo<PoolAnimComponents>
{
    static constexpr auto Name = "PoolAnimComponents";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimWrapperManager : TPoolInfo<PoolAnimWrapperManager>
{
    static constexpr auto Name = "PoolAnimWrapperManager";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimMetaPoses : TPoolInfo<PoolAnimMetaPoses>
{
    static constexpr auto Name = "PoolAnimMetaPoses";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimMetaRigs : TPoolInfo<PoolAnimMetaRigs>
{
    static constexpr auto Name = "PoolAnimMetaRigs";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimPoseAndEventsCache : TPoolInfo<PoolAnimPoseAndEventsCache>
{
    static constexpr auto Name = "PoolAnimPoseAndEventsCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimRuntimeSystem : TPoolInfo<PoolAnimRuntimeSystem>
{
    static constexpr auto Name = "PoolAnimRuntimeSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimPoses : TPoolInfo<PoolAnimPoses>
{
    static constexpr auto Name = "PoolAnimPoses";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimRagdoll : TPoolInfo<PoolAnimRagdoll>
{
    static constexpr auto Name = "PoolAnimRagdoll";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimGraphUpdate : TPoolInfo<PoolAnimGraphUpdate>
{
    static constexpr auto Name = "PoolAnimGraphUpdate";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimDangles : TPoolInfo<PoolAnimDangles>
{
    static constexpr auto Name = "PoolAnimDangles";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimDatabases : TPoolInfo<PoolAnimDatabases>
{
    static constexpr auto Name = "PoolAnimDatabases";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimCommunication : TPoolInfo<PoolAnimCommunication>
{
    static constexpr auto Name = "PoolAnimCommunication";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimFeatures : TPoolInfo<PoolAnimFeatures>
{
    static constexpr auto Name = "PoolAnimFeatures";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimLookAts : TPoolInfo<PoolAnimLookAts>
{
    static constexpr auto Name = "PoolAnimLookAts";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimTargets : TPoolInfo<PoolAnimTargets>
{
    static constexpr auto Name = "PoolAnimTargets";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimIK : TPoolInfo<PoolAnimIK>
{
    static constexpr auto Name = "PoolAnimIK";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimSpline : TPoolInfo<PoolAnimSpline>
{
    static constexpr auto Name = "PoolAnimSpline";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimExtraData : TPoolInfo<PoolAnimExtraData>
{
    static constexpr auto Name = "PoolAnimExtraData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimCommands : TPoolInfo<PoolAnimCommands>
{
    static constexpr auto Name = "PoolAnimCommands";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimWorkspots : TPoolInfo<PoolAnimWorkspots>
{
    static constexpr auto Name = "PoolAnimWorkspots";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimMemory : TPoolInfo<PoolAnimMemory>
{
    static constexpr auto Name = "PoolAnimMemory";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimMotionProvider : TPoolInfo<PoolAnimMotionProvider>
{
    static constexpr auto Name = "PoolAnimMotionProvider";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimGraphResourceContainer : TPoolInfo<PoolAnimGraphResourceContainer>
{
    static constexpr auto Name = "PoolAnimGraphResourceContainer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimUncategorized : TPoolInfo<PoolAnimUncategorized>
{
    static constexpr auto Name = "PoolAnimUncategorized";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAnimDebug : TPoolInfo<PoolAnimDebug>
{
    static constexpr auto Name = "PoolAnimDebug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGalaxy : TPoolInfo<PoolGalaxy>
{
    static constexpr auto Name = "PoolGalaxy";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolFunctionalTests : TPoolInfo<PoolFunctionalTests>
{
    static constexpr auto Name = "PoolFunctionalTests";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMultiplayerGameplay : TPoolInfo<PoolMultiplayerGameplay>
{
    static constexpr auto Name = "PoolMultiplayerGameplay";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspots : TPoolInfo<PoolWorkspots>
{
    static constexpr auto Name = "PoolWorkspots";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotSocketCache : TPoolInfo<PoolWorkspotSocketCache>
{
    static constexpr auto Name = "PoolWorkspotSocketCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotSystem : TPoolInfo<PoolWorkspotSystem>
{
    static constexpr auto Name = "PoolWorkspotSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotSystemCommands : TPoolInfo<PoolWorkspotSystemCommands>
{
    static constexpr auto Name = "PoolWorkspotSystemCommands";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotInstances : TPoolInfo<PoolWorkspotInstances>
{
    static constexpr auto Name = "PoolWorkspotInstances";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotInstIerators : TPoolInfo<PoolWorkspotInstIerators>
{
    static constexpr auto Name = "PoolWorkspotInstIerators";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotDefault : TPoolInfo<PoolWorkspotDefault>
{
    static constexpr auto Name = "PoolWorkspotDefault";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotResources : TPoolInfo<PoolWorkspotResources>
{
    static constexpr auto Name = "PoolWorkspotResources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotResTree : TPoolInfo<PoolWorkspotResTree>
{
    static constexpr auto Name = "PoolWorkspotResTree";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotResTreeEntries : TPoolInfo<PoolWorkspotResTreeEntries>
{
    static constexpr auto Name = "PoolWorkspotResTreeEntries";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotResTreeData : TPoolInfo<PoolWorkspotResTreeData>
{
    static constexpr auto Name = "PoolWorkspotResTreeData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWorkspotResGraph : TPoolInfo<PoolWorkspotResGraph>
{
    static constexpr auto Name = "PoolWorkspotResGraph";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolLocLocalizedText : TPoolInfo<PoolLocLocalizedText>
{
    static constexpr auto Name = "PoolLocLocalizedText";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudio : TPoolInfo<PoolAudio>
{
    static constexpr auto Name = "PoolAudio";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolReplicatedEntitySystem : TPoolInfo<PoolReplicatedEntitySystem>
{
    static constexpr auto Name = "PoolReplicatedEntitySystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolWwise : TPoolInfo<PoolWwise>
{
    static constexpr auto Name = "PoolWwise";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioMetadata : TPoolInfo<PoolAudioMetadata>
{
    static constexpr auto Name = "PoolAudioMetadata";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioGeometry : TPoolInfo<PoolAudioGeometry>
{
    static constexpr auto Name = "PoolAudioGeometry";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioSystems : TPoolInfo<PoolAudioSystems>
{
    static constexpr auto Name = "PoolAudioSystems";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioSystemsGroupItems : TPoolInfo<PoolAudioSystemsGroupItems>
{
    static constexpr auto Name = "PoolAudioSystemsGroupItems";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioEmitters : TPoolInfo<PoolAudioEmitters>
{
    static constexpr auto Name = "PoolAudioEmitters";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioDecorators : TPoolInfo<PoolAudioDecorators>
{
    static constexpr auto Name = "PoolAudioDecorators";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioPropertyStream : TPoolInfo<PoolAudioPropertyStream>
{
    static constexpr auto Name = "PoolAudioPropertyStream";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioPositionStream : TPoolInfo<PoolAudioPositionStream>
{
    static constexpr auto Name = "PoolAudioPositionStream";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolLocalizationAndVo : TPoolInfo<PoolLocalizationAndVo>
{
    static constexpr auto Name = "PoolLocalizationAndVo";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioAmbients : TPoolInfo<PoolAudioAmbients>
{
    static constexpr auto Name = "PoolAudioAmbients";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioGrouping : TPoolInfo<PoolAudioGrouping>
{
    static constexpr auto Name = "PoolAudioGrouping";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioSystemInterfaces : TPoolInfo<PoolAudioSystemInterfaces>
{
    static constexpr auto Name = "PoolAudioSystemInterfaces";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioWeapons : TPoolInfo<PoolAudioWeapons>
{
    static constexpr auto Name = "PoolAudioWeapons";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioMusicAndRadio : TPoolInfo<PoolAudioMusicAndRadio>
{
    static constexpr auto Name = "PoolAudioMusicAndRadio";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSoundComponent : TPoolInfo<PoolSoundComponent>
{
    static constexpr auto Name = "PoolSoundComponent";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioMixingAndScene : TPoolInfo<PoolAudioMixingAndScene>
{
    static constexpr auto Name = "PoolAudioMixingAndScene";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioReverb : TPoolInfo<PoolAudioReverb>
{
    static constexpr auto Name = "PoolAudioReverb";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioAcousticNodes : TPoolInfo<PoolAudioAcousticNodes>
{
    static constexpr auto Name = "PoolAudioAcousticNodes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioAcousticNodeConnection : TPoolInfo<PoolAudioAcousticNodeConnection>
{
    static constexpr auto Name = "PoolAudioAcousticNodeConnection";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioAcousticNodeOctrees : TPoolInfo<PoolAudioAcousticNodeOctrees>
{
    static constexpr auto Name = "PoolAudioAcousticNodeOctrees";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioAcousticsPathfinding : TPoolInfo<PoolAudioAcousticsPathfinding>
{
    static constexpr auto Name = "PoolAudioAcousticsPathfinding";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioAcousticZones : TPoolInfo<PoolAudioAcousticZones>
{
    static constexpr auto Name = "PoolAudioAcousticZones";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAudioAcousticStreaming : TPoolInfo<PoolAudioAcousticStreaming>
{
    static constexpr auto Name = "PoolAudioAcousticStreaming";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolReplication : TPoolInfo<PoolReplication>
{
    static constexpr auto Name = "PoolReplication";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolReplicationProfiler : TPoolInfo<PoolReplicationProfiler>
{
    static constexpr auto Name = "PoolReplicationProfiler";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolReplicationRTTI : TPoolInfo<PoolReplicationRTTI>
{
    static constexpr auto Name = "PoolReplicationRTTI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInput : TPoolInfo<PoolInput>
{
    static constexpr auto Name = "PoolInput";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInGameConfig : TPoolInfo<PoolInGameConfig>
{
    static constexpr auto Name = "PoolInGameConfig";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolInGameConfigResource : TPoolInfo<PoolInGameConfigResource>
{
    static constexpr auto Name = "PoolInGameConfigResource";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolImage : TPoolInfo<PoolImage>
{
    static constexpr auto Name = "PoolImage";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolCompression : TPoolInfo<PoolCompression>
{
    static constexpr auto Name = "PoolCompression";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolAsyncIO : TPoolInfo<PoolAsyncIO>
{
    static constexpr auto Name = "PoolAsyncIO";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2 : TPoolInfo<PoolJobs2>
{
    static constexpr auto Name = "PoolJobs2";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2Debug : TPoolInfo<PoolJobs2Debug>
{
    static constexpr auto Name = "PoolJobs2Debug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2Dispatcher : TPoolInfo<PoolJobs2Dispatcher>
{
    static constexpr auto Name = "PoolJobs2Dispatcher";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2QueueLowPriority : TPoolInfo<PoolJobs2QueueLowPriority>
{
    static constexpr auto Name = "PoolJobs2QueueLowPriority";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2QueueNormalPriority : TPoolInfo<PoolJobs2QueueNormalPriority>
{
    static constexpr auto Name = "PoolJobs2QueueNormalPriority";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2QueueHighPriority : TPoolInfo<PoolJobs2QueueHighPriority>
{
    static constexpr auto Name = "PoolJobs2QueueHighPriority";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2QueueBackgroundPriorit : TPoolInfo<PoolJobs2QueueBackgroundPriorit>
{
    static constexpr auto Name = "PoolJobs2QueueBackgroundPriorit";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2Counters : TPoolInfo<PoolJobs2Counters>
{
    static constexpr auto Name = "PoolJobs2Counters";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2WaitingListEntries : TPoolInfo<PoolJobs2WaitingListEntries>
{
    static constexpr auto Name = "PoolJobs2WaitingListEntries";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2ParallelForSharedCount : TPoolInfo<PoolJobs2ParallelForSharedCount>
{
    static constexpr auto Name = "PoolJobs2ParallelForSharedCount";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2ParallelForJobEntries : TPoolInfo<PoolJobs2ParallelForJobEntries>
{
    static constexpr auto Name = "PoolJobs2ParallelForJobEntries";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobs2Data : TPoolInfo<PoolJobs2Data>
{
    static constexpr auto Name = "PoolJobs2Data";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolJobScope : TPoolInfo<PoolJobScope>
{
    static constexpr auto Name = "PoolJobScope";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGPUTextures : TPoolInfo<PoolGPUTextures>
{
    static constexpr auto Name = "PoolGPUTextures";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGPUBuffers : TPoolInfo<PoolGPUBuffers>
{
    static constexpr auto Name = "PoolGPUBuffers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGPUInPlaceRenderData : TPoolInfo<PoolGPUInPlaceRenderData>
{
    static constexpr auto Name = "PoolGPUInPlaceRenderData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGpuApi : TPoolInfo<PoolGpuApi>
{
    static constexpr auto Name = "PoolGpuApi";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolTiny : TPoolInfo<PoolTiny>
{
    static constexpr auto Name = "PoolTiny";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolDeviceData : TPoolInfo<PoolDeviceData>
{
    static constexpr auto Name = "PoolDeviceData";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolRenderStateCache : TPoolInfo<PoolRenderStateCache>
{
    static constexpr auto Name = "PoolRenderStateCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolVendorApi : TPoolInfo<PoolVendorApi>
{
    static constexpr auto Name = "PoolVendorApi";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolCommandLists : TPoolInfo<PoolCommandLists>
{
    static constexpr auto Name = "PoolCommandLists";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolCommandListCB : TPoolInfo<PoolCommandListCB>
{
    static constexpr auto Name = "PoolCommandListCB";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolResRefExtra : TPoolInfo<PoolResRefExtra>
{
    static constexpr auto Name = "PoolResRefExtra";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolQueries : TPoolInfo<PoolQueries>
{
    static constexpr auto Name = "PoolQueries";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolResidencyMgr : TPoolInfo<PoolResidencyMgr>
{
    static constexpr auto Name = "PoolResidencyMgr";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolPSOCache : TPoolInfo<PoolPSOCache>
{
    static constexpr auto Name = "PoolPSOCache";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolD3D12Allocator : TPoolInfo<PoolD3D12Allocator>
{
    static constexpr auto Name = "PoolD3D12Allocator";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolSmallBuffersPools : TPoolInfo<PoolSmallBuffersPools>
{
    static constexpr auto Name = "PoolSmallBuffersPools";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolBreadcrumbs : TPoolInfo<PoolBreadcrumbs>
{
    static constexpr auto Name = "PoolBreadcrumbs";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolBreadcrumbs_Markers : TPoolInfo<PoolBreadcrumbs_Markers>
{
    static constexpr auto Name = "PoolBreadcrumbs_Markers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolBreadcrumbs_MarkersUsed : TPoolInfo<PoolBreadcrumbs_MarkersUsed>
{
    static constexpr auto Name = "PoolBreadcrumbs_MarkersUsed";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolGPUMirror : TPoolInfo<PoolGPUMirror>
{
    static constexpr auto Name = "PoolGPUMirror";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMirrorTextures : TPoolInfo<PoolMirrorTextures>
{
    static constexpr auto Name = "PoolMirrorTextures";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Unknown : TPoolInfo<GPUM_TG_Unknown>
{
    static constexpr auto Name = "GPUM_TG_Unknown";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMirrorTexturesGeneric : TPoolInfo<PoolMirrorTexturesGeneric>
{
    static constexpr auto Name = "PoolMirrorTexturesGeneric";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Generic_Color : TPoolInfo<GPUM_TG_Generic_Color>
{
    static constexpr auto Name = "GPUM_TG_Generic_Color";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Generic_Grayscale : TPoolInfo<GPUM_TG_Generic_Grayscale>
{
    static constexpr auto Name = "GPUM_TG_Generic_Grayscale";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Generic_Normal : TPoolInfo<GPUM_TG_Generic_Normal>
{
    static constexpr auto Name = "GPUM_TG_Generic_Normal";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Generic_Data : TPoolInfo<GPUM_TG_Generic_Data>
{
    static constexpr auto Name = "GPUM_TG_Generic_Data";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Generic_UI : TPoolInfo<GPUM_TG_Generic_UI>
{
    static constexpr auto Name = "GPUM_TG_Generic_UI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Generic_Font : TPoolInfo<GPUM_TG_Generic_Font>
{
    static constexpr auto Name = "GPUM_TG_Generic_Font";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Generic_LUT : TPoolInfo<GPUM_TG_Generic_LUT>
{
    static constexpr auto Name = "GPUM_TG_Generic_LUT";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Generic_MorphBlend : TPoolInfo<GPUM_TG_Generic_MorphBlend>
{
    static constexpr auto Name = "GPUM_TG_Generic_MorphBlend";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMirrorTexturesMultilayer : TPoolInfo<PoolMirrorTexturesMultilayer>
{
    static constexpr auto Name = "PoolMirrorTexturesMultilayer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Multilayer_Color : TPoolInfo<GPUM_TG_Multilayer_Color>
{
    static constexpr auto Name = "GPUM_TG_Multilayer_Color";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Multilayer_Normal : TPoolInfo<GPUM_TG_Multilayer_Normal>
{
    static constexpr auto Name = "GPUM_TG_Multilayer_Normal";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Multilayer_Grayscale : TPoolInfo<GPUM_TG_Multilayer_Grayscale>
{
    static constexpr auto Name = "GPUM_TG_Multilayer_Grayscale";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Multilayer_Microblend : TPoolInfo<GPUM_TG_Multilayer_Microblend>
{
    static constexpr auto Name = "GPUM_TG_Multilayer_Microblend";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_Multilayer_MLMask : TPoolInfo<GPUM_TG_Multilayer_MLMask>
{
    static constexpr auto Name = "GPUM_TG_Multilayer_MLMask";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMirrorTexturesSystem : TPoolInfo<PoolMirrorTexturesSystem>
{
    static constexpr auto Name = "PoolMirrorTexturesSystem";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_Generic : TPoolInfo<GPUM_TG_System_Generic>
{
    static constexpr auto Name = "GPUM_TG_System_Generic";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RenderTarget : TPoolInfo<GPUM_TG_System_RenderTarget>
{
    static constexpr auto Name = "GPUM_TG_System_RenderTarget";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RenderTargetFlow : TPoolInfo<GPUM_TG_System_RenderTargetFlow>
{
    static constexpr auto Name = "GPUM_TG_System_RenderTargetFlow";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RenderTargetUI : TPoolInfo<GPUM_TG_System_RenderTargetUI>
{
    static constexpr auto Name = "GPUM_TG_System_RenderTargetUI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RenderTargetUI_A : TPoolInfo<GPUM_TG_System_RenderTargetUI_A>
{
    static constexpr auto Name = "GPUM_TG_System_RenderTargetUI_A";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RenderTargetUI_P : TPoolInfo<GPUM_TG_System_RenderTargetUI_P>
{
    static constexpr auto Name = "GPUM_TG_System_RenderTargetUI_P";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RenderTargetUI_M : TPoolInfo<GPUM_TG_System_RenderTargetUI_M>
{
    static constexpr auto Name = "GPUM_TG_System_RenderTargetUI_M";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RenderTargetUI_H : TPoolInfo<GPUM_TG_System_RenderTargetUI_H>
{
    static constexpr auto Name = "GPUM_TG_System_RenderTargetUI_H";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RenderTargetUI_C : TPoolInfo<GPUM_TG_System_RenderTargetUI_C>
{
    static constexpr auto Name = "GPUM_TG_System_RenderTargetUI_C";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_RayTracing : TPoolInfo<GPUM_TG_System_RayTracing>
{
    static constexpr auto Name = "GPUM_TG_System_RayTracing";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_GameplayFX : TPoolInfo<GPUM_TG_System_GameplayFX>
{
    static constexpr auto Name = "GPUM_TG_System_GameplayFX";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_PostProcess : TPoolInfo<GPUM_TG_System_PostProcess>
{
    static constexpr auto Name = "GPUM_TG_System_PostProcess";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_Environment : TPoolInfo<GPUM_TG_System_Environment>
{
    static constexpr auto Name = "GPUM_TG_System_Environment";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_EnvProbe : TPoolInfo<GPUM_TG_System_EnvProbe>
{
    static constexpr auto Name = "GPUM_TG_System_EnvProbe";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_Shadows : TPoolInfo<GPUM_TG_System_Shadows>
{
    static constexpr auto Name = "GPUM_TG_System_Shadows";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_Terrain : TPoolInfo<GPUM_TG_System_Terrain>
{
    static constexpr auto Name = "GPUM_TG_System_Terrain";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_GI : TPoolInfo<GPUM_TG_System_GI>
{
    static constexpr auto Name = "GPUM_TG_System_GI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_MultilayerProxy : TPoolInfo<GPUM_TG_System_MultilayerProxy>
{
    static constexpr auto Name = "GPUM_TG_System_MultilayerProxy";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_Video : TPoolInfo<GPUM_TG_System_Video>
{
    static constexpr auto Name = "GPUM_TG_System_Video";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_Garment : TPoolInfo<GPUM_TG_System_Garment>
{
    static constexpr auto Name = "GPUM_TG_System_Garment";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_TG_System_MorphTargets : TPoolInfo<GPUM_TG_System_MorphTargets>
{
    static constexpr auto Name = "GPUM_TG_System_MorphTargets";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct PoolMirrorBuffers : TPoolInfo<PoolMirrorBuffers>
{
    static constexpr auto Name = "PoolMirrorBuffers";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Unknown : TPoolInfo<GPUM_Buffer_Unknown>
{
    static constexpr auto Name = "GPUM_Buffer_Unknown";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_System : TPoolInfo<GPUM_Buffer_System>
{
    static constexpr auto Name = "GPUM_Buffer_System";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_MeshResource : TPoolInfo<GPUM_Buffer_MeshResource>
{
    static constexpr auto Name = "GPUM_Buffer_MeshResource";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_MeshCustom : TPoolInfo<GPUM_Buffer_MeshCustom>
{
    static constexpr auto Name = "GPUM_Buffer_MeshCustom";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_AutoSpawner : TPoolInfo<GPUM_Buffer_AutoSpawner>
{
    static constexpr auto Name = "GPUM_Buffer_AutoSpawner";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Debug : TPoolInfo<GPUM_Buffer_Debug>
{
    static constexpr auto Name = "GPUM_Buffer_Debug";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_DPL : TPoolInfo<GPUM_Buffer_DPL>
{
    static constexpr auto Name = "GPUM_Buffer_DPL";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Weather : TPoolInfo<GPUM_Buffer_Weather>
{
    static constexpr auto Name = "GPUM_Buffer_Weather";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_ReflectionProbe : TPoolInfo<GPUM_Buffer_ReflectionProbe>
{
    static constexpr auto Name = "GPUM_Buffer_ReflectionProbe";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Skinning : TPoolInfo<GPUM_Buffer_Skinning>
{
    static constexpr auto Name = "GPUM_Buffer_Skinning";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Lights : TPoolInfo<GPUM_Buffer_Lights>
{
    static constexpr auto Name = "GPUM_Buffer_Lights";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Video : TPoolInfo<GPUM_Buffer_Video>
{
    static constexpr auto Name = "GPUM_Buffer_Video";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Particles : TPoolInfo<GPUM_Buffer_Particles>
{
    static constexpr auto Name = "GPUM_Buffer_Particles";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GI : TPoolInfo<GPUM_Buffer_GI>
{
    static constexpr auto Name = "GPUM_Buffer_GI";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIManager : TPoolInfo<GPUM_Buffer_GIManager>
{
    static constexpr auto Name = "GPUM_Buffer_GIManager";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIManagerLitProbes : TPoolInfo<GPUM_Buffer_GIManagerLitProbes>
{
    static constexpr auto Name = "GPUM_Buffer_GIManagerLitProbes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIManagerLookup : TPoolInfo<GPUM_Buffer_GIManagerLookup>
{
    static constexpr auto Name = "GPUM_Buffer_GIManagerLookup";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIManagerInterpolat : TPoolInfo<GPUM_Buffer_GIManagerInterpolat>
{
    static constexpr auto Name = "GPUM_Buffer_GIManagerInterpolat";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIManagerLitBricks : TPoolInfo<GPUM_Buffer_GIManagerLitBricks>
{
    static constexpr auto Name = "GPUM_Buffer_GIManagerLitBricks";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIManagerLights : TPoolInfo<GPUM_Buffer_GIManagerLights>
{
    static constexpr auto Name = "GPUM_Buffer_GIManagerLights";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIManagerEnvVolume : TPoolInfo<GPUM_Buffer_GIManagerEnvVolume>
{
    static constexpr auto Name = "GPUM_Buffer_GIManagerEnvVolume";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIProxy : TPoolInfo<GPUM_Buffer_GIProxy>
{
    static constexpr auto Name = "GPUM_Buffer_GIProxy";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIProxyBrick : TPoolInfo<GPUM_Buffer_GIProxyBrick>
{
    static constexpr auto Name = "GPUM_Buffer_GIProxyBrick";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIProxySurfel : TPoolInfo<GPUM_Buffer_GIProxySurfel>
{
    static constexpr auto Name = "GPUM_Buffer_GIProxySurfel";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIProxyProbes : TPoolInfo<GPUM_Buffer_GIProxyProbes>
{
    static constexpr auto Name = "GPUM_Buffer_GIProxyProbes";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIProxyFactors : TPoolInfo<GPUM_Buffer_GIProxyFactors>
{
    static constexpr auto Name = "GPUM_Buffer_GIProxyFactors";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_GIProxyAcceleration : TPoolInfo<GPUM_Buffer_GIProxyAcceleration>
{
    static constexpr auto Name = "GPUM_Buffer_GIProxyAcceleration";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Raytracing : TPoolInfo<GPUM_Buffer_Raytracing>
{
    static constexpr auto Name = "GPUM_Buffer_Raytracing";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_RaytracingUpload : TPoolInfo<GPUM_Buffer_RaytracingUpload>
{
    static constexpr auto Name = "GPUM_Buffer_RaytracingUpload";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_RaytracingAS : TPoolInfo<GPUM_Buffer_RaytracingAS>
{
    static constexpr auto Name = "GPUM_Buffer_RaytracingAS";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Decals : TPoolInfo<GPUM_Buffer_Decals>
{
    static constexpr auto Name = "GPUM_Buffer_Decals";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Instances : TPoolInfo<GPUM_Buffer_Instances>
{
    static constexpr auto Name = "GPUM_Buffer_Instances";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Materials : TPoolInfo<GPUM_Buffer_Materials>
{
    static constexpr auto Name = "GPUM_Buffer_Materials";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Multilayer : TPoolInfo<GPUM_Buffer_Multilayer>
{
    static constexpr auto Name = "GPUM_Buffer_Multilayer";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_FrameResources : TPoolInfo<GPUM_Buffer_FrameResources>
{
    static constexpr auto Name = "GPUM_Buffer_FrameResources";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_Misc : TPoolInfo<GPUM_Buffer_Misc>
{
    static constexpr auto Name = "GPUM_Buffer_Misc";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};

struct GPUM_Buffer_MorphTargets : TPoolInfo<GPUM_Buffer_MorphTargets>
{
    static constexpr auto Name = "GPUM_Buffer_MorphTargets";

    inline static auto Get()
    {
        return TPoolInfo::Get(Name);
    }
};
} // namespace RED4ext::Memory
