#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/ECameraRenderingQuality.hpp>
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
    uint8_t unk260[0x270 - 0x260]; // 260
    CName virtualCameraName; // 270
    Ref<world::EnvironmentAreaParameters> env; // 278
    WorldRenderAreaSettings params; // 290
    ent::RenderToTextureMode renderingMode; // 2A0
    uint8_t unk2A1[0x2A4 - 0x2A1]; // 2A1
    ECameraRenderingQuality renderingQuality; // 2A4
    uint8_t unk2A8[0xA34 - 0x2A8]; // 2A8
    float streamingDistance; // A34
    float aspectRatio; // A38
    Color backgroundColor; // A3C
    float depthCutDistance; // A40
    RenderSceneLayer renderSceneLayer; // A44
    bool overrideBackgroundColor; // A45
    uint8_t unkA46[0xA48 - 0xA46]; // A46
    uint32_t renderFrequency; // A48
    uint32_t renderPhase; // A4C
    uint8_t unkA50[0xA51 - 0xA50]; // A50
    ent::RenderToTextureFeatures features; // A51
    uint8_t unkA5C[0xA70 - 0xA5C]; // A5C
};
RED4EXT_ASSERT_SIZE(RenderToTextureCameraComponent, 0xA70);
} // namespace ent
using entRenderToTextureCameraComponent = ent::RenderToTextureCameraComponent;
} // namespace RED4ext

// clang-format on
