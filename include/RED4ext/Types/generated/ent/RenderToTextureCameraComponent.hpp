#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Color.hpp>
#include <RED4ext/Types/generated/RenderSceneLayer.hpp>
#include <RED4ext/Types/generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Types/generated/ent/BaseCameraComponent.hpp>
#include <RED4ext/Types/generated/ent/RenderToTextureFeatures.hpp>
#include <RED4ext/Types/generated/ent/RenderToTextureMode.hpp>

namespace RED4ext
{
struct DynamicTexture;
namespace world { struct EnvironmentAreaParameters; }

namespace ent { 
struct RenderToTextureCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "entRenderToTextureCameraComponent";
    static constexpr const char* ALIAS = NAME;

    RaRef<DynamicTexture> dynamicTextureRes; // 1C0
    uint8_t unk1C8[0x1D8 - 0x1C8]; // 1C8
    Ref<DynamicTexture> depthDynamicTextureRes; // 1D8
    Ref<DynamicTexture> albedoDynamicTextureRes; // 1F0
    Ref<DynamicTexture> normalsDynamicTextureRes; // 208
    Ref<DynamicTexture> particlesDynamicTextureRes; // 220
    uint32_t resolutionWidth; // 238
    uint32_t resolutionHeight; // 23C
    CName virtualCameraName; // 240
    Ref<world::EnvironmentAreaParameters> env; // 248
    WorldRenderAreaSettings params; // 260
    ent::RenderToTextureMode renderingMode; // 270
    uint8_t unk271[0x950 - 0x271]; // 271
    float streamingDistance; // 950
    float aspectRatio; // 954
    Color backgroundColor; // 958
    float depthCutDistance; // 95C
    RenderSceneLayer renderSceneLayer; // 960
    bool overrideBackgroundColor; // 961
    ent::RenderToTextureFeatures features; // 962
    uint8_t unk969[0x970 - 0x969]; // 969
};
RED4EXT_ASSERT_SIZE(RenderToTextureCameraComponent, 0x970);
} // namespace ent
} // namespace RED4ext
