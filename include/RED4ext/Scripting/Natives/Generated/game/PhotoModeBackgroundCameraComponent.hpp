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

namespace RED4ext
{
struct DynamicTexture;
namespace world { struct EnvironmentAreaParameters; }

namespace game { 
struct PhotoModeBackgroundCameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gamePhotoModeBackgroundCameraComponent";
    static constexpr const char* ALIAS = NAME;

    RaRef<DynamicTexture> dynamicTextureRes; // 1D0
    uint8_t unk1D8[0x1F0 - 0x1D8]; // 1D8
    CName virtualCameraName; // 1F0
    Ref<world::EnvironmentAreaParameters> env; // 1F8
    WorldRenderAreaSettings params; // 210
    uint8_t unk220[0x900 - 0x220]; // 220
    float streamingDistance; // 900
    Color backgroundColor; // 904
    float depthCutDistance; // 908
    RenderSceneLayer renderSceneLayer; // 90C
    bool overrideBackgroundColor; // 90D
    uint8_t unk90E[0x910 - 0x90E]; // 90E
};
RED4EXT_ASSERT_SIZE(PhotoModeBackgroundCameraComponent, 0x910);
} // namespace game
} // namespace RED4ext
