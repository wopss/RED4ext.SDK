#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayer.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RenderToTextureFeatures.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RenderToTextureMode.hpp>

namespace RED4ext
{
struct DynamicTexture;
namespace world { struct EnvironmentAreaParameters; }

namespace ent { 
struct RenderToTextureCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "entRenderToTextureCameraComponent";
    static constexpr const char* ALIAS = NAME;

    RaRef<DynamicTexture> dynamicTextureRes; // 1D0
    uint8_t unk1D8[0x1E8 - 0x1D8]; // 1D8
    Ref<DynamicTexture> depthDynamicTextureRes; // 1E8
    Ref<DynamicTexture> albedoDynamicTextureRes; // 200
    Ref<DynamicTexture> normalsDynamicTextureRes; // 218
    Ref<DynamicTexture> particlesDynamicTextureRes; // 230
    uint32_t resolutionWidth; // 248
    uint32_t resolutionHeight; // 24C
    CName virtualCameraName; // 250
    Ref<world::EnvironmentAreaParameters> env; // 258
    WorldRenderAreaSettings params; // 270
    ent::RenderToTextureMode renderingMode; // 280
    uint8_t unk281[0x960 - 0x281]; // 281
    float streamingDistance; // 960
    float aspectRatio; // 964
    Color backgroundColor; // 968
    float depthCutDistance; // 96C
    RenderSceneLayer renderSceneLayer; // 970
    bool overrideBackgroundColor; // 971
    ent::RenderToTextureFeatures features; // 972
    uint8_t unk978[0x980 - 0x978]; // 978
};
RED4EXT_ASSERT_SIZE(RenderToTextureCameraComponent, 0x980);
} // namespace ent
} // namespace RED4ext
