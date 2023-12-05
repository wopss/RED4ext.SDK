#pragma once

// clang-format off

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

namespace ent
{
struct __declspec(align(0x10)) RenderToTextureCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "entRenderToTextureCameraComponent";
    static constexpr const char* ALIAS = NAME;

    RaRef<DynamicTexture> dynamicTextureRes; // 1E0
    uint8_t unk1E8[0x1F8 - 0x1E8]; // 1E8
    Ref<DynamicTexture> depthDynamicTextureRes; // 1F8
    Ref<DynamicTexture> albedoDynamicTextureRes; // 210
    Ref<DynamicTexture> normalsDynamicTextureRes; // 228
    Ref<DynamicTexture> particlesDynamicTextureRes; // 240
    uint32_t resolutionWidth; // 258
    uint32_t resolutionHeight; // 25C
    CName virtualCameraName; // 260
    Ref<world::EnvironmentAreaParameters> env; // 268
    WorldRenderAreaSettings params; // 280
    ent::RenderToTextureMode renderingMode; // 290
    uint8_t unk291[0x9E4 - 0x291]; // 291
    float streamingDistance; // 9E4
    float aspectRatio; // 9E8
    Color backgroundColor; // 9EC
    float depthCutDistance; // 9F0
    RenderSceneLayer renderSceneLayer; // 9F4
    bool overrideBackgroundColor; // 9F5
    ent::RenderToTextureFeatures features; // 9F6
    uint8_t unk9FE[0xA10 - 0x9FE]; // 9FE
};
RED4EXT_ASSERT_SIZE(RenderToTextureCameraComponent, 0xA10);
} // namespace ent
using entRenderToTextureCameraComponent = ent::RenderToTextureCameraComponent;
} // namespace RED4ext

// clang-format on
